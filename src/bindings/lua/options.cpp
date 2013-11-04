/*
Copyright (c) 2013 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#ifdef LEAN_USE_LUA
#include <sstream>
#include <lua.hpp>
#include "util/debug.h"
#include "util/name.h"
#include "util/sexpr/options.h"
#include "bindings/lua/util.h"

namespace lean {
static int mk_option(lua_State * L);
static int options_gc(lua_State * L);
static int options_tostring(lua_State * L);
static int options_contains(lua_State * L);
static int options_size(lua_State * L);
static int options_empty(lua_State * L);
static int options_get_bool(lua_State * L);
static int options_get_int(lua_State * L);
static int options_get_unsigned(lua_State * L);
static int options_get_double(lua_State * L);
static int options_get_string(lua_State * L);
static int options_update_bool(lua_State * L);
static int options_update_int(lua_State * L);
static int options_update_unsigned(lua_State * L);
static int options_update_double(lua_State * L);
static int options_update_string(lua_State * L);

static const struct luaL_Reg options_m[] = {
    {"__gc",            options_gc}, // never throws
    {"__tostring",      safe_function<options_tostring>},
    {"__len",           safe_function<options_size> },
    {"contains",        safe_function<options_contains>},
    {"size",            safe_function<options_size>},
    {"empty",           safe_function<options_empty>},
    {"get_bool",        safe_function<options_get_bool>},
    {"get_int",         safe_function<options_get_int>},
    {"get_unsigned",    safe_function<options_get_unsigned>},
    {"get_double",      safe_function<options_get_double>},
    {"get_string",      safe_function<options_get_string>},
    {"update_bool",     safe_function<options_update_bool>},
    {"update_int",      safe_function<options_update_int>},
    {"update_unsigned", safe_function<options_update_unsigned>},
    {"update_double",   safe_function<options_update_double>},
    {"update_string",   safe_function<options_update_string>},
    {0, 0}
};

void open_options(lua_State * L) {
    luaL_newmetatable(L, "options.mt");
    lua_pushvalue(L, -1);
    lua_setfield(L, -2, "__index");
    setfuncs(L, options_m, 0);

    lua_pushcfunction(L, safe_function<mk_option>);
    lua_setglobal(L, "options");
}

static int push_options(lua_State * L, options const & o) {
    void * mem = lua_newuserdata(L, sizeof(options));
    new (mem) options(o);
    luaL_getmetatable(L, "options.mt");
    lua_setmetatable(L, -2);
    return 1;
}

static int mk_option(lua_State * L) {
    // int nargs = lua_gettop(L);
    options r;

    // TODO(Leo): optional table argument

    return push_options(L, r);
}

static name to_key(lua_State * L, unsigned idx) {
    if (lua_isstring(L, idx)) {
        char const * k = luaL_checkstring(L, idx);
        return name(k);
    } else {
        name * k = static_cast<name*>(luaL_checkudata(L, idx, "name.mt"));
        return *k;
    }
}

static options & to_options(lua_State * L, unsigned idx) {
    return *static_cast<options*>(luaL_checkudata(L, idx, "options.mt"));
}

static int options_gc(lua_State * L) {
    to_options(L, 1).~options();
    return 0;
}

static int options_tostring(lua_State * L) {
    std::ostringstream out;
    out << to_options(L, 1);
    lua_pushfstring(L, out.str().c_str());
    return 1;
}

static int options_size(lua_State * L) {
    lua_pushinteger(L, to_options(L, 1).size());
    return 1;
}

static int options_contains(lua_State * L) {
    lua_pushboolean(L, to_options(L, 1).contains(to_key(L, 2)));
    return 1;
}

static int options_empty(lua_State * L) {
    lua_pushboolean(L, to_options(L, 1).empty());
    return 1;
}

static int options_get_bool(lua_State * L) {
    int nargs = lua_gettop(L);
    bool defval = nargs < 3 ? false : lua_toboolean(L, 3);
    lua_pushboolean(L, to_options(L, 1).get_bool(to_key(L, 2), defval));
    return 1;
}

static int options_get_int(lua_State * L) {
    int nargs = lua_gettop(L);
    int defval = nargs < 3 ? 0 : lua_tointeger(L, 3);
    lua_pushinteger(L, to_options(L, 1).get_int(to_key(L, 2), defval));
    return 1;
}

static int options_get_unsigned(lua_State * L) {
    int nargs = lua_gettop(L);
    unsigned defval = nargs < 3 ? 0 : lua_tointeger(L, 3);
    lua_pushnumber(L, to_options(L, 1).get_unsigned(to_key(L, 2), defval));
    return 1;
}

static int options_get_double(lua_State * L) {
    int nargs = lua_gettop(L);
    double defval = nargs < 3 ? 0.0 : lua_tonumber(L, 3);
    lua_pushnumber(L, to_options(L, 1).get_double(to_key(L, 2), defval));
    return 1;
}

static int options_get_string(lua_State * L) {
    int nargs = lua_gettop(L);
    char const * defval = nargs < 3 ? "" : lua_tostring(L, 3);
    lua_pushfstring(L, to_options(L, 1).get_string(to_key(L, 2), defval));
    return 1;
}

static int options_update_bool(lua_State * L) {
    return push_options(L, to_options(L, 1).update(to_key(L, 2), static_cast<bool>(lua_toboolean(L, 3))));
}

static int options_update_int(lua_State * L) {
    return push_options(L, to_options(L, 1).update(to_key(L, 2), static_cast<int>(lua_tointeger(L, 3))));
}

static int options_update_unsigned(lua_State * L) {
    return push_options(L, to_options(L, 1).update(to_key(L, 2), static_cast<unsigned>(lua_tointeger(L, 3))));
}

static int options_update_double(lua_State * L) {
    return push_options(L, to_options(L, 1).update(to_key(L, 2), lua_tonumber(L, 3)));
}

static int options_update_string(lua_State * L) {
    return push_options(L, to_options(L, 1).update(to_key(L, 2), lua_tostring(L, 3)));
}
}
#endif

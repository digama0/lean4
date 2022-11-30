def MyEq {A : Type _} (a b : A) : Prop := true

theorem id_map_is_right_neutral₁ {A : Type} (map : A -> A) :
  MyEq (Function.comp.{1, 1, _} map map) map :=
sorry

theorem id_map_is_right_neutral₂ {A : Type} (map : A -> A) :
  MyEq (Function.comp map map) map :=
sorry

theorem id_map_is_right_neutral₃ {A : Type} (map : A -> A) :
  MyEq (map ∘ map) map :=
sorry

import Mathlib.Algebra.Module.Defs
import Mathlib.Algebra.AddTorsor.Defs
import Mathlib.Tactic

namespace Spiral.Geometry

instance : CommRing Rat where
  add_assoc := Rat.add_assoc
  add_comm := Rat.add_comm
  zero_add := Rat.zero_add
  add_zero := Rat.add_zero
  neg_add_cancel := Rat.neg_add_cancel
  sub_eq_add_neg := Rat.sub_eq_add_neg
  mul_assoc := Rat.mul_assoc
  mul_comm := Rat.mul_comm
  one_mul := Rat.one_mul
  mul_one := Rat.mul_one
  left_distrib := Rat.mul_add
  right_distrib := Rat.add_mul
  zero_mul := Rat.zero_mul
  mul_zero := Rat.mul_zero
  nsmul := nsmulRec
  nsmul_zero := by intro x; rfl
  nsmul_succ := by intro n x; rfl
  zsmul := zsmulRec
  zsmul_zero' := by intro x; rfl
  zsmul_succ' := by intro n x; rfl
  zsmul_neg' := by intro n x; rfl
  npow := npowRec
  npow_zero := by intro x; rfl
  npow_succ := by intro n x; rfl
  natCast_zero := rfl
  natCast_succ := by intro n; simp
  intCast_ofNat := by intro n; rfl
  intCast_negSucc := by intro n; rfl

@[ext]
structure RVec2 where
  x : Rat
  y : Rat
deriving Repr, BEq, DecidableEq

instance : Add RVec2 where add v w := ⟨v.x + w.x, v.y + w.y⟩
instance : Zero RVec2 where zero := ⟨0, 0⟩
instance : Neg RVec2 where neg v := ⟨-v.x, -v.y⟩
instance : Sub RVec2 where sub v w := ⟨v.x - w.x, v.y - w.y⟩

instance : AddCommGroup RVec2 where
  add_assoc := by intro a b c; ext <;> exact Rat.add_assoc _ _ _
  add_comm  := by intro a b;   ext <;> exact Rat.add_comm _ _
  zero_add  := by intro a;     ext <;> exact Rat.zero_add _
  add_zero  := by intro a;     ext <;> exact Rat.add_zero _
  neg_add_cancel := by intro a; ext <;> exact Rat.neg_add_cancel _
  sub_eq_add_neg := by intro a b; ext <;> exact Rat.sub_eq_add_neg _ _
  nsmul := nsmulRec
  nsmul_zero := by intro x; rfl
  nsmul_succ := by intro n x; rfl
  zsmul := zsmulRec
  zsmul_zero' := by intro x; rfl
  zsmul_succ' := by intro n x; rfl
  zsmul_neg' := by intro n x; rfl

instance : SMul Rat RVec2 where smul s v := ⟨s * v.x, s * v.y⟩

instance : Module Rat RVec2 where
  one_smul  := by intro v; ext <;> exact Rat.one_mul _
  mul_smul  := by intro a b v; ext <;> exact Rat.mul_assoc _ _ _
  smul_zero := by intro a; ext <;> exact Rat.mul_zero _
  smul_add  := by intro a v w; ext <;> exact Rat.mul_add _ _ _
  add_smul  := by intro a b v; ext <;> exact Rat.add_mul _ _ _
  zero_smul := by intro v; ext <;> exact Rat.zero_mul _

@[ext]
structure RPoint2 where
  x : Rat
  y : Rat
deriving Repr, BEq, DecidableEq, Inhabited

def rorigin : RPoint2 := ⟨0, 0⟩
instance : Nonempty RPoint2 := ⟨rorigin⟩

instance : VAdd RVec2 RPoint2 where
  vadd v p := ⟨v.x + p.x, v.y + p.y⟩

instance : VSub RVec2 RPoint2 where
  vsub p q := ⟨p.x - q.x, p.y - q.y⟩

instance : AddAction RVec2 RPoint2 where
  zero_vadd := by intro p; ext <;> exact Rat.zero_add _
  add_vadd  := by intro v w p; ext <;> exact Rat.add_assoc _ _ _

instance : AddTorsor RVec2 RPoint2 where
  vsub_vadd' := by intro p q; ext <;> exact sub_add_cancel _ _
  vadd_vsub' := by intro v p; ext <;> exact add_sub_cancel_right _ _

def affineInterp2d (p q : RPoint2) (t : Rat) : RPoint2 :=
  (t • (q -ᵥ p)) +ᵥ p

def midpoint2d (p q : RPoint2) : RPoint2 :=
  affineInterp2d p q (1/2)

def lineThrough2d (p q : RPoint2) (t : Rat) : RPoint2 :=
  affineInterp2d p q t

def ratToJson (r : Rat) : String :=
  toString (Float.ofInt r.num / Float.ofNat r.den)

def pointToJson (label : String) (p : RPoint2) : String :=
  "{\"type\":\"point\",\"label\":\"" ++ label ++ "\",\"x\":" ++
  ratToJson p.x ++ ",\"y\":" ++ ratToJson p.y ++ "}"

def segmentToJson (label : String) (p q : RPoint2) : String :=
  "{\"type\":\"segment\",\"label\":\"" ++ label ++
  "\",\"x1\":" ++ ratToJson p.x ++ ",\"y1\":" ++ ratToJson p.y ++
  ",\"x2\":" ++ ratToJson q.x ++ ",\"y2\":" ++ ratToJson q.y ++ "}"

def toJsonArray (items : List String) : String :=
  "[\n" ++ String.intercalate ",\n" items ++ "\n]"

def animationToJson (title desc : String) (frames : List String) : String :=
  "{\"meta\":{\"title\":\"" ++ title ++
  "\",\"frameCount\":" ++ toString frames.length ++
  ",\"description\":\"" ++ desc ++ "\"}," ++
  "\"frames\":[\n" ++ String.intercalate ",\n" frames ++ "\n]}"

end Spiral.Geometry

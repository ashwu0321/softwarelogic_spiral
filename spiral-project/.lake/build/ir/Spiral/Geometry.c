// Lean compiler output
// Module: Spiral.Geometry
// Imports: public import Init public import Mathlib.Algebra.Module.Defs public import Mathlib.Algebra.AddTorsor.Defs public import Mathlib.Tactic
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern lean_object* lp_mathlib_Rat_addMonoid;
lean_object* lp_mathlib_AddMonoid_toAddZeroClass___redArg(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__0;
extern lean_object* lp_mathlib_Rat_instNormedField;
lean_object* lp_mathlib_NormedField_toNormedCommRing___redArg(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1;
lean_object* lp_mathlib_NormedCommRing_toNonUnitalNormedCommRing___redArg(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__2;
extern lean_object* lp_mathlib_Rat_commSemiring;
lean_object* lp_mathlib_Semiring_toNonAssocSemiring___redArg(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__3;
lean_object* lp_mathlib_NonAssocSemiring_toMulZeroOneClass___redArg(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__4;
lean_object* l_Rat_add(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Rat_add, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__5 = (const lean_object*)&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__5_value;
lean_object* l_Rat_instNatCast___lam__0(lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Rat_instNatCast___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__6 = (const lean_object*)&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__6_value;
lean_object* l_Rat_mul___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Rat_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__7 = (const lean_object*)&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__7_value;
lean_object* l_Rat_neg(lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Rat_neg, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__8 = (const lean_object*)&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__8_value;
lean_object* l_Rat_sub(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Rat_sub, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__9 = (const lean_object*)&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__9_value;
lean_object* l_Rat_ofInt(lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Rat_ofInt, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__10 = (const lean_object*)&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__10_value;
lean_object* lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(lean_object*);
lean_object* lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(lean_object*);
lean_object* lp_mathlib_Ring_toAddGroupWithOne___redArg(lean_object*);
lean_object* l_nsmulRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_npowRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_zsmulRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instCommRingRat__spiral;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__0_value;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__1 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__1_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__1_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__2_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__2_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__3 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__3_value;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__4 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__4_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__4_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__5 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__5_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__3_value),((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__5_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__6 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__6_value;
lean_object* lean_nat_to_int(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__8 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__8_value;
lean_object* lean_string_length(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__9;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__0_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__11 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__11_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__8_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__12 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__12_value;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " : Rat)/"};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__13 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__13_value;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__14 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__14_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__14_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__15 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__15_value;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__16 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__16_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__16_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__17 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__17_value;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18_value;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19;
static const lean_string_object lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20_value;
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instReprRVec2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instReprRVec2_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instReprRVec2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRVec2___closed__0_value;
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instBEqRVec2_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instBEqRVec2_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instBEqRVec2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instBEqRVec2_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instBEqRVec2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instBEqRVec2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instBEqRVec2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instBEqRVec2___closed__0_value;
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRVec2_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRVec2_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRVec2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRVec2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instAddRVec2___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instAddRVec2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instAddRVec2___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instAddRVec2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instAddRVec2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instAddRVec2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instAddRVec2___closed__0_value;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instZeroRVec2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instZeroRVec2___closed__0;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instZeroRVec2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instZeroRVec2___closed__1;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instZeroRVec2;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instNegRVec2___lam__0(lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instNegRVec2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instNegRVec2___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instNegRVec2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instNegRVec2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instNegRVec2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instNegRVec2___closed__0_value;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instSubRVec2___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instSubRVec2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instSubRVec2___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instSubRVec2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instSubRVec2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instSubRVec2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instSubRVec2___closed__0_value;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__1;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__2;
static lean_once_cell_t lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__3;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instAddCommGroupRVec2;
lean_object* l_Rat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instSMulRatRVec2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instSMulRatRVec2___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instSMulRatRVec2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instSMulRatRVec2___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instSMulRatRVec2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instSMulRatRVec2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instSMulRatRVec2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instSMulRatRVec2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instModuleRatRVec2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instSMulRatRVec2___closed__0_value;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instReprRPoint2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instReprRPoint2_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRPoint2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instReprRPoint2___closed__0_value;
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instBEqRPoint2_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instBEqRPoint2_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instBEqRPoint2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instBEqRPoint2_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instBEqRPoint2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instBEqRPoint2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instBEqRPoint2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instBEqRPoint2___closed__0_value;
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRPoint2_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRPoint2_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRPoint2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRPoint2___boxed(lean_object*, lean_object*);
lean_object* lp_mathlib_Nat_cast___at___00Tactic_NormNum_evalRealSqrt_spec__3(lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_rorigin___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_rorigin___closed__0;
static lean_once_cell_t lp_spiral_Spiral_Geometry_rorigin___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_rorigin___closed__1;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_rorigin;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___closed__0_value;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___lam__0(lean_object*, lean_object*);
static const lean_closure_object lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instAddActionRVec2RPoint2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___closed__0_value;
static const lean_ctor_object lp_spiral_Spiral_Geometry_instAddTorsorRVec2RPoint2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___closed__0_value),((lean_object*)&lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___closed__0_value)}};
static const lean_object* lp_spiral_Spiral_Geometry_instAddTorsorRVec2RPoint2___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_instAddTorsorRVec2RPoint2___closed__0_value;
LEAN_EXPORT const lean_object* lp_spiral_Spiral_Geometry_instAddTorsorRVec2RPoint2 = (const lean_object*)&lp_spiral_Spiral_Geometry_instAddTorsorRVec2RPoint2___closed__0_value;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_affineInterp2d(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_affineInterp2d___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_midpoint2d___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_midpoint2d___closed__0;
static lean_once_cell_t lp_spiral_Spiral_Geometry_midpoint2d___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_midpoint2d___closed__1;
lean_object* l_Rat_div(lean_object*, lean_object*);
static lean_once_cell_t lp_spiral_Spiral_Geometry_midpoint2d___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_spiral_Spiral_Geometry_midpoint2d___closed__2;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_midpoint2d(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_lineThrough2d(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_lineThrough2d___boxed(lean_object*, lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* lean_float_to_string(double);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_ratToJson(lean_object*);
static const lean_string_object lp_spiral_Spiral_Geometry_pointToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "{\"type\":\"point\",\"label\":\""};
static const lean_object* lp_spiral_Spiral_Geometry_pointToJson___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_pointToJson___closed__0_value;
static const lean_string_object lp_spiral_Spiral_Geometry_pointToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "\",\"x\":"};
static const lean_object* lp_spiral_Spiral_Geometry_pointToJson___closed__1 = (const lean_object*)&lp_spiral_Spiral_Geometry_pointToJson___closed__1_value;
static const lean_string_object lp_spiral_Spiral_Geometry_pointToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ",\"y\":"};
static const lean_object* lp_spiral_Spiral_Geometry_pointToJson___closed__2 = (const lean_object*)&lp_spiral_Spiral_Geometry_pointToJson___closed__2_value;
static const lean_string_object lp_spiral_Spiral_Geometry_pointToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* lp_spiral_Spiral_Geometry_pointToJson___closed__3 = (const lean_object*)&lp_spiral_Spiral_Geometry_pointToJson___closed__3_value;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_pointToJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_pointToJson___boxed(lean_object*, lean_object*);
static const lean_string_object lp_spiral_Spiral_Geometry_segmentToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "{\"type\":\"segment\",\"label\":\""};
static const lean_object* lp_spiral_Spiral_Geometry_segmentToJson___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_segmentToJson___closed__0_value;
static const lean_string_object lp_spiral_Spiral_Geometry_segmentToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\",\"x1\":"};
static const lean_object* lp_spiral_Spiral_Geometry_segmentToJson___closed__1 = (const lean_object*)&lp_spiral_Spiral_Geometry_segmentToJson___closed__1_value;
static const lean_string_object lp_spiral_Spiral_Geometry_segmentToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ",\"y1\":"};
static const lean_object* lp_spiral_Spiral_Geometry_segmentToJson___closed__2 = (const lean_object*)&lp_spiral_Spiral_Geometry_segmentToJson___closed__2_value;
static const lean_string_object lp_spiral_Spiral_Geometry_segmentToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ",\"x2\":"};
static const lean_object* lp_spiral_Spiral_Geometry_segmentToJson___closed__3 = (const lean_object*)&lp_spiral_Spiral_Geometry_segmentToJson___closed__3_value;
static const lean_string_object lp_spiral_Spiral_Geometry_segmentToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ",\"y2\":"};
static const lean_object* lp_spiral_Spiral_Geometry_segmentToJson___closed__4 = (const lean_object*)&lp_spiral_Spiral_Geometry_segmentToJson___closed__4_value;
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_segmentToJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_segmentToJson___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_spiral_Spiral_Geometry_toJsonArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[\n"};
static const lean_object* lp_spiral_Spiral_Geometry_toJsonArray___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_toJsonArray___closed__0_value;
static const lean_string_object lp_spiral_Spiral_Geometry_toJsonArray___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ",\n"};
static const lean_object* lp_spiral_Spiral_Geometry_toJsonArray___closed__1 = (const lean_object*)&lp_spiral_Spiral_Geometry_toJsonArray___closed__1_value;
static const lean_string_object lp_spiral_Spiral_Geometry_toJsonArray___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n]"};
static const lean_object* lp_spiral_Spiral_Geometry_toJsonArray___closed__2 = (const lean_object*)&lp_spiral_Spiral_Geometry_toJsonArray___closed__2_value;
lean_object* l_String_intercalate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_toJsonArray(lean_object*);
static const lean_string_object lp_spiral_Spiral_Geometry_animationToJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "{\"meta\":{\"title\":\""};
static const lean_object* lp_spiral_Spiral_Geometry_animationToJson___closed__0 = (const lean_object*)&lp_spiral_Spiral_Geometry_animationToJson___closed__0_value;
static const lean_string_object lp_spiral_Spiral_Geometry_animationToJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\",\"frameCount\":"};
static const lean_object* lp_spiral_Spiral_Geometry_animationToJson___closed__1 = (const lean_object*)&lp_spiral_Spiral_Geometry_animationToJson___closed__1_value;
static const lean_string_object lp_spiral_Spiral_Geometry_animationToJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ",\"description\":\""};
static const lean_object* lp_spiral_Spiral_Geometry_animationToJson___closed__2 = (const lean_object*)&lp_spiral_Spiral_Geometry_animationToJson___closed__2_value;
static const lean_string_object lp_spiral_Spiral_Geometry_animationToJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\"},"};
static const lean_object* lp_spiral_Spiral_Geometry_animationToJson___closed__3 = (const lean_object*)&lp_spiral_Spiral_Geometry_animationToJson___closed__3_value;
static const lean_string_object lp_spiral_Spiral_Geometry_animationToJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "\"frames\":[\n"};
static const lean_object* lp_spiral_Spiral_Geometry_animationToJson___closed__4 = (const lean_object*)&lp_spiral_Spiral_Geometry_animationToJson___closed__4_value;
static const lean_string_object lp_spiral_Spiral_Geometry_animationToJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n]}"};
static const lean_object* lp_spiral_Spiral_Geometry_animationToJson___closed__5 = (const lean_object*)&lp_spiral_Spiral_Geometry_animationToJson___closed__5_value;
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_animationToJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_animationToJson___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_mathlib_Rat_addMonoid;
x_2 = lp_mathlib_AddMonoid_toAddZeroClass___redArg(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_mathlib_Rat_instNormedField;
x_2 = lp_mathlib_NormedField_toNormedCommRing___redArg(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1, &lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1_once, _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1);
x_2 = lp_mathlib_NormedCommRing_toNonUnitalNormedCommRing___redArg(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_mathlib_Rat_commSemiring;
x_2 = lp_mathlib_Semiring_toNonAssocSemiring___redArg(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__3, &lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__3_once, _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__3);
x_2 = lp_mathlib_NonAssocSemiring_toMulZeroOneClass___redArg(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__0, &lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__0_once, _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__0);
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_obj_once(&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1, &lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1_once, _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__1);
x_5 = lean_obj_once(&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__2, &lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__2_once, _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__2);
x_6 = lean_ctor_get(x_5, 1);
lean_inc_ref(x_6);
x_7 = lp_mathlib_NonUnitalNonAssocRing_toNonUnitalNonAssocSemiring___redArg(x_6);
x_8 = lp_mathlib_NonUnitalNonAssocSemiring_toMulZeroClass___redArg(x_7);
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec_ref(x_8);
x_10 = lean_obj_once(&lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__4, &lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__4_once, _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc_ref(x_11);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_ctor_get(x_4, 1);
lean_inc_ref(x_14);
x_15 = lp_mathlib_Ring_toAddGroupWithOne___redArg(x_14);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_15, 1);
x_18 = lean_ctor_get(x_15, 4);
lean_dec(x_18);
x_19 = lean_ctor_get(x_15, 3);
lean_dec(x_19);
x_20 = lean_ctor_get(x_15, 2);
lean_dec(x_20);
x_21 = lean_ctor_get(x_15, 0);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_23 = lean_ctor_get(x_17, 2);
x_24 = lean_ctor_get(x_17, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_17, 0);
lean_dec(x_25);
x_26 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__5));
x_27 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__6));
x_28 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__7));
x_29 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__8));
x_30 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__9));
x_31 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__10));
lean_inc(x_9);
x_32 = lean_alloc_closure((void*)(l_nsmulRec___boxed), 5, 3);
lean_closure_set(x_32, 0, lean_box(0));
lean_closure_set(x_32, 1, x_9);
lean_closure_set(x_32, 2, x_26);
lean_inc_ref(x_32);
lean_ctor_set(x_17, 2, x_32);
lean_ctor_set(x_17, 1, x_2);
lean_ctor_set(x_17, 0, x_3);
lean_ctor_set(x_11, 0, x_17);
x_33 = lean_alloc_closure((void*)(l_npowRec___boxed), 5, 3);
lean_closure_set(x_33, 0, lean_box(0));
lean_closure_set(x_33, 1, x_23);
lean_closure_set(x_33, 2, x_28);
x_34 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_34, 0, x_11);
lean_ctor_set(x_34, 1, x_13);
lean_ctor_set(x_34, 2, x_27);
lean_ctor_set(x_34, 3, x_33);
x_35 = lean_alloc_closure((void*)(lp_mathlib_zsmulRec___boxed), 7, 5);
lean_closure_set(x_35, 0, lean_box(0));
lean_closure_set(x_35, 1, x_9);
lean_closure_set(x_35, 2, x_26);
lean_closure_set(x_35, 3, x_29);
lean_closure_set(x_35, 4, x_32);
lean_ctor_set(x_15, 4, x_31);
lean_ctor_set(x_15, 3, x_35);
lean_ctor_set(x_15, 2, x_30);
lean_ctor_set(x_15, 1, x_29);
lean_ctor_set(x_15, 0, x_34);
return x_15;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_36 = lean_ctor_get(x_17, 2);
lean_inc(x_36);
lean_dec(x_17);
x_37 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__5));
x_38 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__6));
x_39 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__7));
x_40 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__8));
x_41 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__9));
x_42 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__10));
lean_inc(x_9);
x_43 = lean_alloc_closure((void*)(l_nsmulRec___boxed), 5, 3);
lean_closure_set(x_43, 0, lean_box(0));
lean_closure_set(x_43, 1, x_9);
lean_closure_set(x_43, 2, x_37);
lean_inc_ref(x_43);
x_44 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_44, 0, x_3);
lean_ctor_set(x_44, 1, x_2);
lean_ctor_set(x_44, 2, x_43);
lean_ctor_set(x_11, 0, x_44);
x_45 = lean_alloc_closure((void*)(l_npowRec___boxed), 5, 3);
lean_closure_set(x_45, 0, lean_box(0));
lean_closure_set(x_45, 1, x_36);
lean_closure_set(x_45, 2, x_39);
x_46 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_46, 0, x_11);
lean_ctor_set(x_46, 1, x_13);
lean_ctor_set(x_46, 2, x_38);
lean_ctor_set(x_46, 3, x_45);
x_47 = lean_alloc_closure((void*)(lp_mathlib_zsmulRec___boxed), 7, 5);
lean_closure_set(x_47, 0, lean_box(0));
lean_closure_set(x_47, 1, x_9);
lean_closure_set(x_47, 2, x_37);
lean_closure_set(x_47, 3, x_40);
lean_closure_set(x_47, 4, x_43);
lean_ctor_set(x_15, 4, x_42);
lean_ctor_set(x_15, 3, x_47);
lean_ctor_set(x_15, 2, x_41);
lean_ctor_set(x_15, 1, x_40);
lean_ctor_set(x_15, 0, x_46);
return x_15;
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_48 = lean_ctor_get(x_15, 1);
lean_inc(x_48);
lean_dec(x_15);
x_49 = lean_ctor_get(x_48, 2);
lean_inc(x_49);
if (lean_is_exclusive(x_48)) {
 lean_ctor_release(x_48, 0);
 lean_ctor_release(x_48, 1);
 lean_ctor_release(x_48, 2);
 x_50 = x_48;
} else {
 lean_dec_ref(x_48);
 x_50 = lean_box(0);
}
x_51 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__5));
x_52 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__6));
x_53 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__7));
x_54 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__8));
x_55 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__9));
x_56 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__10));
lean_inc(x_9);
x_57 = lean_alloc_closure((void*)(l_nsmulRec___boxed), 5, 3);
lean_closure_set(x_57, 0, lean_box(0));
lean_closure_set(x_57, 1, x_9);
lean_closure_set(x_57, 2, x_51);
lean_inc_ref(x_57);
if (lean_is_scalar(x_50)) {
 x_58 = lean_alloc_ctor(0, 3, 0);
} else {
 x_58 = x_50;
}
lean_ctor_set(x_58, 0, x_3);
lean_ctor_set(x_58, 1, x_2);
lean_ctor_set(x_58, 2, x_57);
lean_ctor_set(x_11, 0, x_58);
x_59 = lean_alloc_closure((void*)(l_npowRec___boxed), 5, 3);
lean_closure_set(x_59, 0, lean_box(0));
lean_closure_set(x_59, 1, x_49);
lean_closure_set(x_59, 2, x_53);
x_60 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_60, 0, x_11);
lean_ctor_set(x_60, 1, x_13);
lean_ctor_set(x_60, 2, x_52);
lean_ctor_set(x_60, 3, x_59);
x_61 = lean_alloc_closure((void*)(lp_mathlib_zsmulRec___boxed), 7, 5);
lean_closure_set(x_61, 0, lean_box(0));
lean_closure_set(x_61, 1, x_9);
lean_closure_set(x_61, 2, x_51);
lean_closure_set(x_61, 3, x_54);
lean_closure_set(x_61, 4, x_57);
x_62 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_54);
lean_ctor_set(x_62, 2, x_55);
lean_ctor_set(x_62, 3, x_61);
lean_ctor_set(x_62, 4, x_56);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_63 = lean_ctor_get(x_11, 0);
x_64 = lean_ctor_get(x_11, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_11);
x_65 = lean_ctor_get(x_4, 1);
lean_inc_ref(x_65);
x_66 = lp_mathlib_Ring_toAddGroupWithOne___redArg(x_65);
x_67 = lean_ctor_get(x_66, 1);
lean_inc_ref(x_67);
if (lean_is_exclusive(x_66)) {
 lean_ctor_release(x_66, 0);
 lean_ctor_release(x_66, 1);
 lean_ctor_release(x_66, 2);
 lean_ctor_release(x_66, 3);
 lean_ctor_release(x_66, 4);
 x_68 = x_66;
} else {
 lean_dec_ref(x_66);
 x_68 = lean_box(0);
}
x_69 = lean_ctor_get(x_67, 2);
lean_inc(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 lean_ctor_release(x_67, 2);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
x_71 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__5));
x_72 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__6));
x_73 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__7));
x_74 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__8));
x_75 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__9));
x_76 = ((lean_object*)(lp_spiral_Spiral_Geometry_instCommRingRat__spiral___closed__10));
lean_inc(x_9);
x_77 = lean_alloc_closure((void*)(l_nsmulRec___boxed), 5, 3);
lean_closure_set(x_77, 0, lean_box(0));
lean_closure_set(x_77, 1, x_9);
lean_closure_set(x_77, 2, x_71);
lean_inc_ref(x_77);
if (lean_is_scalar(x_70)) {
 x_78 = lean_alloc_ctor(0, 3, 0);
} else {
 x_78 = x_70;
}
lean_ctor_set(x_78, 0, x_3);
lean_ctor_set(x_78, 1, x_2);
lean_ctor_set(x_78, 2, x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_64);
x_80 = lean_alloc_closure((void*)(l_npowRec___boxed), 5, 3);
lean_closure_set(x_80, 0, lean_box(0));
lean_closure_set(x_80, 1, x_69);
lean_closure_set(x_80, 2, x_73);
x_81 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_63);
lean_ctor_set(x_81, 2, x_72);
lean_ctor_set(x_81, 3, x_80);
x_82 = lean_alloc_closure((void*)(lp_mathlib_zsmulRec___boxed), 7, 5);
lean_closure_set(x_82, 0, lean_box(0));
lean_closure_set(x_82, 1, x_9);
lean_closure_set(x_82, 2, x_71);
lean_closure_set(x_82, 3, x_74);
lean_closure_set(x_82, 4, x_77);
if (lean_is_scalar(x_68)) {
 x_83 = lean_alloc_ctor(0, 5, 0);
} else {
 x_83 = x_68;
}
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_74);
lean_ctor_set(x_83, 2, x_75);
lean_ctor_set(x_83, 3, x_82);
lean_ctor_set(x_83, 4, x_76);
return x_83;
}
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__9(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__0));
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__9, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__9_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__9);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_37; lean_object* x_107; uint8_t x_108; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4 = lean_box(0);
}
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_7 = x_2;
} else {
 lean_dec_ref(x_2);
 x_7 = lean_box(0);
}
x_8 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__5));
x_9 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__6));
x_10 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7);
x_107 = lean_unsigned_to_nat(1u);
x_108 = lean_nat_dec_eq(x_6, x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_118; uint8_t x_119; 
x_109 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18));
x_118 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_119 = lean_int_dec_lt(x_5, x_118);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_nat_abs(x_5);
lean_dec(x_5);
x_121 = l_Nat_reprFast(x_120);
x_110 = x_121;
goto block_117;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_122 = lean_nat_abs(x_5);
lean_dec(x_5);
x_123 = lean_nat_sub(x_122, x_107);
lean_dec(x_122);
x_124 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20));
x_125 = lean_nat_add(x_123, x_107);
lean_dec(x_123);
x_126 = l_Nat_reprFast(x_125);
x_127 = lean_string_append(x_124, x_126);
lean_dec_ref(x_126);
x_110 = x_127;
goto block_117;
}
block_117:
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_111 = lean_string_append(x_109, x_110);
lean_dec_ref(x_110);
x_112 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__13));
x_113 = lean_string_append(x_111, x_112);
x_114 = l_Nat_reprFast(x_6);
x_115 = lean_string_append(x_113, x_114);
lean_dec_ref(x_114);
x_116 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_116, 0, x_115);
x_37 = x_116;
goto block_106;
}
}
else
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; 
lean_dec(x_6);
x_128 = lean_unsigned_to_nat(0u);
x_129 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_130 = lean_int_dec_lt(x_5, x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; 
x_131 = l_Int_repr(x_5);
lean_dec(x_5);
x_132 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_132, 0, x_131);
x_37 = x_132;
goto block_106;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = l_Int_repr(x_5);
lean_dec(x_5);
x_134 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_134, 0, x_133);
x_135 = l_Repr_addAppParen(x_134, x_128);
x_37 = x_135;
goto block_106;
}
}
block_24:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
if (lean_is_scalar(x_7)) {
 x_14 = lean_alloc_ctor(4, 2, 0);
} else {
 x_14 = x_7;
 lean_ctor_set_tag(x_14, 4);
}
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set_uint8(x_15, sizeof(void*)*1, x_11);
if (lean_is_scalar(x_4)) {
 x_16 = lean_alloc_ctor(5, 2, 0);
} else {
 x_16 = x_4;
 lean_ctor_set_tag(x_16, 5);
}
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10);
x_18 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__11));
x_19 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
x_20 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__12));
x_21 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_11);
return x_23;
}
block_36:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_string_append(x_27, x_29);
lean_dec_ref(x_29);
x_31 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__13));
x_32 = lean_string_append(x_30, x_31);
x_33 = l_Nat_reprFast(x_26);
x_34 = lean_string_append(x_32, x_33);
lean_dec_ref(x_33);
x_35 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_11 = x_25;
x_12 = x_28;
x_13 = x_35;
goto block_24;
}
block_106:
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
lean_ctor_set_tag(x_3, 4);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_3, 0, x_10);
x_41 = 0;
x_42 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set_uint8(x_42, sizeof(void*)*1, x_41);
x_43 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_43, 0, x_9);
lean_ctor_set(x_43, 1, x_42);
x_44 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__15));
x_45 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_box(1);
x_47 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__17));
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_8);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_dec_eq(x_40, x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_53 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18));
x_54 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_55 = lean_int_dec_lt(x_39, x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_nat_abs(x_39);
lean_dec(x_39);
x_57 = l_Nat_reprFast(x_56);
x_25 = x_41;
x_26 = x_40;
x_27 = x_53;
x_28 = x_50;
x_29 = x_57;
goto block_36;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_nat_abs(x_39);
lean_dec(x_39);
x_59 = lean_nat_sub(x_58, x_51);
lean_dec(x_58);
x_60 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20));
x_61 = lean_nat_add(x_59, x_51);
lean_dec(x_59);
x_62 = l_Nat_reprFast(x_61);
x_63 = lean_string_append(x_60, x_62);
lean_dec_ref(x_62);
x_25 = x_41;
x_26 = x_40;
x_27 = x_53;
x_28 = x_50;
x_29 = x_63;
goto block_36;
}
}
else
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; 
lean_dec(x_40);
x_64 = lean_unsigned_to_nat(0u);
x_65 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_66 = lean_int_dec_lt(x_39, x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = l_Int_repr(x_39);
lean_dec(x_39);
x_68 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_11 = x_41;
x_12 = x_50;
x_13 = x_68;
goto block_24;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = l_Int_repr(x_39);
lean_dec(x_39);
x_70 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = l_Repr_addAppParen(x_70, x_64);
x_11 = x_41;
x_12 = x_50;
x_13 = x_71;
goto block_24;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_72 = lean_ctor_get(x_3, 0);
x_73 = lean_ctor_get(x_3, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_3);
x_74 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_74, 0, x_10);
lean_ctor_set(x_74, 1, x_37);
x_75 = 0;
x_76 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set_uint8(x_76, sizeof(void*)*1, x_75);
x_77 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_77, 0, x_9);
lean_ctor_set(x_77, 1, x_76);
x_78 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__15));
x_79 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_box(1);
x_81 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__17));
x_83 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_8);
x_85 = lean_unsigned_to_nat(1u);
x_86 = lean_nat_dec_eq(x_73, x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18));
x_88 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_89 = lean_int_dec_lt(x_72, x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_nat_abs(x_72);
lean_dec(x_72);
x_91 = l_Nat_reprFast(x_90);
x_25 = x_75;
x_26 = x_73;
x_27 = x_87;
x_28 = x_84;
x_29 = x_91;
goto block_36;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_92 = lean_nat_abs(x_72);
lean_dec(x_72);
x_93 = lean_nat_sub(x_92, x_85);
lean_dec(x_92);
x_94 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20));
x_95 = lean_nat_add(x_93, x_85);
lean_dec(x_93);
x_96 = l_Nat_reprFast(x_95);
x_97 = lean_string_append(x_94, x_96);
lean_dec_ref(x_96);
x_25 = x_75;
x_26 = x_73;
x_27 = x_87;
x_28 = x_84;
x_29 = x_97;
goto block_36;
}
}
else
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
lean_dec(x_73);
x_98 = lean_unsigned_to_nat(0u);
x_99 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_100 = lean_int_dec_lt(x_72, x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = l_Int_repr(x_72);
lean_dec(x_72);
x_102 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_11 = x_75;
x_12 = x_84;
x_13 = x_102;
goto block_24;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = l_Int_repr(x_72);
lean_dec(x_72);
x_104 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = l_Repr_addAppParen(x_104, x_98);
x_11 = x_75;
x_12 = x_84;
x_13 = x_105;
goto block_24;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRVec2_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_spiral_Spiral_Geometry_instReprRVec2_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instBEqRVec2_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_instDecidableEqRat_decEq(x_3, x_5);
if (x_7 == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = l_instDecidableEqRat_decEq(x_4, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instBEqRVec2_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_spiral_Spiral_Geometry_instBEqRVec2_beq(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRVec2_decEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_instDecidableEqRat_decEq(x_3, x_5);
if (x_7 == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = l_instDecidableEqRat_decEq(x_4, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRVec2_decEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_spiral_Spiral_Geometry_instDecidableEqRVec2_decEq(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRVec2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_spiral_Spiral_Geometry_instDecidableEqRVec2_decEq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRVec2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_spiral_Spiral_Geometry_instDecidableEqRVec2(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instAddRVec2___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = l_Rat_add(x_3, x_6);
x_9 = l_Rat_add(x_4, x_7);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = l_Rat_add(x_3, x_10);
x_13 = l_Rat_add(x_4, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instZeroRVec2___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Rat_instNatCast___lam__0(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instZeroRVec2___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instZeroRVec2___closed__0, &lp_spiral_Spiral_Geometry_instZeroRVec2___closed__0_once, _init_lp_spiral_Spiral_Geometry_instZeroRVec2___closed__0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instZeroRVec2(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instZeroRVec2___closed__1, &lp_spiral_Spiral_Geometry_instZeroRVec2___closed__1_once, _init_lp_spiral_Spiral_Geometry_instZeroRVec2___closed__1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instNegRVec2___lam__0(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_Rat_neg(x_3);
x_6 = l_Rat_neg(x_4);
lean_ctor_set(x_1, 1, x_6);
lean_ctor_set(x_1, 0, x_5);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_1);
x_9 = l_Rat_neg(x_7);
x_10 = l_Rat_neg(x_8);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instSubRVec2___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = l_Rat_sub(x_3, x_6);
x_9 = l_Rat_sub(x_4, x_7);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = l_Rat_sub(x_3, x_10);
x_13 = l_Rat_sub(x_4, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = ((lean_object*)(lp_spiral_Spiral_Geometry_instAddRVec2___closed__0));
x_2 = lp_spiral_Spiral_Geometry_instZeroRVec2;
x_3 = lean_alloc_closure((void*)(l_nsmulRec___boxed), 5, 3);
lean_closure_set(x_3, 0, lean_box(0));
lean_closure_set(x_3, 1, x_2);
lean_closure_set(x_3, 2, x_1);
return x_3;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0, &lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0_once, _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0);
x_2 = lp_spiral_Spiral_Geometry_instZeroRVec2;
x_3 = ((lean_object*)(lp_spiral_Spiral_Geometry_instAddRVec2___closed__0));
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_1);
return x_4;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0, &lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0_once, _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__0);
x_2 = ((lean_object*)(lp_spiral_Spiral_Geometry_instNegRVec2___closed__0));
x_3 = ((lean_object*)(lp_spiral_Spiral_Geometry_instAddRVec2___closed__0));
x_4 = lp_spiral_Spiral_Geometry_instZeroRVec2;
x_5 = lean_alloc_closure((void*)(lp_mathlib_zsmulRec___boxed), 7, 5);
lean_closure_set(x_5, 0, lean_box(0));
lean_closure_set(x_5, 1, x_4);
lean_closure_set(x_5, 2, x_3);
lean_closure_set(x_5, 3, x_2);
lean_closure_set(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__2, &lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__2_once, _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__2);
x_2 = ((lean_object*)(lp_spiral_Spiral_Geometry_instSubRVec2___closed__0));
x_3 = ((lean_object*)(lp_spiral_Spiral_Geometry_instNegRVec2___closed__0));
x_4 = lean_obj_once(&lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__1, &lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__1_once, _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__1);
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_1);
return x_5;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__3, &lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__3_once, _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2___closed__3);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instSMulRatRVec2___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = l_Rat_mul(x_1, x_4);
x_7 = l_Rat_mul(x_1, x_5);
lean_ctor_set(x_2, 1, x_7);
lean_ctor_set(x_2, 0, x_6);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
lean_inc(x_9);
lean_inc(x_8);
lean_dec(x_2);
x_10 = l_Rat_mul(x_1, x_8);
x_11 = l_Rat_mul(x_1, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
return x_12;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instSMulRatRVec2___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_spiral_Spiral_Geometry_instSMulRatRVec2___lam__0(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2_repr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_37; lean_object* x_107; uint8_t x_108; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4 = lean_box(0);
}
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_7 = x_2;
} else {
 lean_dec_ref(x_2);
 x_7 = lean_box(0);
}
x_8 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__5));
x_9 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__6));
x_10 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__7);
x_107 = lean_unsigned_to_nat(1u);
x_108 = lean_nat_dec_eq(x_6, x_107);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_118; uint8_t x_119; 
x_109 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18));
x_118 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_119 = lean_int_dec_lt(x_5, x_118);
if (x_119 == 0)
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_nat_abs(x_5);
lean_dec(x_5);
x_121 = l_Nat_reprFast(x_120);
x_110 = x_121;
goto block_117;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_122 = lean_nat_abs(x_5);
lean_dec(x_5);
x_123 = lean_nat_sub(x_122, x_107);
lean_dec(x_122);
x_124 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20));
x_125 = lean_nat_add(x_123, x_107);
lean_dec(x_123);
x_126 = l_Nat_reprFast(x_125);
x_127 = lean_string_append(x_124, x_126);
lean_dec_ref(x_126);
x_110 = x_127;
goto block_117;
}
block_117:
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_111 = lean_string_append(x_109, x_110);
lean_dec_ref(x_110);
x_112 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__13));
x_113 = lean_string_append(x_111, x_112);
x_114 = l_Nat_reprFast(x_6);
x_115 = lean_string_append(x_113, x_114);
lean_dec_ref(x_114);
x_116 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_116, 0, x_115);
x_37 = x_116;
goto block_106;
}
}
else
{
lean_object* x_128; lean_object* x_129; uint8_t x_130; 
lean_dec(x_6);
x_128 = lean_unsigned_to_nat(0u);
x_129 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_130 = lean_int_dec_lt(x_5, x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; 
x_131 = l_Int_repr(x_5);
lean_dec(x_5);
x_132 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_132, 0, x_131);
x_37 = x_132;
goto block_106;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_133 = l_Int_repr(x_5);
lean_dec(x_5);
x_134 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_134, 0, x_133);
x_135 = l_Repr_addAppParen(x_134, x_128);
x_37 = x_135;
goto block_106;
}
}
block_24:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
if (lean_is_scalar(x_7)) {
 x_14 = lean_alloc_ctor(4, 2, 0);
} else {
 x_14 = x_7;
 lean_ctor_set_tag(x_14, 4);
}
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set_uint8(x_15, sizeof(void*)*1, x_12);
if (lean_is_scalar(x_4)) {
 x_16 = lean_alloc_ctor(5, 2, 0);
} else {
 x_16 = x_4;
 lean_ctor_set_tag(x_16, 5);
}
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__10);
x_18 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__11));
x_19 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
x_20 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__12));
x_21 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set_uint8(x_23, sizeof(void*)*1, x_12);
return x_23;
}
block_36:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_30 = lean_string_append(x_27, x_29);
lean_dec_ref(x_29);
x_31 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__13));
x_32 = lean_string_append(x_30, x_31);
x_33 = l_Nat_reprFast(x_28);
x_34 = lean_string_append(x_32, x_33);
lean_dec_ref(x_33);
x_35 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_11 = x_25;
x_12 = x_26;
x_13 = x_35;
goto block_24;
}
block_106:
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_3);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; 
x_39 = lean_ctor_get(x_3, 0);
x_40 = lean_ctor_get(x_3, 1);
lean_ctor_set_tag(x_3, 4);
lean_ctor_set(x_3, 1, x_37);
lean_ctor_set(x_3, 0, x_10);
x_41 = 0;
x_42 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_42, 0, x_3);
lean_ctor_set_uint8(x_42, sizeof(void*)*1, x_41);
x_43 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_43, 0, x_9);
lean_ctor_set(x_43, 1, x_42);
x_44 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__15));
x_45 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = lean_box(1);
x_47 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__17));
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_8);
x_51 = lean_unsigned_to_nat(1u);
x_52 = lean_nat_dec_eq(x_40, x_51);
if (x_52 == 0)
{
lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_53 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18));
x_54 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_55 = lean_int_dec_lt(x_39, x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_nat_abs(x_39);
lean_dec(x_39);
x_57 = l_Nat_reprFast(x_56);
x_25 = x_50;
x_26 = x_41;
x_27 = x_53;
x_28 = x_40;
x_29 = x_57;
goto block_36;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_58 = lean_nat_abs(x_39);
lean_dec(x_39);
x_59 = lean_nat_sub(x_58, x_51);
lean_dec(x_58);
x_60 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20));
x_61 = lean_nat_add(x_59, x_51);
lean_dec(x_59);
x_62 = l_Nat_reprFast(x_61);
x_63 = lean_string_append(x_60, x_62);
lean_dec_ref(x_62);
x_25 = x_50;
x_26 = x_41;
x_27 = x_53;
x_28 = x_40;
x_29 = x_63;
goto block_36;
}
}
else
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; 
lean_dec(x_40);
x_64 = lean_unsigned_to_nat(0u);
x_65 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_66 = lean_int_dec_lt(x_39, x_65);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = l_Int_repr(x_39);
lean_dec(x_39);
x_68 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_68, 0, x_67);
x_11 = x_50;
x_12 = x_41;
x_13 = x_68;
goto block_24;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = l_Int_repr(x_39);
lean_dec(x_39);
x_70 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = l_Repr_addAppParen(x_70, x_64);
x_11 = x_50;
x_12 = x_41;
x_13 = x_71;
goto block_24;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_72 = lean_ctor_get(x_3, 0);
x_73 = lean_ctor_get(x_3, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_3);
x_74 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_74, 0, x_10);
lean_ctor_set(x_74, 1, x_37);
x_75 = 0;
x_76 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set_uint8(x_76, sizeof(void*)*1, x_75);
x_77 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_77, 0, x_9);
lean_ctor_set(x_77, 1, x_76);
x_78 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__15));
x_79 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_box(1);
x_81 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_81, 0, x_79);
lean_ctor_set(x_81, 1, x_80);
x_82 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__17));
x_83 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
x_84 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_8);
x_85 = lean_unsigned_to_nat(1u);
x_86 = lean_nat_dec_eq(x_73, x_85);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; uint8_t x_89; 
x_87 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__18));
x_88 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_89 = lean_int_dec_lt(x_72, x_88);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; 
x_90 = lean_nat_abs(x_72);
lean_dec(x_72);
x_91 = l_Nat_reprFast(x_90);
x_25 = x_84;
x_26 = x_75;
x_27 = x_87;
x_28 = x_73;
x_29 = x_91;
goto block_36;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_92 = lean_nat_abs(x_72);
lean_dec(x_72);
x_93 = lean_nat_sub(x_92, x_85);
lean_dec(x_92);
x_94 = ((lean_object*)(lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__20));
x_95 = lean_nat_add(x_93, x_85);
lean_dec(x_93);
x_96 = l_Nat_reprFast(x_95);
x_97 = lean_string_append(x_94, x_96);
lean_dec_ref(x_96);
x_25 = x_84;
x_26 = x_75;
x_27 = x_87;
x_28 = x_73;
x_29 = x_97;
goto block_36;
}
}
else
{
lean_object* x_98; lean_object* x_99; uint8_t x_100; 
lean_dec(x_73);
x_98 = lean_unsigned_to_nat(0u);
x_99 = lean_obj_once(&lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19, &lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19_once, _init_lp_spiral_Spiral_Geometry_instReprRVec2_repr___redArg___closed__19);
x_100 = lean_int_dec_lt(x_72, x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
x_101 = l_Int_repr(x_72);
lean_dec(x_72);
x_102 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_102, 0, x_101);
x_11 = x_84;
x_12 = x_75;
x_13 = x_102;
goto block_24;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = l_Int_repr(x_72);
lean_dec(x_72);
x_104 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_104, 0, x_103);
x_105 = l_Repr_addAppParen(x_104, x_98);
x_11 = x_84;
x_12 = x_75;
x_13 = x_105;
goto block_24;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_spiral_Spiral_Geometry_instReprRPoint2_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instReprRPoint2_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_spiral_Spiral_Geometry_instReprRPoint2_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instBEqRPoint2_beq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_instDecidableEqRat_decEq(x_3, x_5);
if (x_7 == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = l_instDecidableEqRat_decEq(x_4, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instBEqRPoint2_beq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_spiral_Spiral_Geometry_instBEqRPoint2_beq(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRPoint2_decEq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
x_7 = l_instDecidableEqRat_decEq(x_3, x_5);
if (x_7 == 0)
{
return x_7;
}
else
{
uint8_t x_8; 
x_8 = l_instDecidableEqRat_decEq(x_4, x_6);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRPoint2_decEq___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_spiral_Spiral_Geometry_instDecidableEqRPoint2_decEq(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_spiral_Spiral_Geometry_instDecidableEqRPoint2(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_spiral_Spiral_Geometry_instDecidableEqRPoint2_decEq(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instDecidableEqRPoint2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_spiral_Spiral_Geometry_instDecidableEqRPoint2(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_rorigin___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lp_mathlib_Nat_cast___at___00Tactic_NormNum_evalRealSqrt_spec__3(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_rorigin___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_rorigin___closed__0, &lp_spiral_Spiral_Geometry_rorigin___closed__0_once, _init_lp_spiral_Spiral_Geometry_rorigin___closed__0);
x_2 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_rorigin(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_rorigin___closed__1, &lp_spiral_Spiral_Geometry_rorigin___closed__1_once, _init_lp_spiral_Spiral_Geometry_rorigin___closed__1);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instVAddRVec2RPoint2___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = l_Rat_add(x_3, x_6);
x_9 = l_Rat_add(x_4, x_7);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = l_Rat_add(x_3, x_10);
x_13 = l_Rat_add(x_4, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_instVSubRVec2RPoint2___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_1);
x_5 = !lean_is_exclusive(x_2);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_2, 0);
x_7 = lean_ctor_get(x_2, 1);
x_8 = l_Rat_sub(x_3, x_6);
x_9 = l_Rat_sub(x_4, x_7);
lean_ctor_set(x_2, 1, x_9);
lean_ctor_set(x_2, 0, x_8);
return x_2;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
x_12 = l_Rat_sub(x_3, x_10);
x_13 = l_Rat_sub(x_4, x_11);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_affineInterp2d(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_5);
lean_dec_ref(x_2);
x_6 = !lean_is_exclusive(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_ctor_get(x_1, 0);
x_8 = lean_ctor_get(x_1, 1);
lean_inc_ref(x_7);
x_9 = l_Rat_sub(x_4, x_7);
lean_inc_ref(x_8);
x_10 = l_Rat_sub(x_5, x_8);
x_11 = l_Rat_mul(x_3, x_9);
x_12 = l_Rat_mul(x_3, x_10);
x_13 = l_Rat_add(x_11, x_7);
x_14 = l_Rat_add(x_12, x_8);
lean_ctor_set(x_1, 1, x_14);
lean_ctor_set(x_1, 0, x_13);
return x_1;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_1, 0);
x_16 = lean_ctor_get(x_1, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_1);
lean_inc_ref(x_15);
x_17 = l_Rat_sub(x_4, x_15);
lean_inc_ref(x_16);
x_18 = l_Rat_sub(x_5, x_16);
x_19 = l_Rat_mul(x_3, x_17);
x_20 = l_Rat_mul(x_3, x_18);
x_21 = l_Rat_add(x_19, x_15);
x_22 = l_Rat_add(x_20, x_16);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_affineInterp2d___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_spiral_Spiral_Geometry_affineInterp2d(x_1, x_2, x_3);
lean_dec_ref(x_3);
return x_4;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_midpoint2d___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lp_mathlib_Nat_cast___at___00Tactic_NormNum_evalRealSqrt_spec__3(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_midpoint2d___closed__1(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lp_mathlib_Nat_cast___at___00Tactic_NormNum_evalRealSqrt_spec__3(x_1);
return x_2;
}
}
static lean_object* _init_lp_spiral_Spiral_Geometry_midpoint2d___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_obj_once(&lp_spiral_Spiral_Geometry_midpoint2d___closed__1, &lp_spiral_Spiral_Geometry_midpoint2d___closed__1_once, _init_lp_spiral_Spiral_Geometry_midpoint2d___closed__1);
x_2 = lean_obj_once(&lp_spiral_Spiral_Geometry_midpoint2d___closed__0, &lp_spiral_Spiral_Geometry_midpoint2d___closed__0_once, _init_lp_spiral_Spiral_Geometry_midpoint2d___closed__0);
x_3 = l_Rat_div(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_midpoint2d(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_obj_once(&lp_spiral_Spiral_Geometry_midpoint2d___closed__2, &lp_spiral_Spiral_Geometry_midpoint2d___closed__2_once, _init_lp_spiral_Spiral_Geometry_midpoint2d___closed__2);
x_4 = lp_spiral_Spiral_Geometry_affineInterp2d(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_lineThrough2d(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_spiral_Spiral_Geometry_affineInterp2d(x_1, x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_lineThrough2d___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_spiral_Spiral_Geometry_lineThrough2d(x_1, x_2, x_3);
lean_dec_ref(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_ratToJson(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; double x_4; double x_5; double x_6; lean_object* x_7; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
lean_dec_ref(x_1);
x_4 = l_Float_ofInt(x_2);
lean_dec(x_2);
x_5 = lean_float_of_nat(x_3);
x_6 = lean_float_div(x_4, x_5);
x_7 = lean_float_to_string(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_pointToJson(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_4);
lean_dec_ref(x_2);
x_5 = ((lean_object*)(lp_spiral_Spiral_Geometry_pointToJson___closed__0));
x_6 = lean_string_append(x_5, x_1);
x_7 = ((lean_object*)(lp_spiral_Spiral_Geometry_pointToJson___closed__1));
x_8 = lean_string_append(x_6, x_7);
x_9 = lp_spiral_Spiral_Geometry_ratToJson(x_3);
x_10 = lean_string_append(x_8, x_9);
lean_dec_ref(x_9);
x_11 = ((lean_object*)(lp_spiral_Spiral_Geometry_pointToJson___closed__2));
x_12 = lean_string_append(x_10, x_11);
x_13 = lp_spiral_Spiral_Geometry_ratToJson(x_4);
x_14 = lean_string_append(x_12, x_13);
lean_dec_ref(x_13);
x_15 = ((lean_object*)(lp_spiral_Spiral_Geometry_pointToJson___closed__3));
x_16 = lean_string_append(x_14, x_15);
return x_16;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_pointToJson___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_spiral_Spiral_Geometry_pointToJson(x_1, x_2);
lean_dec_ref(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_segmentToJson(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc_ref(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc_ref(x_5);
lean_dec_ref(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc_ref(x_7);
lean_dec_ref(x_3);
x_8 = ((lean_object*)(lp_spiral_Spiral_Geometry_segmentToJson___closed__0));
x_9 = lean_string_append(x_8, x_1);
x_10 = ((lean_object*)(lp_spiral_Spiral_Geometry_segmentToJson___closed__1));
x_11 = lean_string_append(x_9, x_10);
x_12 = lp_spiral_Spiral_Geometry_ratToJson(x_4);
x_13 = lean_string_append(x_11, x_12);
lean_dec_ref(x_12);
x_14 = ((lean_object*)(lp_spiral_Spiral_Geometry_segmentToJson___closed__2));
x_15 = lean_string_append(x_13, x_14);
x_16 = lp_spiral_Spiral_Geometry_ratToJson(x_5);
x_17 = lean_string_append(x_15, x_16);
lean_dec_ref(x_16);
x_18 = ((lean_object*)(lp_spiral_Spiral_Geometry_segmentToJson___closed__3));
x_19 = lean_string_append(x_17, x_18);
x_20 = lp_spiral_Spiral_Geometry_ratToJson(x_6);
x_21 = lean_string_append(x_19, x_20);
lean_dec_ref(x_20);
x_22 = ((lean_object*)(lp_spiral_Spiral_Geometry_segmentToJson___closed__4));
x_23 = lean_string_append(x_21, x_22);
x_24 = lp_spiral_Spiral_Geometry_ratToJson(x_7);
x_25 = lean_string_append(x_23, x_24);
lean_dec_ref(x_24);
x_26 = ((lean_object*)(lp_spiral_Spiral_Geometry_pointToJson___closed__3));
x_27 = lean_string_append(x_25, x_26);
return x_27;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_segmentToJson___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_spiral_Spiral_Geometry_segmentToJson(x_1, x_2, x_3);
lean_dec_ref(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_toJsonArray(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_2 = ((lean_object*)(lp_spiral_Spiral_Geometry_toJsonArray___closed__0));
x_3 = ((lean_object*)(lp_spiral_Spiral_Geometry_toJsonArray___closed__1));
x_4 = l_String_intercalate(x_3, x_1);
x_5 = lean_string_append(x_2, x_4);
lean_dec_ref(x_4);
x_6 = ((lean_object*)(lp_spiral_Spiral_Geometry_toJsonArray___closed__2));
x_7 = lean_string_append(x_5, x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_animationToJson(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_4 = ((lean_object*)(lp_spiral_Spiral_Geometry_animationToJson___closed__0));
x_5 = lean_string_append(x_4, x_1);
x_6 = ((lean_object*)(lp_spiral_Spiral_Geometry_animationToJson___closed__1));
x_7 = lean_string_append(x_5, x_6);
x_8 = l_List_lengthTR___redArg(x_3);
x_9 = l_Nat_reprFast(x_8);
x_10 = lean_string_append(x_7, x_9);
lean_dec_ref(x_9);
x_11 = ((lean_object*)(lp_spiral_Spiral_Geometry_animationToJson___closed__2));
x_12 = lean_string_append(x_10, x_11);
x_13 = lean_string_append(x_12, x_2);
x_14 = ((lean_object*)(lp_spiral_Spiral_Geometry_animationToJson___closed__3));
x_15 = lean_string_append(x_13, x_14);
x_16 = ((lean_object*)(lp_spiral_Spiral_Geometry_animationToJson___closed__4));
x_17 = lean_string_append(x_15, x_16);
x_18 = ((lean_object*)(lp_spiral_Spiral_Geometry_toJsonArray___closed__1));
x_19 = l_String_intercalate(x_18, x_3);
x_20 = lean_string_append(x_17, x_19);
lean_dec_ref(x_19);
x_21 = ((lean_object*)(lp_spiral_Spiral_Geometry_animationToJson___closed__5));
x_22 = lean_string_append(x_20, x_21);
return x_22;
}
}
LEAN_EXPORT lean_object* lp_spiral_Spiral_Geometry_animationToJson___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_spiral_Spiral_Geometry_animationToJson(x_1, x_2, x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_Module_Defs(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Algebra_AddTorsor_Defs(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib_Tactic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_spiral_Spiral_Geometry(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_Module_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Algebra_AddTorsor_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib_Tactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_spiral_Spiral_Geometry_instCommRingRat__spiral = _init_lp_spiral_Spiral_Geometry_instCommRingRat__spiral();
lean_mark_persistent(lp_spiral_Spiral_Geometry_instCommRingRat__spiral);
lp_spiral_Spiral_Geometry_instZeroRVec2 = _init_lp_spiral_Spiral_Geometry_instZeroRVec2();
lean_mark_persistent(lp_spiral_Spiral_Geometry_instZeroRVec2);
lp_spiral_Spiral_Geometry_instAddCommGroupRVec2 = _init_lp_spiral_Spiral_Geometry_instAddCommGroupRVec2();
lean_mark_persistent(lp_spiral_Spiral_Geometry_instAddCommGroupRVec2);
lp_spiral_Spiral_Geometry_rorigin = _init_lp_spiral_Spiral_Geometry_rorigin();
lean_mark_persistent(lp_spiral_Spiral_Geometry_rorigin);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

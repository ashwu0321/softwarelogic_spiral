import Lake
open Lake DSL

package «spiral» where
  name := "spiral"

require mathlib from git
  "https://github.com/leanprover-community/mathlib4" @ "master"

lean_lib «Spiral» where

lean_exe «spiralanim» where
  root := `Spiral.Main

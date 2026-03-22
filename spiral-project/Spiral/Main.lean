import Spiral.Geometry
open Spiral.Geometry

-- Hexagon vertices roughly at radius ~8, centered at origin.
-- Using rational approximations of cos/sin for multiples of 60°.
-- cos 0   = 1,      sin 0   = 0
-- cos 60  = 1/2,    sin 60  ≈ 866/1000
-- cos 120 = -1/2,   sin 120 ≈ 866/1000
-- cos 180 = -1,     sin 180 = 0
-- cos 240 = -1/2,   sin 240 ≈ -866/1000
-- cos 300 = 1/2,    sin 300 ≈ -866/1000

def center : RPoint2 := ⟨0, 0⟩

def startPoint : RPoint2 := ⟨8, 0⟩

def pullFactor : Rat := 1/3

def hexPoints : Array RPoint2 := #[
  ⟨8,       0⟩,
  ⟨4,       6928/1000⟩,
  ⟨-4,      6928/1000⟩,
  ⟨-8,      0⟩,
  ⟨-4,      -6928/1000⟩,
  ⟨4,       -6928/1000⟩
]

def spiralStep (current target : RPoint2) : RPoint2 :=
  affineInterp2d current target pullFactor

def generateSpiral (n : Nat) : List RPoint2 :=
  let rec helper (k : Nat) (acc : List RPoint2) (current : RPoint2) : List RPoint2 :=
    match k with
    | 0 => acc.reverse
    | k + 1 =>
      let target := hexPoints[k % 6]!
      let next := spiralStep current target
      helper k (next :: acc) next
  helper n [startPoint] startPoint

def buildSegments (points : List RPoint2) : List String :=
  let rec go (ps : List RPoint2) (idx : Nat) (acc : List String) : List String :=
    match ps with
    | [] | [_] => acc.reverse
    | p :: q :: rest =>
      let seg := segmentToJson ("seg" ++ toString idx) p q
      go (q :: rest) (idx + 1) (seg :: acc)
  go points 0 []

def buildFrames (points : List RPoint2) : List String :=
  let allSegs := buildSegments points
  let rec go (n : Nat) (acc : List String) : List String :=
    match n with
    | 0 => acc.reverse
    | n + 1 =>
      let segs := allSegs.take n
      let frameSegs := String.intercalate ",\n" segs
      let frame := "[" ++ frameSegs ++ "]"
      go n (frame :: acc)
  go allSegs.length []

theorem spiral_contracts (p : RPoint2) (t : Rat) :
    (spiralStep p center t) -ᵥ center =
    ((1 - t) • (p -ᵥ center)) := by
  simp [spiralStep, affineInterp2d]
  ext <;> ring

def main : IO Unit := do
  let points := generateSpiral 30
  let frames := buildFrames points
  let json := animationToJson
    "Hexagon Spiral"
    "A point spiraling inward by moving 1/3 toward each successive hexagon vertex"
    frames
  IO.println json

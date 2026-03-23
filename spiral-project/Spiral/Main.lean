import Spiral.Geometry
open Spiral.Geometry

def center : RPoint2 := ⟨0, 0⟩

def baseHexPoints : Array RPoint2 := #[
  ⟨8,   0⟩,
  ⟨4,   6928/1000⟩,
  ⟨-4,  6928/1000⟩,
  ⟨-8,  0⟩,
  ⟨-4,  -6928/1000⟩,
  ⟨4,   -6928/1000⟩
]

def scalePoint (s : Rat) (p : RPoint2) : RPoint2 :=
  ⟨s * p.x, s * p.y⟩

def hexVertex (i : Nat) : RPoint2 :=
  baseHexPoints[i % 6]!

def spiralPoint (step totalSteps pointsPerSide : Nat) : RPoint2 :=
  let side : Nat := (step / pointsPerSide) % 6
  let offset : Nat := step % pointsPerSide

  let u : Rat := (offset : Rat) / (pointsPerSide : Rat)

  let shrinkStart : Rat := 1
  let shrinkEnd : Rat := 1/8
  let t : Rat := (step : Rat) / (totalSteps : Rat)
  let scale : Rat := shrinkStart - (shrinkStart - shrinkEnd) * t

  let p₁ := scalePoint scale (hexVertex side)
  let p₂ := scalePoint scale (hexVertex (side + 1))

  affineInterp2d p₁ p₂ u

def generateSpiral (turns pointsPerSide : Nat) : List RPoint2 :=
  let totalSteps := turns * 6 * pointsPerSide
  ((List.range (totalSteps + 1)).map fun k =>
    spiralPoint k totalSteps pointsPerSide)

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

def main : IO Unit := do
  let points := generateSpiral 5 8
  let frames := buildFrames points
  let json := animationToJson
    "Hexagon Spiral"
    "A shrinking hexagonal spiral traced along the edges of successively smaller hexagons"
    frames
  IO.println json

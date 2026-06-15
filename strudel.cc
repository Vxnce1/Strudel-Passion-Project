setcpm(100 / 4)

let bar1 = "- [A4 G4 F#4 E4]"
let bar2 = "E4 A3@0.5 A3@2 F#4@0.5"
let bar3 = "F#4@2 - @0.5 [D4 D4 E4]@1.5"
let bar4 = "[F#4 G4 F#4 B3]@2 D4 E4"

let line1 = "-@2 [A4 G4 F#4 E4]@2 - A3@0.5 A3@2 F#4@0.5 F#4@2 - @0.5 [D4 D4 E4]@1.5 [F#4 G4 F#4 B3]@2 D4 E4"

let bar5 = "E4@1.5 A3@0.5 [A4 G4 F#4 E4]@2"
let bar6 = "E4 A3@0.5 A3 [A3 D4 F#4]@1.5"
let bar7 = "F#4@3.5 B3@0.5"
let bar8 = "[F#4 G4 F#4 B3]@2 D4 E4"

let line2 = "-@1.5 A3@0.5 [A4 G4 F#4 E4]@2 - A3@0.5 A3 [A3 D4 F#4]@1.5 F#4@3.5 B3@0.5 [F#4 G4 F#4 B3]@2 D4 E4"

let bar9 = "E4 [A4 A4] A4 [A4 B4]"
let bar10 = "B4 A4@0.5 G4@1.5 [F#4 F#4]"
let bar11 = "F#4 G4 E4@1.5 [Db4 B3], - G3 E3@1.5 [Db3 B2]"
let bar12 = "G3 E4 F#4@1.5 [D4 E4], B2 E3 F#3@1.5 [D3 E3]"

let line3 = "E4 [A4 A4] A4 [A4 B4] B4 A4@0.5 G4@1.5 [F#4 F#4] F#4 G4@0.5 E4@1.5 [Db4 B3] G3@0.5 E4 F#4@1.5 [D4 E4], -@9 G3@0.5 E3@1.5 [Db3 B2]  B2@0.5 E3 F#3@1.5 [D3 E3]"

let bar13 = "[F#4 G4 A4]@1.5 D4@1.5 [D4 D4]"
let bar14 = "[F#4 G4 A4]@1.5 D4@1.5 [F#4 E4]"
let bar15 = "D3 B2@0.5 D3 B2@0.5 D3"
let bar16 = "C3@1.5 A3@0.5 [D4 E4 F#4 G4]@2"

let line4 = "[F#4 G4 A4]@1.5 D4@1.5 [D4 D4] [F#4 G4 A4]@1.5 D4@1.5 [F#4 E4] D3 B2@0.5 D3 B2@0.5 D3 C3@1.5 A3@0.5 [D4 E4 F#4 G4]@2, -@14  [D3 E3 F#3 G3]@2"

let bar17 = "A4 [A4 F#4] A4@1.5 F#4 @0.5"
let bar18 = "A4 A4@0.5 B4@2 B4@0.5"
let bar19 = "[- B4 B4 B4] [B4 A4 A4 B4]" 
let bar20 = "C#4 D4 B4 [A4 A4]"

let line5 = "A4 [A4 F#4] A4@1.5 F#4@0.5 A4 A4@0.5 B4@2 B4@0.5 [- B4 B4 B4]@2 [B4 A4 A4 B4]@2 C5 D5 B4 [A4 A4]"

let bar21 = "A4@0.5 G4@2 [D4 D4 E4]@1.5"
let bar22 = "[A4 G4 F#4]@1.5 E4 B4 A4@0.5"
let bar23 = "[G4@1.5 F#4 E4@0.5]@1.5 E4 F#4 D4@0.5"
let bar24 = "-@0.5 D4 B3@0.5 [F#4 D4 D4 E4]@2"

let line6 = "A4@0.5 G4@2 [D4 D4 E4]@1.5 [A4 G4 F#4]@1.5 E4 B4 A4@0.5 [G4@1.5 F#4 E4@0.5]@1.5 E4 F#4 D4@0.5 -@0.5 D4 B3@0.5 [F#4 D4 D4 E4]@2"



_$: s("[bd hh hh bd rim hh hh:2 hh]").fast(1.5)
_$: n("0 2 4 <[6,8] [7,9]>").scale("<C:major A:minor>").s("piano").fast(1.5)

$: cat(
  note(line5)
  // note(line2),
  // note(line3),
  // note(line4),
  // note(line5),
  // note(line6),
  // note("F#4@2, D4@2")
)
.slow(4)
.sound("piano")
  ._scope()

 
//chord progression


let chords1 = "A3 -@3 E4 -@3 D3 -@6 E3, F3 -@3 C3 -@3 B3 -@6 C3, D3 -@3 A3 -@3 G2 -@6 A3 , A4 -@3 F2 -@3 B3 -@6 E#2"
let chords2 = "A3 -@3 E4 -@3 G3 -@5 G3 A3, F3 -@3 C3 -@3 D3 -@5 D3 C3, D3 -@3 A3 -@3 C3 -@5 B3 E4, A4 -@3 F2 -@3 D3 -@5 D2 B3"
let chords3 = "A4@1.5 A4@2 -@0.5 B4@1.5 B4@2 -@0.5 G3 -@3 G3 -@3, C3@1.5 C3@2 -@0.5 D4@1.5 D4@2 -@0.5 B4 -@3 B3 -@3, A3@1.5 A3@2 -@0.5 F3@1.5 F3@2 -@0.5 D4 -@3 D3 -@3, E4@1.5 E4@2 -@0.5 F2@1.5 F2@2 -@0.5 D3 -@3 D2 -@3"
let chords4 = "[E3 E3 G3]@1.5 B3 [E3 G3 E3]@1.5 [A4 B3 D3]@1.5 F#4 [D3 F#4 E3]@1.5 A3@0.5 A4 c3 F3@0.5 G3 A4@4, B3 -@3 D2 -@7 A3@4, G3 -@3 F3 -@7 E3@4, D3 -@3 B3 -@11"
let chords5 = "[G3 G2 B3]@1.5 G3@1.5 [D3 G2] [A4 A3 C3]@1.5 A4 [A3 A4 A3]@1.5 [G3 G2 B3]@1.5 G3@2 -@0.5 A4@2 A4 A4, [D3 - -]@1.5 D3@2.5 E3@1.5 E3@1.5 D3@1.5  D3@2 -@0.5 E3@2 F#4 E3"

$: cat(
  note(chords5),
  // note(chords2),
  // note(chords3)
  )
.slow(4)
.sound("piano")


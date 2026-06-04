setcpm(90 / 4)

let bar1 = "- [A4 G4 F#4 E4]@1, d3, f#3, a4 "
let bar2 = "E4 A3@0.5 A3@2 F#4@0.5, d2, f2, a3, c3"
let bar3 = "F#4@2 -@0.5 [D4 D4 E4]@2, e2, g2, b2, b3"
let bar4 = "[F#4 G4 F#4 B3]@2 D4 E4, [- - - -]@2 - f2, [- - - -]@2 - a3, [- - - -]@2 - c3, [- - - -]@2 - c2"

// let verse1 = "[- A4 G4 F#4 E4@2.5]@4 A3@0.7 A3@2.5 F#4@4"
// let verse2 = "[- D4 D4 E4] [F#4 G4 F#4 B3] [D4@1.5 E4@2] -"
// let verse3 = "A4 [A5 G5 F5 E5@3]@3 A4 A4@1 [A4 D5]@1 F5@2"
// let verse4 = "B4 [F5 G5 F5 B4]@2 D5 E5 - -"

$: cat(
  
  note(bar1),
  note(bar2),
  note(bar3),
  note(bar4)
)
  .sound("piano")


// $: cat(
//   note("<d3, f#3, a4>"),
//   note("<f3, ab3, c4>"),
//   note("<g2, b3, d3>"),
//   note("<a3, c#3, e3>")
//   // note(chordD),
//   // note(chordFb),
//   // note(chordG),
//   // note(chordA)
// )
// .sound("piano")
// .slow(2)




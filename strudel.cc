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

let dr =
stack( s("[bd:<1 0>(<3 1>,8,<0 2>:1.3)] , [~ sd:<15>:2.5]").note("B1").bank("LinnDrum")
.decay(.3).room(".3:2").fast(2)
)
// s("[LinnDrum_hh(<3 2>,8)]").hp("1000").lp("9000").decay(.3).velocity([".8 .6"]).room(".3:2").fast(2),
// s("sh*8").note("B1").bank("RolandTR808").room(".6:2").velocity("[.8 .5]!4").postgain(1.5).fast(2))._pianoroll({vertical:0,flipTime:1,fill:0,labels:1})


let dr1 = 
s("[bd -] [sd [bd bd]] [-@4] [sd -@3], [oh hh] [hh [hh -]] [hh hh hh hh] [hh hh hh hh]")

let dr2 = 
  s("[bd [ht bd]] [[sd ht] bd] [mt@1.5 mt@0.5] [sd lt], hh@0.5 -@3.5")

let fulldr1 = 
  cat(dr1, dr1, dr1, dr2)
  ._pianoroll({labels:1})

let chordP1 = 
  note("d3@4 f#2@4 g2@5.5 a3@1.5 a3, a4@4 c#4@4 b4@5.5 c#4@1.5 d4, e4@4 e4@4 d4@5.5 e4@1.5 e4, f#4@4 a5@4 f#4@5.5 a5@1.5 a5")
  .sound("piano").gain(0.8)
  .slow(4)
  ._pianoroll({labels:1})

let m1 = note(cat("D4 -@2 [B5 F#4]@0.5 A5@3 [F#4 F#4]@0.5 F#5@0.5 A5@0.25 A5@0.75 G4@0.25 G4@0.75 F#4@0.25 F#4@0.75 E4@0.25 E4@0.5 D4@0.75 B4 -@1.5 D4@1.5"))
  .sound("sine").gain(1.2)
  .slow(4)

let bassline =
note("<[d2*12@3 a1*4 f#2*4 c#2*4 f#2!2] [g2*4 d2*4 g2!2 a2*4 e2*4 a2!2]>/2")
.s("gm_electric_bass_pick").gain(0.3)
.decay(.5).velocity(rand.range(.7,1).slow(4))
.lp(1000).compressor("-20:20:10:.002:.02").room(".6:2")
.postgain(1.5).color('white')._scope({thickness:2})

// a1*32

//4 = 1 bar/16 beats
$: arrange(
  [2, stack(cat(dr1, dr2))],
  [4*3, stack(chordP1, fulldr1, m1, bassline)]
  //[10, note("-")]
)

_$: cat(
   note(line1),
  note(line2),
  note(line3),
  note(line4),
  note(line5),
  note(line6)
)
.slow(4)
.sound("piano")
  ._scope()

 
//chord progression


let chords1 = "A3 -@3 E4 -@3 D3 -@6 E3, F3 -@3 C3 -@3 B3 -@6 C3, D3 -@3 A3 -@3 G2 -@6 A3 , A4 -@3 F2 -@3 B3 -@6 E#2"
let chords2 = "A3 -@3 E4 -@3 G3 -@5 G3 A3, F3 -@3 C3 -@3 D3 -@5 D3 C3, D3 -@3 A3 -@3 C3 -@5 B3 E4, A4 -@3 F2 -@3 D3 -@5 D2 B3"
let chords3 = "A4@1.5 A4@2 -@0.5 B3@1.5 B4@2 -@0.5 G3 -@3 G3 -@3, C3@1.5 C3@2 -@0.5 D3@1.5 D3@2 -@0.5 B3 -@3 B3 -@3, A3@1.5 A3@2 -@0.5 F3@1.5 F3@2 -@0.5 D4 -@3 D3 -@3, E4@1.5 E4@2 -@0.5 F2@1.5 F2@2 -@0.5 D3 -@3 D2 -@3"
let chords4 = "[E3 E3 G3]@1.5 B2 [E3 G3 E3]@1.5 [A4 B3 D3]@1.5 f#4 [D3 F#4 E3]@1.5 A3@0.5 A4 d3 F#4@0.5 G3 A4@4, B3 -@3 D3 -@7 A3@4, G3 -@3 F2 -@7 E3@4, D3 -@3 B2 -@11"
let chords5 = "[G3 G2 B3]@1.5 G3@1.5 [D3 G2] [A4 A3 C3]@1.5 A4 [A3 A4 A3]@1.5 [G3 G2 B3]@1.5 G3@2 -@0.5 A4@2 A4 A4, D3@1.5 D3@2.5 E3@1.5 E3@1.5 E3 D3@1.5 D3@2 -@0.5 E3@2 F#4 E3"
  .stack("G2 -@3 A3 -@3 G2 -@3 C3@2 D3 C3, -@12 A3@2 A3 A3")
let chords6 = "G3@1.5 G3@2 -@0.5 F3@1.5 F3@1.5 E3 [E3 E2 G2 b3]@2 [D3 F2 A3 C3]@2 [G3 G2 B3 D3]@2 A4 G3, D3@1.5 D3@2 -@0.5 C3@1.5 D2@1.5 C3 B3 - C2 - D3 - E3 D3"
  .stack("B3@1.5 B3@2 -@0.5 A3@1.5 B4@1.5 A3 G2 - A4 - B3 - A3 G2, G2@1.5 G2@2 -@0.5 F2@1.5 F2@1.5 F3 E3 - F3 - G3 -@3")

_$: cat(
  note(chords1),
  note(chords2),
  note(chords3),
  note(chords4),
  note(chords5),
  note(chords6)
  )
.slow(4)
.sound("piano")


// .color("<pink cyan green orange>").punchcard({labels:1,vertical:1,flipTime:1,fill:0,strokeActive:1,filpValue:1,fontFamily:'teletext'})

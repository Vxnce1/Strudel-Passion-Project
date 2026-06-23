setcpm(96 / 4)


// CHORD PROGRESSION 


let chords1 = note("A3 -@3 E4 -@3 D3 -@6 E3, F3 -@3 C3 -@3 B3 -@6 C3, D3 -@3 A3 -@3 G2 -@6 A3 , A4 -@3 F2 -@3 B3 -@6 E#2")
let chords2 = note("A3 -@3 E4 -@3 G3 -@5 G3 A3, F3 -@3 C3 -@3 D3 -@5 D3 C3, D3 -@3 A3 -@3 C3 -@5 B3 E4, A4 -@3 F2 -@3 D3 -@5 D2 B3")
let chords3 = note("A4@1.5 A4@2 -@0.5 B3@1.5 B4@2 -@0.5 G3 -@3 G3 -@3, C3@1.5 C3@2 -@0.5 D3@1.5 D3@2 -@0.5 B3 -@3 B3 -@3, A3@1.5 A3@2 -@0.5 F3@1.5 F3@2 -@0.5 D4 -@3 D3 -@3, E4@1.5 E4@2 -@0.5 F2@1.5 F2@2 -@0.5 D3 -@3 D2 -@3")
let chords4 = note("[E3 E3 G3]@1.5 B2 [E3 G3 E3]@1.5 [A4 B3 D3]@1.5 f#4 [D3 F#4 E3]@1.5 A3@0.5 A4 d3 F#4@0.5 G3 A4@4, B3 -@3 D3 -@7 A3@4, G3 -@3 F2 -@7 E3@4, D3 -@3 B2 -@11")

let chords5 = note("[G3 G2 B3]@1.5 G3@1.5 [D3 G2] [A4 A3 C3]@1.5 A4 [A3 A4 A3]@1.5 [G3 G2 B3]@1.5 G3@2 -@0.5 A4@2 A4 A4, D3@1.5 D3@2.5 E3@1.5 E3@1.5 E3 D3@1.5 D3@2 -@0.5 E3@2 F#4 E3"
  .stack("G2 -@3 A3 -@3 G2 -@3 C3@2 D3 C3, -@12 A3@2 A3 A3"))
let chords6 = note("G3@1.5 G3@2 -@0.5 F3@1.5 F3@1.5 E3 [E3 E2 G2 b3]@2 [D3 F2 A3 C3]@2 [G3 G2 B3 D3]@2 A4 G3, D3@1.5 D3@2 -@0.5 C3@1.5 D2@1.5 C3 B3 - C2 - D3 - E3 D3"
  .stack("B3@1.5 B3@2 -@0.5 A3@1.5 B4@1.5 A3 G2 - A4 - B3 - A3 G2, G2@1.5 G2@2 -@0.5 F2@1.5 F2@1.5 F3 E3 - F3 - G3 -@3"))


let pchords = 
  cat(
  chords1,
  chords2,
  chords3,
  chords4,
  chords5,
  chords6
  )
  .slow(4)
  .sound("piano")
  ._pianoroll()


// LINES STRINGS


let line1 = note("-@2 [A4 G4 F#4 E4]@2 - A3@0.5 A3@2 F#4@0.5 F#4@2 - @0.5 [D4 D4 E4]@1.5 [F#4 G4 F#4 B3]@2 D4 E4")
let line2 = note("-@1.5 A3@0.5 [A4 G4 F#4 E4]@2 - A3@0.5 A3 [A3 D4 F#4]@1.5 F#4@3.5 B3@0.5 [F#4 G4 F#4 B3]@2 D4 E4")
let line3 = note("E4 [A4 A4] A4 [A4 B4] B4 A4@0.5 G4@1.5 [F#4 F#4] F#4 G4@0.5 E4@1.5 [Db4 B3] G3@0.5 E4 F#4@1.5 [D4 E4], -@9 G3@0.5 E3@1.5 [Db3 B2]  B2@0.5 E3 F#3@1.5 [D3 E3]")
let line4 = note("[F#4 G4 A4]@1.5 D4@1.5 [D4 D4] [F#4 G4 A4]@1.5 D4@1.5 [F#4 E4] D3 B2@0.5 D3 B2@0.5 D3 C3@1.5 A3@0.5 [D4 E4 F#4 G4]@2, -@14  [D3 E3 F#3 G3]@2")

let line5 = note("A4 [A4 F#4] A4@1.5 F#4@0.5 A4 A4@0.5 B4@2 B4@0.5 [- B4 B4 B4]@2 [B4 A4 A4 B4]@2 C5 D5 B4 [A4 A4]")
let line6 = note("A4@0.5 G4@2 [D4 D4 E4]@1.5 [A4 G4 F#4]@1.5 E4 B4 A4@0.5 [G4@1.5 F#4 E4@0.5]@1.5 E4 F#4 D4@0.5 -@0.5 D4 B3@0.5 [F#4 D4 D4 E4]@2")


let verse =
  cat(
  line1,
  line2,
  line3,
  line4,
  line5,
  line6
)
.slow(4)
.sound("piano")




let interverse1 = note("E5@0.25 F#5@1.75 G5@0.25 F#5@0.5 G5@0.25 F#5@0.5 D5@0.25 E5@2 [D5 B5 c#5 e5] A5 [b5 c#5 d5 c#5] d5@0.25 A5@0.5 [D5 c#5 d5 a5] [d5 d5 c#5 d5] a5@0.25 e5 d5@0.25 c#5@0.25 b5@0.25 a5 [f#4 b5 e4 d4] b5@0.5")


let interverse2 = note("a5@0.5 f#4@0.25 e4@0.75 b5@0.25 a5@0.75 f#4@0.25 d4@0.75 f#5@0.25 e5@0.75 d5@0.25 b5@0.75 a5@0.25 b5@0.25 [[d5 e5 f#5]@0.5] e5@0.75 d5@0.25 c6@0.25 d6@1.5 c6@0.25 Bb5@0.75 a6@0.75 g5@0.75 a6@1.5 a#6@1.5 -")


let fullinterv = cat(interverse1, interverse2)
  .sound("gm_tenor_sax")
  .slow(4)
  .gain(1.5)
  ._pianoroll()

let outrov = note(cat("D#4@0.25 C#4@1.75 -@2 E#4@0.5 F#4@0.25 E#4@0.25 D#4@0.25 E#4@0.75 -@2 G4@0.25 g#4@3.75 -@4"))
  .sound("piano")
  .slow(4)
  .gain(1)
  ._pianoroll()



// DRUMS


let dr =
stack( s("[bd:<1 0>(<3 1>,8,<0 2>:1.3)] , [~ sd:<15>:2.5]").note("B1").bank("LinnDrum")
.decay(.3).room(".3:2").fast(2)
)

let dr1 = 
s("[bd -] [sd [bd!2]] [-@4] [sd -@3], [oh hh] [hh [hh -]] [hh!4] [hh!4]")

let dr2 = 
  s("[bd [ht bd]] [[sd ht] bd] [mt@1.5 mt@0.5] [sd lt], hh@0.5 -@3.5")

let interludedr1 = s("[bd!4@0.5] [sd [bd bd]] - [[sd -@3]@0.5], [[oh - hh -]@0.5] [hh [hh -]] [hh!4@0.5]!2")

let interludedr2 = s("[bd -] [sd [bd bd]] - [[sd -@3]@0.5], [hh hh] [hh [hh -]] [hh!4@0.5]!2 ")

let interludedr3 = s(" [bd -] [sd -] [bd@0.5] [bd@0.5], -@3 [sd@0.5], [hh hh]!2 [hh!4@0.5]!2 ")

let interludedr4 = s(" [bd -] [sd bd] [[-@3 ht]@0.5] [[sd mt] lt], [hh hh] [hh hh] [[hh!3 -]@0.5] -")

let outrodr = s("-@11 [lt sd hh]!2 [bd*10, sd*10]@2 [mt, sd, crash, oh, hh]*2").slow(4).gain(0.4)

let fulldr1 = 
  cat(dr1, dr1, dr1, dr2)
  ._pianoroll({labels:1})

let fulldr2 = 
  cat(interludedr1, interludedr2, interludedr2, interludedr3, interludedr1, interludedr2, interludedr2, interludedr4)
  // .gain(0.3)
  ._pianoroll({labels:1})


// TRACK CONTEXTS (CHORDP1, M1, BASSLINE)


let chordP1 = 
  note("d3@4 f#2@4 g2@5.5 a3@1.5 a3, a4@4 c#4@4 b4@5.5 c#4@1.5 d4, e4@4 e4@4 d4@5.5 e4@1.5 e4, f#4@4 a5@4 f#4@5.5 a5@1.5 a5")
  .sound("piano").gain(0.9)
  .slow(4)
  ._pianoroll({labels:1})

let m1 = note(cat("D4 -@2 [B5 F#4]@0.5 A5@3 [F#4 F#4]@0.5 F#5@0.5 A5@0.25 A5@0.75 G4@0.25 G4@0.75 F#4@0.25 F#4@0.75 E4@0.25 E4@0.5 D4@0.75 B4 -@1.5 D4@1.5"))
  .sound("user").gain(1.2).decay(0.9)
  .slow(4)
  ._pianoroll()

let interC1 = note("g2!4 a3!4 b3!4 c#3!2 d3 f#2, b4!4 c#4!4 b4!4 c#4!2 a4 c#4, d4!4 e4!4 d4!4 e4!2 d4 e4, f#4!4 a5!4 f#4!4 a5!2 f#4 a5")
  ._pianoroll({labels:1})

let interC2 = note("e3!4 a3!4 Bb3!4 a3@1.5 Bb3@2.5, b4!4 d4!2 c#4!2 c4!4 b4@1.5 c4@2.5, d4!4 e4!4 d4!4 d4@1.5 eb4@2.5, g4!4 a5!8 g4@1.5 ab5@2.5")
  ._pianoroll()
let fullinterC = cat(interC1, interC2)
  .sound("piano")
  .slow(4)
  .gain(0.7)

let outroC = note(cat("B3!4 C#3!4 g#2@8, b4!4 c#4!4 b4@8, d#4!4 e#4!4 e4@8, f#4!4 g#4!4 g#4@8"))
  .slow(4)
  .sound("piano")
  .gain(0.6)
  ._pianoroll()

let bassline =
note("<[d2*12@3 a1*4 f#2*4 c#2*4 f#2!2] [g2*4 d2*4 g2*8@2 a2*4 e2*4 a2!2]>/2")
.s("gm_electric_bass_pick").gain(0.3)
.decay(.5).velocity(rand.range(.7,1).slow(4))
.lp(1000).compressor("-20:20:10:.002:.02").room(".6:2")
.postgain(1.5).color('white')._scope({thickness:2})

let interbassline =
note("<[g2*16@4 a2*16@4] [b2*16@4 c#3!2 d3*4 f#2*4] [e2*16@4 a2*16@4] [Bb2*16@4 a2*8@1.5 Bb2*8@2.5]>/2")
.s("gm_electric_bass_pick").gain(0.3)
.decay(.5).velocity(rand.range(.7,1).slow(4))
.lp(1000).compressor("-20:20:10:.002:.02").room(".6:2")
.postgain(1.5).color('white')._scope({thickness:2})


// MAIN PLAYBACK CONTROL 



//4 = 16 beats
$: arrange(
  [4*6, stack(pchords, verse).gain(1.2)],
  [4, stack(cat(dr1, dr1, dr2, dr2))],
  [4*2, stack(chordP1, fulldr1, m1, bassline)],
  [4*2, stack((dr1), cat(chords5, chords6).slow(4).sound("piano"), cat(line5, line6).slow(4).sound("user").decay(0.7).gain(1.2))],
  [2, stack(cat(dr1, dr2))],
  [4*2, stack(chordP1, fulldr1, m1, bassline)],
  [2, cat(interludedr2, interludedr4).gain(1)],
  [4*2, stack(interbassline, fullinterC, fulldr2, fullinterv)],
  [1, cat( dr2).gain(1.5)],
  [4*2, stack((dr1), cat(chords5, chords6).slow(4).sound("piano"), cat(line5, line6).slow(4).sound("user").decay(0.7).gain(1.2))],
  [4*2, stack(chordP1, fulldr1, m1, bassline)],
  [1, stack(s("bd, oh").gain(1.2), note("b3@2 b3!2, b4@2 b4!2, d#4@2 d#4!2, f#4@2 F#4!2").sound("piano"))],
  [2.75, stack(outroC.gain(0.6), outrov)],
  [3, outroC.slow(1.5)],
  [1, note("[g#2, b4, e4, g#4]!4@2").sound("piano").slow(1.5)],
  [2, stack(cat(dr1, dr2))],
  [1, s("bd, oh")],
  [4, note("-")]
)



// .color("<red orange yellow pink>").punchcard()
// .color("<red orange yellow purple>").spectrum()
// .color("<blue violet purple cyan pink>").pianoroll()
 // .color("<pink cyan green orange>").punchcard({labels:1,vertical:1,flipTime:1,fill:0,strokeActive:1,filpValue:1,fontFamily:'teletext'})

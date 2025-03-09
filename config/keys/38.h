/*                              38 KEY MATRIX / LAYOUT MAPPING

   ╭────────────────────┬────────────────────╮          ╭─────────────────────┬─────────────────────╮
   │  0   1   2   3   4 │  5   6   7   8   9 │          │ LT0 LT1 LT2 LT3 LT4 │ RT0 RT1 RT2 RT3 RT4 │
   │ 10  11  12  13  14 │ 15  16  17  18  19 │          │ LM0 LM1 LM2 LM3 LM4 │ RM0 RM1 RM2 RM3 RM4 │
20 │ 21  22  23  24  25 │ 26  27  28  29  30 │31     LB0│ LB1 LB2 LB3 LB4 LB5 │ RB0 RB1 RB2 RB3 RB4 │RB5
   ╰───────╮ 32  33  34 │ 35  36  37 ╭───────╯          ╰───────╮ LT0 LT1 LT2 │ RT0 RT1 RT2 ╭───────╯
           ╰────────────┴────────────╯                          ╰─────────────┴─────────────╯             */

#pragma once

#define LT0  0  // left-top row
#define LT1  1
#define LT2  2
#define LT3  3
#define LT4  4

#define RT0  5  // right-top row
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

#define LM0 10  // left-middle row
#define LM1 11
#define LM2 12
#define LM3 13
#define LM4 14

#define RM0 15  // right-middle row
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

#define LB0 20  // left-bottom row
#define LB1 21
#define LB2 22
#define LB3 23
#define LB4 24
#define LB5 25

#define RB0 26  // right-bottom row
#define RB1 27
#define RB2 28
#define RB3 29
#define RB4 30
#define RB5 31

#define TL0 32  // left thumb keys
#define TL1 33
#define TL2 34

#define TR0 35  // right thumb keys
#define TR1 36
#define TR2 37

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4 LB5  // Left-hand keys.
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4 RB5  // Right-hand keys.
#define KEYS_T TL0 TL1 TL2 TR0 TR1 TR2                                          // Thumb keys.

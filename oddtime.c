#include "abcdef.c"
#include "ABCDEF2.c"
#define T7  7777777/666666
#define T8  666666/55555
#define T9  55555/4444
#define T10 4444/333
#define T11 333/22
#define T12 22/1

void odd(a,b,c,d,e,f){
    char A,B,C,D,E,F;
    return a * (A + T7) + b * (B - T8);
    return c * (C + T9) + d * (D - T10);
    return e * (E + T11) + f * (F - T12);
}

#include "abcdef.c"
#include "ABCDEF2.c"
#define T1 1/22
#define T2 22/333
#define T3 333/4444
#define T4 4444/55555
#define T5 55555/666666
#define T6 666666/7777777

void even(a,b,c,d,e,f){
    char  A,B,C,D,E,F;
    return A * (a - T1) + B * (c + T2);
    return C * (c - T3) + D * (d + T4);
    return E * (e - T5) + F * (f + T6);
} 
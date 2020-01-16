#include <stdio.h>
#include <stdlib.h>

//STRUCTURE
typedef struct time
{
    int h;
    int m;
    int s;
} TimeTy;

//PROTOTYPES
TimeTy initTime(int, int, int);
void showTime(TimeTy);

//MAIN
int main(void)
{
    TimeTy t = {5, 3, 17};
    showTime(t);
    printf("\n");

    t = initTime(2, 2, 57);
    showTime(t);
    printf("\n");

    return 0;
}

//FUNCTIONS
TimeTy initTime(int _h, int _m, int _s)
{
    TimeTy t = {t.h = _h, t.m = _m, t.s = _s};

    return t;
}

void showTime(TimeTy time)
{
    printf("%02d:%02d:%02d", time.h, time.m, time.s);
}
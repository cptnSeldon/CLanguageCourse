#include <stdio.h>
#include <stdlib.h>

//PROTOTYPES
void forceValueToZero(int *);
void testForceValueToZero(int *);

//MAIN
int main(void)
{
    int x = 19, y = 0;

    printf("x : %d, y : %d\n", x, y);

    testForceValueToZero(&x);
    testForceValueToZero(&y);

    printf("x : %d, y : %d\n", x, y);

    return 0;
}

//FUNCTIONS
void forceValueToZero(int * value)
{
    * value = 0;
}

void testForceValueToZero(int * value)
{
    if(* value != 0) forceValueToZero(value);
    else printf("Value is already equal to 0\n");
}
#include <stdio.h>
#include <stdlib.h>

//STRUCTURE
typedef struct test
{
    int n;
    float x;
} Test;

//FUNCTIONS
void showStructure(Test pointerOnTest)
{
    printf("N : %d\nX : %.1f\n", pointerOnTest.n, pointerOnTest.x);
}

void resetStructure(Test * pointerOnTest)
{
    pointerOnTest->n = 0;
    pointerOnTest->x = 0.0;
}

//MAIN
int main(void)
{
    Test test = {1, 2.0};

    printf("Before reset :\n");
    showStructure(test);
    resetStructure(&test);
    printf("After reset :\n");
    showStructure(test);

    return 0;
}
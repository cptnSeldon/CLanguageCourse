#include <stdio.h>
#include <stdlib.h>

//-> 09.01.10

//PROTOTYPE
void swap(int *, int *);

//MAIN
int main(void)
{
    int a = 5, b = 10;

    printf("A : %2d, B : %2d\n", a, b);

    swap(&a, &b);

    printf("A : %2d, B : %2d\n", a, b);

    return 0;
}

//FUNCTION
void swap(int * valueA, int * valueB)
{
    int temp = * valueA;
    * valueA = * valueB;
    * valueB = temp;
}
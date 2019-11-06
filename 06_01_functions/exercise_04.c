#include <stdio.h>
#include <stdlib.h>

//FUNCTION - prototype
int square(int);

//MAIN
int main(void)
{
    //4.1
    int value;
    printf("A. Enter value : ");
    scanf("%d", &value);

    //for loop : we DO know how many times it will loop
    for(int i = 1; i <= value; i++)
    {
        printf("%d squared is equal to %d\n", i, square(i));
    }

    //4.2
    printf("\nB. Enter value : ");
    scanf("%d", &value);

    int i = 1;

    //while loop : we DON'T know how many times it will loop
    while(square(i) <= value)
    {
        printf("%d squared is equal to %d\n", i, square(i));
        i++;
    }

    return 0;
}

//FUNCTION - declaration
int square(int _value)
{
    return _value * _value;
}
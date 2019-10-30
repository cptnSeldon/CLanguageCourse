#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    #pragma region EXERCISE 11
    printf("EXERCISE 11 : SWAP\n");
    int variable_1 = 10, variable_2 = 5, temp;

    printf("Variable 1 = %d\nvariable 2 = %d\n", variable_1, variable_2);

    temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

    printf("Variable 1 = %d\nvariable 2 = %d\n\n", variable_1, variable_2);
    #pragma endregion EXERCISE 11

    #pragma region ADVANCED EXERCISE
    printf("EXERCISE 11 ADVANCED : SWAP\n");
    printf("Version 1 : \n");
    int a = 2, b = 3;

    printf("a = %d, b = %d\n", a, b);

    a = a + b;  // a = 5, b = 3     ->  2 + 3 = 5 (a)
    b = a - b;  // a = 5, b = 2     ->  5 - 3 = 2 (b)
    a = a - b;  // a = 3, b = 2     ->  5 - 2 = 3 (a)

    printf("a = %d, b = %d\n\n", a, b);

    a = 2, b = 3;

    printf("Version 2 : \n");

    printf("a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a = %d, b = %d\n\n", a, b);

    a = 2, b = 3;

    printf("Version 3 : \n");

    printf("a = %d, b = %d\n", a, b);

    a ^= b ^= a ^= b;

    printf("a = %d, b = %d\n\n", a, b);

    #pragma endregion ADVANCED EXERCISE

    system("PAUSE");

    return 0;
}
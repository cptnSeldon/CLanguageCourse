#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    #pragma region EXERCISE 1

    printf("\nInitials : __\nCode ? : __\n\n\nBirthdate :");
    printf(" __/__/__\nNumber : __\\__\nText : \"____\"\n");

    #pragma endregion EXERCISE 1

    printf("\n");

    #pragma region EXERCISE 2

    char a, b, c;

    printf("\n\nEnter 3 letters :\n");
    scanf("%c %c %c", &a, &b, &c);

    printf("\nCorresponding ASCII number :\n");
    printf("%c---->%d\n ", a, a);
    printf("%c---->%d\n ", b, b);
    printf("%c---->%d\n ", c, c);

    #pragma endregion EXERCISE 2

    printf("\n");

    #pragma region EXERCISE 3

    float radius, surface;

    printf("Circle radius : ");
    scanf("%f", &radius);

    surface = radius * radius * M_PI; printf("pi = %f\n", M_PI);

    printf("Circle surface = %f\n", surface);

    #pragma endregion EXERCISE 3

    system("PAUSE");

    return 0;
}
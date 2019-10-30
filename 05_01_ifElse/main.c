#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    char letter;
    int a, b, c, max;
    int temp;

    #pragma region EXERCISE 2

    printf("Enter a letter : ");
    scanf("%c", &letter);

    if(letter <= 122 && letter >= 97)
    {
        printf("lowercase");
    }
    else if(letter <= 90 && letter >= 65)
    {
        printf("UPPERCASE");
    }
    else
    {
        printf("not a letter");
    }

    #pragma endregion EXERCISE 2

    #pragma region EXERCISE 3

    printf("Enter a value for a : \n");
    scanf("%d", &a);

    printf("Enter a value for b : \n");
    scanf("%d", &b);

    if((a == 0) || (b == 0))
    {
        printf("zero");
    }
    else if((a < 0 && b < 0) || (a > 0 && b > 0))
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }

    #pragma endregion EXERCISE 3

    #pragma region EXERCISE 4

    printf("Enter an int for a : ");
    scanf("%d", &a);

    printf("Enter an int for b : ");
    scanf("%d", &b);

    printf("Enter an int for c : ");
    scanf("%d", &c);

    printf("%d %d %d\n", a, b, c);

    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if(b < c)
    {
        temp = b;
        b = c;
        c = temp;
    }
    if(a < b)
    {
        temp = a;
        a = b;
        b = temp;
    }

    printf("%d %d %d\n", a, b, c);

    #pragma endregion EXERCISE 4

    #pragma region EXERCISE 5 ADVANCED

    printf("Enter a value for a : ");
    scanf("%d", &a);

    printf("Enter a value for b : ");
    scanf("%d", &b);

    if((a == -b) || (a==0 && b==0))
    {
        printf("zero");
    }
    else if((a >= 0 && b >= 0) || (a <= 0 && b >= 0 && abs(a) <= abs(b)) || (a >= 0 && b <= 0 && abs(a) >= abs(b)))
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }

    #pragma endregion EXERCISE 5 ADVANCED

    #pragma region EXERCISE 6.1

    printf("Enter a value for a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    if (c > max) max = c;

    printf("Max value is : %d\n", max);

    #pragma endregion EXERCISE 6.1

    #pragma region EXERCISE 6.2

    printf("Enter a value for a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Max value is : ");

    if (a > b && a > c)
    {
        printf("%d\n", a);
    }
    else if (b > c)
    {
        printf("%d\n", b);
    }
    else
    {
        printf("%d\n", c);
    }

    #pragma endregion EXERCISE 6.2

    #pragma region EXERCISE 6.3

    printf("Enter a value for a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? a : b;
    max = (max > c) ? max : c;

    printf("Max value is : %d", max);

    #pragma endregion EXERCISE 6.3

    #pragma region EXERCISE 6.4

    printf("Enter a value for a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Max value is : %d\n", (a > ((b>c)?b:c)) ? a : ((b>c)?b:c));
    printf("Max value is : %d\n", (a>b && a>c) ? a : (b>c)? b : c );

    #pragma endregion EXERCISE 6.4

    #pragma region EXERCISE 7
    float _a, _b, _c, discriminant;

    printf("Enter values for a, b and c : ");
    scanf("%f %f %f", &_a, &_b, &_c);

    if(_a == 0 && _b == 0 && _c == 0)
    {
        printf("Every real is a solution.\n");
    }
    else
    {
        if (a==0 && b==0)
        {
            printf("No solution.\n");
        }
        else
        {
            discriminant = pow(_b,2) - 4.0*_a*_c;

            if (discriminant <0)
            {
                printf("No real solution.\n");
            }
            else
            {
                if (discriminant == 0)
                {
                    printf(" x = %.4f\n", -_b/(2*_a));
                }
                else
                {
                    printf(" x1 = %.4f\n", (-_b+sqrt(discriminant))/(2*_a));
                    printf(" x2 = %.4f\n", (-_b-sqrt(discriminant))/(2*_a));
                }
            }
        }
    }

    #pragma endregion EXERCISE 7

    return 0;
}
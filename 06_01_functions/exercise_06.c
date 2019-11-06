#include <stdio.h>
#include <stdlib.h>

//FUNCTION - prototype
float calculate(float, float, char);

//MAIN
int main(void)
{
    float result, a, b = 0;
    char operator = '/';

    //make sure the divisor is not equal to 0
    while (b == 0 && operator == '/')
    {
        printf("Enter expression <number operator number> : ");
        scanf("%f %c %f", &a, &operator, &b);
    };

    result = calculate(a, b, operator); //function call

    printf("Result = %.3f\n", result);

    return 0;
}

//FUNCTION - declaration
float calculate(float a, float b, char operator)
{
    switch(operator)
    {
        case '+':
            return a + b;   //break is not necessary -> we use a return instead
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
    };
}
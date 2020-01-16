#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//https://en.wikipedia.org/wiki/Numerical_integration
//https://en.wikipedia.org/wiki/Riemann_sum

#define INTERVALS 1000

//PROTOTYPE
double integrate(double (* pointerOnFunction)(double x), double a, double b);
double functionEqualsX(double x) { return x; }
double functionEqualsOne(double x) { return 1; }

//MAIN
int main(void)
{
    double a, b;

    //SIN(X)
    a = 0;
    b = 0.5;
    printf("Result of sin(x) between %.2lf and %lf is %.2lf.\n", a, b, integrate(sin, a, b));

    //EXP(X)
    a = 0;
    b = 3;
    printf("Result of exp(x) between %.2lf and %lf is %.2lf.\n", a, b, integrate(exp, a, b));

    //LOG10
    a = 1;
    b = 10;
    printf("Result of log10(x) between %.2lf and %lf is %.2lf.\n", a, b, integrate(log10, a, b));

    //F(X) = X
    a = 2;
    b = 5;
    printf("Result of f(x) = x between %.2lf and %lf is %.2lf.\n", a, b, integrate(functionEqualsX, a, b));

    //F(X) = 1
    a = 0;
    b = 4;
    printf("Result of f(x) = 1 between %.2lf and %lf is %.2lf.\n", a, b, integrate(functionEqualsOne, a, b));

    return 0;
}

//FUNCTION
double integrate(double (* pointerOnFunction)(double x), double a, double b)
{
    double x;
    double surface; //of one rectangle
    double sum = 0; //of all rectangles

    for(int i = 0; i < INTERVALS; i++)
    {
        x = a + (b-a) * ((double)i / INTERVALS);
        surface = (* pointerOnFunction)(x) * ((b-a) / INTERVALS);
        sum += surface;
    }

    return sum;
}
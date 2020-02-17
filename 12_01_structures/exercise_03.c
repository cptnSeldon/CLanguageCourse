#include <stdio.h>
#include <stdlib.h>

//STRUCTURES
typedef struct complex
{
    float real;
    float imaginary;
} Complex;

//FUNCTIONS
void initializeComplex(Complex * c)
{
    int status;

    do
    {
        printf("Initialize complex using (r, i) format : \n");
        status = scanf("(%f, %f)", &c->real, &c->imaginary);
        fflush(stdin);
    } while (status != 2);
}

void showComplex(Complex c)
{
    printf("(%.1f, %.1fi)\n", c.real, c.imaginary);
}

void sum(Complex * a, Complex * b, Complex * c)
{
    c->real = a->real + b->real;
    c->imaginary = a->imaginary + b->imaginary;
}

void difference(Complex * a, Complex * b, Complex * c)
{
    c->real = a->real - b->real;
    c->imaginary = a->imaginary - b->imaginary;
}

//MAIN
int main(void)
{

    Complex a;
    Complex b;
    Complex c;

    initializeComplex(&a);
    initializeComplex(&b);

    printf("Complex number (initial)\n");

    printf("A : ");
    showComplex(a);
    printf("B : ");
    showComplex(b);
    printf("C : ");
    showComplex(c);

    sum(&a, &b, &c);

    printf("\nComplex number (sum)\n");
    printf("A : ");
    showComplex(a);
    printf("B : ");
    showComplex(b);
    printf("B : ");
    showComplex(c);

    difference(&a, &b, &c);

    printf("\nComplex number (difference)\n");
    printf("A : ");
    showComplex(a);
    printf("B : ");
    showComplex(b);
    printf("B : ");
    showComplex(c);

    return 0;
}
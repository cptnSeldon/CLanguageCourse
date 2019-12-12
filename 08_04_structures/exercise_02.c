#include <stdio.h>
#include <stdlib.h>

//STRUCTURE
typedef struct complex
{
    int real;
    int imaginary;
} ComplexTy;

//PROTOTYPES
ComplexTy createComplex(void);
void printComplex(ComplexTy);

ComplexTy sumComplex(ComplexTy, ComplexTy);
ComplexTy differenceComplex(ComplexTy, ComplexTy);

//MAIN
int main(void)
{
    printf("Complex 1 :\n");
    ComplexTy c1 = createComplex();
    printf("Complex 2 :\n");
    ComplexTy c2 = createComplex();

    printf("Complex 1 : ");
    printComplex(c1);
    printf("Complex 2 : ");
    printComplex(c2);

    printf("Sum : ");
    printComplex(sumComplex(c1, c2));
    printf("Difference : ");
    printComplex(differenceComplex(c1, c2));

    return 0;
}

//FUNCTIONS
ComplexTy createComplex()
{
    ComplexTy c;

    printf("Enter real : ");
    scanf("%d", &c.real);

    printf("Enter imaginary : ");
    scanf("%d", &c.imaginary);

    return c;
}

void printComplex(ComplexTy c)
{
    if(c.imaginary >= 0) printf("%d + %di\n", c.real, c.imaginary);
    else printf("%d %di\n", c.real, c.imaginary);
}

ComplexTy sumComplex(ComplexTy _c1, ComplexTy _c2)
{
    ComplexTy result;
    result.real = _c1.real + _c2.real;
    result.imaginary = _c1.imaginary + _c2.imaginary;

    return result;
}

ComplexTy differenceComplex(ComplexTy _c1, ComplexTy _c2)
{
    ComplexTy result;
    result.real = _c1.real - _c2.real;
    result.imaginary = _c1.imaginary - _c2.imaginary;

    return result;
}
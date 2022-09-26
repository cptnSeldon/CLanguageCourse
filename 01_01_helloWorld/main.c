#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI           3.14159265358979323846
#endif

void printHelloWorld(void);
void printMaths(void);
void printMathsAlternative(int, int);
void doMaths(double, double);
void multiplicationTable(int, int);

int main(void)  //void -> no parameter are passed through the main function
{
    int a = 37, b = 12;   //variables

    printHelloWorld();
    printMaths();
    printMathsAlternative(a, b);
    doMaths((double)a, (double)b);
    multiplicationTable(a, b);

    return 0;   //end of program
}

void printHelloWorld(void)
{
    //EXAMPLE
    printf("hello world\n");  //we print "hello world" (const char *) in the console -> \n : new line after the printf

    //EXERISE 1
    printf("hello");
    printf(" ");
    printf("world");
    printf("\n");
}

void printMaths()
{
    //EXERISE 2a
    printf("The result of %d * %d is %d\n", 37, 12, 37 * 12);
}

void printMathsAlternative(int a, int b)
{
    //EXERISE 2b
    printf("The result of %d * %d is %d\n", a, b, a * b);
}

void doMaths(double a, double b)
{
    printf("Input a value for A: \n", a);
	//scanf(" %lf", &a);
	printf("input a value for B: \n", b);
	//scanf(" %lf", &b);

    double result;

    //a) pow
    result = pow(a, b);
    printf("\n a) %f power %f = %G \n", a, b, result);

    //b) hypothenuse
    result = sqrt((a*a)+(b*b)); //alt: sqrt(pow(a, 2) + pow(b, 2));
    printf("\n b) The hypotenuse of the right triangle is %f \n", result);

    //c) tangent of a (radians)
    /*
        sin = opp / hyp -> opp = sin * hyp
        cos = adj / hyp -> adj = cos * hyp
        tan = opp / adj -> tan = sin * hyp / cos * hyp
                        -> tan = sin / cos
    */
    result = sin(a) / cos(a);
    printf("\n b) The tangent of a is %f (radians)\n", result);
    result = sin(a * M_PI / 180) / cos(a * M_PI / 180);
    printf("\n b) The tangent of a is %f (degrees)\n", result);

    //d) round down a/b
    result = floor(a/b);
    printf("\n d) The rounded down value of a/b is %f \n", result);

    //e) round down a/b with 3 decimals
    result = floor(1000.0 * (a/b)) / 1000.0;
    printf("\n e) The rounded down value of a/b with 3 decimals is %f \n\n", result);
}

void multiplicationTable(int a, int b)
{

    int i;  //iterator

    for(i = 0; i < b + 1; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }
}
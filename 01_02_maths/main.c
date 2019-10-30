#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
    LINKS :
    - http://www.cplusplus.com/reference/cstdio/printf/
*/
int main(void)
{
    //variables
    double a;
    double b;
    double result;

    //user inputs
    printf("Enter value for A : ");
    scanf("%lf", &a);
    printf("Enter value for B : ");
    scanf("%lf", &b);

    printf("\n");

    printf("%+.0lf, %+.0lf", a, b);

    printf("\n");


    //Squared : A^2, B^2
    result = pow(a, 2);
    printf("A^2 = %lf", result);

    printf("\n");

    result = b*b;
    printf("B^2 = %lf", result);

    printf("\n");

    //A^B
    result = pow(a, b);
    printf("A^B = %lf", result);

    printf("\n");

    //Hypothenuse
    result = sqrt((a*a)+(b*b)); //sqrt(pow(a, 2) + pow(b, 2));
    printf("Hypothenuse = %lf", result);

    printf("\n");

    //Tan(A) in radians
    /*
        sin = opp / hyp -> opp = sin * hyp
        cos = adj / hyp -> adj = cos * hyp
        tan = opp / adj -> tan = sin * hyp / cos * hyp
                        -> tan = sin / cos
    */
    double a2 = a * M_PI / 180;

    result = cos(a2) / sin(a2);
    printf("Tangent of a = %lf", result);

    printf("\n");

    //Ceil : A / B
    result = floor(a/b);
    printf("Flooring a / b  = %lf", result);

    printf("\n");

    //Ceil : A / B -> x.xxx
    result = floor(a/b);
    printf("Flooring a / b = %0.3lf", result);

    printf("\n");

    //system("pause");

    //printf("Press enter to continue...\n");
    //getchar();

    return 0;
}

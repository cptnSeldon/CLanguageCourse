#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

    printf("-------------------------------\n");
    printf("Celsius to Fahrenheit converter\n");
    printf("-------------------------------\n");

    float celsius;
    float fahrenheit;

    printf("Input - degree in Celsius : ");
    scanf("%f", &celsius);

    fahrenheit = 32 + 1.8f * celsius;

    printf("%0.f in Celsius = %.1f in Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
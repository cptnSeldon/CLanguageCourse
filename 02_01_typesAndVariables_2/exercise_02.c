#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    //initial money -> fr + cts
    float money;
    //percentage    -> x / 100
    float percentage;
    //deposit time  -> years
    int years;
    //result
    float capital;

    printf("Enter money amount to deposit : \n");
    scanf("%f", &money);

    printf("Enter bank interest rate  : \n");
    scanf("%f", &percentage);

    printf("Enter deposit duration : \n");
    scanf("%d", &years);

    capital = money * pow((1 + percentage / 100), years);

    printf("After %d years, including the bank interest rate, your capital will be equal to %.2f CHF.\n", years, capital);

    return 0;
}
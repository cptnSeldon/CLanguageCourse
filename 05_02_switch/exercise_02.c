#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float amount;
    char currency;

    printf("Enter amount in CHF and currency [W] won, [$] dollar, [Y] yen, [L] pound : ");
    scanf("%f %c", &amount, &currency);

    switch (currency)
    {
        case 'W' :
            printf("%.2f in CHF is %.2f in KRW.\n", amount, (amount * 1176.44));
            break;
        case '$' :
            printf("%.2f in CHF is %.2f in USD.\n", amount, (amount * 1.01));
            break;
        case 'Y' :
            printf("%.2f in CHF is %.2f in JPY.\n", amount, (amount * 109.3));
            break;
        case 'L' :
            printf("%.2f in CHF is %.2f in GBP.\n", amount, (amount * 0.78));
            break;
        default:
            printf("Chosen currency is not available.\n");
            break;
    }

    return 0;

}
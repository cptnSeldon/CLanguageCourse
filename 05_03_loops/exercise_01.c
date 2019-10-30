#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //a -> 1 2 4 8 16 32
    printf("Ex 1.a.\n");

    int n = 1;

    while(n < 40)
    {
        printf("%d\n", n);
        n *= 2;
    }

    //b -> 0 1 2 3 4 5 6 7
    printf("\nEx 1.b.\n");

    int account = 0;

    do
    {
        printf("%d\n", account);
        ++account;
    }
    while (account % 8 != 0);

    //c -> infinite loop if n = 0, nothing happens if n != 0
    printf("\nEx 1.c.\n");

    n = 1;
    while(n == 0);

    //d -> 0 1 2 3 4 5 6 7 8 9 ... 999
    printf("\n\nEx 1.d.\n");

    int x;

    for(x = 0; x < 1000; ++x)
    {
        printf("%d ", x);
    }

    //e -> 100 200 400 800 1600 3200 6400
    printf("\n\nEx 1.e.\n");

    float money;

    for (money = 100; money < 10000; money *= 2.0)
    {
        printf("Fortune = %f\n", money);
    }

    return 0;
}
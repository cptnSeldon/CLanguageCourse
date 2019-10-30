#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int loop, sum = 1, i, value;

    do  //do.. while loop is executed at least once
    {
        printf("Enter the max value for the loop : ");
        scanf("%d", &loop);
    }
    while(loop < 0);

    //for loop is used because we know how many times it will be executed
    for(i = 1; i < loop + 1; i++)
    {
        sum *= i;
    }

    printf("Factorial of %d is %d\n", loop, sum);

    return 0;
}
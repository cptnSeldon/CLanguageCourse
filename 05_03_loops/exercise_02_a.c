#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int loop, i;
    int value;
    int sum = 0, product = 1;
    float mean = 0;

    printf("Enter the max value for the loop : ");
    scanf("%d", &loop);

    //for loop is used because we know how many times it will be executed
    for(i = 0; i < loop; i++)
    {
        printf("Enter value %d : ", i + 1);
        scanf("%d", &value);

        sum += value;
        product *= value;
    }

    mean = sum / loop;

    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    printf("Mean is %.1f\n", mean);

    return 0;
}
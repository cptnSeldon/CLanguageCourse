#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 0;
    int value;
    int sum = 0, product = 1;
    float mean = 0;

    do  //we enter the loop once at least
    {
        printf("Enter value %d : ", i++ + 1);
        scanf("%d", &value);
        //fflush(stdin);  //empty buffer - keyboard input
        sum += value;
        product *= value;
    }
    while(!(value >= 1 && value <= 15));

    mean = (float)sum / i;

    printf("%d\n", i);
    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    printf("Mean is %.3f\n", mean);

    return 0;
}
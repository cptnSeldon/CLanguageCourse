#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;

    printf("Enter value for x : ");
    scanf("%d", &x);

    switch (x)
    {
        case 0:
            printf("Error, x = 0");
            break;
        default:
            printf("100/%d = %f\n", x, 100./x);
            break;
    }

    return 0;
}
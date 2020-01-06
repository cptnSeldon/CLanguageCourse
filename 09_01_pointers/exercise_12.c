#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int *p;
    p = a;

    printf("%d %d %d\n", &a[7], p, &a[7] - p);


    return 0;
}
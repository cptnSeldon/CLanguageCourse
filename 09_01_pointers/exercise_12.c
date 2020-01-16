#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    int *p;
    p = a;

    printf("a = %d\n&a[0] = %d\na + 3 = %d\n", a, &a[0], a + 3);
    printf("*a = %d\na[0] = %d\n*(a + 3) = %d\n", *a, a[0], *(a + 3));

    printf("&a[7] = %d\np = %d\n&a[7] - p = %d\n", &a[7], p, &a[7] - p);


    return 0;
}
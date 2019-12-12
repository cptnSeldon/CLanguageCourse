#include <stdio.h>
#include <stdlib.h>

#define MAX 3

//PROTOTYPES
void fillArray(int[], int);
void printArray(int[], int);
int calculateScalarProduct(int[], int[], int);

//MAIN
int main(void)
{
    int u[MAX];
    int v[MAX];
    int n = -1;

    while(n < 1)
    {
        printf("Enter array size :\n");
        scanf("%d", &n);
        fflush(stdin);
    }

    printf("Fill array 1 :\n");
    fillArray(u, n);
    printf("\nFill array 2 :\n");
    fillArray(v, n);

    printArray(u, n);
    printArray(v, n);

    printf("Scalar product : %d\n", calculateScalarProduct(u, v, n));

    return 0;
}

//FUNCTIONS
void fillArray(int array[], int until)
{
     for(int i = 0; i < until; i++)
    {
        printf("Enter value %d\n", i);
        scanf("%d", &array[i]);
        fflush(stdin);
    }
}

void printArray(int array[], int until)
{
    printf("\narray (");

    for(int i = 0; i < until - 1; i ++)
    {
        printf("%d, ", array[i]);
    }

    printf("%d)\n", array[until - 1]);
}

int calculateScalarProduct(int vectorA[], int vectorB[], int until)
{
    int scalar = 0;

    for(int i = 0; i < until; i++)
    {
        scalar += vectorA[i] * vectorB[i];
    }

    return scalar;
}

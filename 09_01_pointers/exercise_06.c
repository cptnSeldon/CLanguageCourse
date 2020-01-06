#include <stdlib.h>
#include <stdio.h>

#define SIZE 50

//PROTOTYPES
void fillArray(int *, int);
void copyArrayToArrayEnd(int *, int *, int, int);
void printArray(int *, int);

int main(void)
{
    //VARIABLES
    //arrays
    int a[SIZE + SIZE];
    int b[SIZE];
    //sizes
    int m, n;

    //Fill arrays
    printf("Enter array size for A (max %d) : ", SIZE);
    scanf("%d", &m);

    fillArray(a, m);

    printf("Enter array size for B (max %d) : ", SIZE);
    scanf("%d", &n);

    fillArray(b, n);

    //Print arrays
    printf("\nArray A : \n");
    printArray(a, m);

    printf("\nArray B : \n");
    printArray(b, n);

    //Copy array B content to array A end
    printf("\nCopy array B content to array A end : \n");
    copyArrayToArrayEnd(a, b, m, m + n);

    //Print array A
    printf("\nPrint array A : \n");
    printArray(a, m + n);

    return 0;
}

//FUNCTIONS
void fillArray(int * array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Enter integer for array[%d] : ", i);
        scanf("%d", array + i);
    }
}

void copyArrayToArrayEnd(int * arrayA, int * arrayB, int start, int end)
{
    for(int i = start, a = 0; i < end; i++, a++)
    {
        *(arrayA + i) = *(arrayB + a);
    }
}

void printArray(int * array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("array[%d] : %d\n", i, *(array + i));
    }
}
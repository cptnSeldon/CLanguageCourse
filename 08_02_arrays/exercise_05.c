#include <stdio.h>
#include <stdlib.h>

#define MAX 50

//PROTOTYPES
void fillArray(int[], int);
void printArray(int[], int);
void findMinimum(int[], int);
void findMaximum(int[], int);

//MAIN
int main(void)
{
    int array[MAX];
    int n = -1;

    while(n < 1)
    {
        printf("Enter array size (max. 50)\n");
        scanf("%d", &n);
    }

    fillArray(array, n);
    printArray(array, n);
    findMinimum(array, n);
    findMaximum(array, n);
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
    for(int i = 0; i < until; i ++)
    {
        printf("%4d ", i);
    }
    printf("\n");

    for(int i = 0; i < until; i ++)
    {
        printf("%4d ", array[i]);
    }
    printf("\n");
}

void findMinimum(int array[], int until)
{
    int minimum = array[0];
    int index = 0;

    for(int i = 1; i < until; i ++)
    {
        if(minimum > array[i])
        {
            minimum = array[i];
            index = i;
        }
    }

    printf("Minimum : %2d, index : %2d\n", minimum, index);
}

void findMaximum(int array[], int until)
{
    int maximum = array[0];
    int index = 0;

    for(int i = 1; i < until; i ++)
    {
        if(maximum < array[i])
        {
            maximum = array[i];
            index = i;
        }
    }

    printf("Maximum : %2d, index : %2d\n", maximum, index);
}
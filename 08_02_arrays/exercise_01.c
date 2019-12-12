#include<stdlib.h>
#include<stdio.h>

#define SIZE 50

//PROTOTYPES
void fillArray(int[], int);
void printArray(int[], int);
int sumArray(int[], int);

//MAIN
int main(void)
{
    int array[SIZE];

    int n = -1;

    while(n < 1)
    {
        printf("Enter array size (max. 50)\n");
        scanf("%d", &n);
        fflush(stdin);
    }

    fillArray(array, n);
    printArray(array, n);

    printf("\nSUM : \n%d\n", sumArray(array, n));

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
    printf("\nPRINT ARRAY : \n");
    for(int i = 0; i < until; i ++)
    {
        printf("%d : %d\n", i, array[i]);
    }
}

int sumArray(int array[], int until)
{
    int sum = 0;

    for(int i = 0; i < until; i ++)
    {
        sum += array[i];
    }

    return sum;
}
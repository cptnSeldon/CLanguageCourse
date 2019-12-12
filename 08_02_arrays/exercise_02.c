#include<stdio.h>
#include<stdlib.h>

#define MAX 50

//PROTOTYPES
void fillArray(int[], int);
void sortArray(int[], int);
void printArray(int[], int);

//MAIN
int main(void)
{
    int array[MAX];
    int n = -1;

    while(n < 1)
    {
        printf("Enter array size (max. 50)\n");
        scanf("%d", &n);
        fflush(stdin);
    }

    fillArray(array, n);
    sortArray(array, n);

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

void sortArray(int original[], int until)
{
    int positiveArray[50];
    int negativeArray[50];

    int p = 0, n = 0;

    for(int i = 0; i < until; i++)
    {
        if(original[i] > 0) positiveArray[p++] = original[i];
        if(original[i] < 0) negativeArray[n++] = original[i];
    }

    printArray(original, until);

    printf("POSITIVE\n");
    printArray(positiveArray, p);
    printf("NEGATIVE\n");
    printArray(negativeArray, n);
}

void printArray(int array[], int until)
{
    for(int i = 0; i < until; i ++)
    {
        printf("%d : %d\n", i, array[i]);
    }
}
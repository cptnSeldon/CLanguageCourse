#include <stdlib.h>
#include <stdio.h>
#include <time.h>

//https://www.tutorialspoint.com/c_standard_library/c_function_rand.htm
//https://www.geeksforgeeks.org/generating-random-number-range-c/

#define TYPE int
#define LOWER 32
#define UPPER 126

//PROTOTYPES
int getArraySize(int);
TYPE * allocateAddress(int);
void fillArray(TYPE *, int);
void printArray(TYPE *, int);
void deallocateAddress(TYPE **);

//MAIN
int main(void)
{
    int size;
    TYPE * array = NULL;

    size = getArraySize(size);
    printf("Size : %d\n", size);

    array = allocateAddress(size);

    printf("Size of array at address %p: %d\n", array, sizeof(array));

    fillArray(array, size);
    printArray(array, size);

    deallocateAddress(&array);

    printf("Size of array at address %p: %d\n", array, sizeof(array));

    return 0;
}

//FUNCTIONS
int getArraySize(int size)
{
    int sizeToReturn;
    printf("Choose size of data to allocate : ");
    scanf("%d", &sizeToReturn);

    return sizeToReturn;
}

TYPE * allocateAddress(int size)
{
    TYPE * address = (TYPE *) malloc(size * sizeof(TYPE));

    //to do memory allocation fails
    if(address == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    printf("Memory allocation : %d bytes...\n", size * sizeof(TYPE));

    return address;
}

void fillArray(TYPE * pointerOnArray, int size)
{
    //to do memory allocation fails
    if(pointerOnArray == NULL)
    {
        printf("Null pointer - fillArray.\n");
        exit(1);
    }

    printf("Fill array with random numbers...\n");

    srand(time(NULL));

    for(int i = 0; i < size; i++)
    {
        pointerOnArray[i] = (rand() % (UPPER - LOWER + 1)) + LOWER;
    }
}

void printArray(int * pointerOnArray, int size)
{
    //to do memory allocation fails
    if(pointerOnArray == NULL)
    {
        printf("Null pointer - printArray.\n");
        exit(1);
    }

    printf("Print array...\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", *pointerOnArray++);
    }
    printf("\n");
}

void deallocateAddress(TYPE ** pointerOnArray)
{
    free(* pointerOnArray);
    * pointerOnArray = NULL;
}
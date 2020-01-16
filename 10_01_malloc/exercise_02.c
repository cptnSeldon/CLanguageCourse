#include <stdlib.h>
#include <stdio.h>

//https://www.tutorialspoint.com/c_standard_library/c_function_rand.htm
//https://www.geeksforgeeks.org/generating-random-number-range-c/

#define TYPE int
#define LOWER 32
#define UPPER 126

//MAIN
int main(void)
{
    int size;
    TYPE * array = NULL;

    printf("Choose size of data to allocate : ");
    scanf("%d", &size);

    //memory allocation
    array = (TYPE *) malloc(size * sizeof(TYPE));

    //to do memory allocation fails
    if(array == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    //fill array with random numbers
    for(int i = 0; i < size; i++)
    {
        * (array+i) = (rand() % (UPPER - LOWER + 1)) + LOWER;
    }

    //print 1 : array
    printf("PRINT array formalism\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    //print 2 : pointer
    printf("PRINT pointer formalism\n");

    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");

    //print 3 : incremented pointer
    printf("PRINT using incremented pointer\n");

    TYPE * pointerOnArray = array;
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *pointerOnArray++);
    }
    printf("\n");

    //print 4 : byte by byte
    printf("PRINT byte by byte\n");

    char * pointerOnChar = (char *) array;
    for(int i = 0; i < size * sizeof(int); i++)
    {
        printf("%3d  / %c\n", * pointerOnChar, * pointerOnChar);
        pointerOnChar++;
    }
    printf("\n");

    //memory deallocation
    free(array);

    array = NULL;
    pointerOnArray = NULL;
    pointerOnChar = NULL;

    return 0;
}
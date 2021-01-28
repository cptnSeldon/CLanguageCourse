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
    int line, column;
    TYPE ** matrix = NULL;

    printf("Enter line size : ");
    scanf("%d", &line);

    printf("Enter column size : ");
    scanf("%d", &column);

    //memory allocation - lines
    matrix = (TYPE **) malloc(line * sizeof(TYPE *));

    //to do memory allocation fails
    if(matrix == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for(int i = 0; i < column; i++)
    {
        matrix[i] = (TYPE *) malloc(line * sizeof(TYPE));

        if(matrix[i] == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }

    //fill array with random numbers
    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < column; j++)
        {
            matrix[i][j] = (rand() % (UPPER - LOWER + 1)) + LOWER;
        }
    }

    //print 1 : array
    printf("PRINT array formalism\n");

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //print 2 : pointer
    printf("PRINT pointer formalism\n");

    for(int i = 0; i < line; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%3d ", * (* (matrix + i) + j));
        }
        printf("\n");
    }
    printf("\n");

    //memory deallocation
    for(int i = 0; i < column; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
    matrix = NULL;

    //system("pause");

    return 0;
}
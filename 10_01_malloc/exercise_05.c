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
    int a, b, c;
    TYPE *** matrix = NULL;

    printf("Enter size A : ");
    scanf("%d", &a);

    printf("Enter size B : ");
    scanf("%d", &b);

    printf("Enter size C : ");
    scanf("%d", &c);

    //memory allocation - lines
    matrix = (TYPE ***) malloc(a * sizeof(TYPE **));

    //to do memory allocation fails
    if(matrix == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for(int i = 0; i < b; i++)
    {
        matrix[i] = (TYPE **) malloc(b * sizeof(TYPE *));

        if(matrix[i] == NULL)
        {
            printf("Memory allocation failed [i].\n");
            exit(1);
        }

        for(int j = 0; j < c; j++)
        {
            matrix[i][j] = (TYPE *) malloc(c * sizeof(TYPE ));

             if(matrix[i][j] == NULL)
            {
                printf("Memory allocation failed [i][j].\n");
                exit(1);
            }
        }
    }

    //fill array with random numbers
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 0; k < c; k++)
            {
                matrix[i][j][k] = (rand() % (UPPER - LOWER + 1)) + LOWER;
            }
        }
    }

    //print 1 : array
    printf("PRINT array formalism\n");

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 0; k < c; k++)
            {
                printf("%3d\n", matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    //print 2 : pointer
    printf("PRINT pointer formalism\n");

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            for(int k = 0; k < c; k++)
            {
                printf("%3d\n", * (* (* (matrix + i) + j) + k));
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

    //memory deallocation
    for(int i = 0; i < b; i++)
    {
        for(int j = 0; j < c; j++)
        {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }

    free(matrix);
    matrix = NULL;

    //system("pause");

    return 0;
}
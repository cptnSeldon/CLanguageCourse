#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 3

//PROTOTYPES
void fillMatrix(int [M][N], int, int);
void printMatrix(int [M][N], int, int);
void calculateMatrixProduct(int[M][N], int [M][N], int [M][N], int, int, int);

//MAIN
int main(void)
{
    //VARIABLES declaration
    int matrixA[M][N] = {{1, 2, 3}, {4, 5, 6}};
    int matrixB[M][N] = {{10, 11}, {12, 13}, {14, 15}};
    int matrixC[M][N];
    int lineA = 2, columnA = 3;
    int lineB = 3, columnB = 2;

    //FILL matrices
    //fillMatrix(matrixA, lineA, columnA);
    //fillMatrix(matrixB, lineB, columnB);

    //PRODUCT of A and B :
    //A : n x m, B : m x p => A . B => n x p
    if(lineA != columnB)
    {
        printf("Couldn't compute..\n");
    }
    else
    {
        calculateMatrixProduct(matrixC, matrixA, matrixB, lineA, columnA, columnB);

        //PRINT matrices
        printMatrix(matrixA, lineA, columnA); //mA = 2, nA = 3
        printMatrix(matrixB, lineB, columnB); //mB = 3, nB = 2
        printMatrix(matrixC, lineA, columnB); //mA = 2, nB = 2
    }

    return 0;
}

//FUNCTIONS;
void fillMatrix(int matrix[M][N], int line, int column)
{
    //check if line <= M, column <= N : none can be <= 0
    for(int l = 0; l < line; l++)
    {
        for(int c = 0; c < column; c++)
        {
            printf("Enter value %2d %2d\n", l, c);
            scanf("%d", &matrix[l][c]);
            fflush(stdin);
        }
    }
}

void printMatrix(int matrix[M][N], int line, int column)
{
    for(int l = 0; l < line; l++)
    {
        for(int c = 0; c < column; c++)
        {
            printf("%3d ", matrix[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void calculateMatrixProduct(int C[M][N], int A[M][N], int B[M][N], int lineA, int columnA, int columnB)
{
    for(int l = 0; l < lineA; l++)
    {
        for(int c = 0; c < columnB; c++)
        {
            C[l][c] = 0;

            for(int i = 0; i < columnA; i++)
            {
                C[l][c] += A[l][i] * B[i][c];
            }
        }
    }
}

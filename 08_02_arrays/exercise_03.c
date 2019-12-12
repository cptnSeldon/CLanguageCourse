#include<stdlib.h>
#include<stdio.h>

#define MAX 50

//PROTOTYPES
void fillMatrix(int [MAX][MAX], int, int);
void printMatrix(int [MAX][MAX], int, int);
int sumMatrix(int [MAX][MAX], int, int);

//MAIN
int main(void)
{
    int matrix50[MAX][MAX];
    int n = -1, m = -1;

    while(n < 1 || m < 1)
    {
        printf("Enter sizes for line and column : ");
        scanf("%d %d", &n, &m);
        fflush(stdin);
    }

    fillMatrix(matrix50, n, m);
    printMatrix(matrix50, n, m);
    printf("Sum : %2d\n", sumMatrix(matrix50, n, m));

    return 0;
}

//FUNCTIONS
void fillMatrix(int matrix[MAX][MAX], int line, int column)
{
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

void printMatrix(int matrix[MAX][MAX], int line, int column)
{
    for(int l = 0; l < line; l++)
    {
        for(int c = 0; c < column; c++)
        {
            printf("[%2d][%2d] : %2d\n", l, c, matrix[l][c]);
        }
    }
}

int sumMatrix(int matrix[MAX][MAX], int line, int column)
{
    int sum = 0;

    for(int l = 0; l < line; l++)
    {
        for(int c = 0; c < column; c++)
        {
            sum += matrix[l][c];
        }
    }

    return sum;
}
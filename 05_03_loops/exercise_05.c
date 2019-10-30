#include <stdio.h>
#include <stdlib.h>

//https://stackoverflow.com/questions/32315569/how-can-i-print-multiple-character-with-one-printf/32315611
int main(void)
{
    int lineNumber = 0;

    do  //we enter the loop once at least
    {
        printf("Enter a max value between 1 and 20 : ");
        scanf("%d", &lineNumber);
    } while (!(lineNumber <= 20 && lineNumber >= 1));

    #pragma region METHOD 1

    printf("\nMethod 1\n");
    int space = lineNumber-1;
    int star = 1;

    for(int i = 0; i < lineNumber; i++)
    {
        //space
        for(int j = 0; j < space; j++)
        {
            putchar('.');
        }
        //star
        for(int j = 0; j < star; j++)
        {
            putchar('*');
        }
        //new line
        putchar('\n');

        space -= 1;
        star += 2;
    }

    #pragma endregion METHOD 1

    #pragma region METHOD 2

    printf("\nMethod 2\n");
    int n;  //formula -> 2n-1

    for(n = 1; n < lineNumber + 1; n++)
    {
        //space
        for(int i = 0; i < lineNumber-n; i++)
        {
            putchar('.');
        }
        //star
        for(int i = 0; i < 2*n-1; i++)
        {
            putchar('*');
        }
        //new line
        putchar('\n');
    }

    #pragma endregion METHOD 2

    #pragma region METHOD 3

    printf("\nMethod 3\n");

    for(int line = 0; line < lineNumber; line++)
    {
        for(int column = 0; column < 2 * lineNumber - 1; column++)
        {
            //star
            if ((column >= -line + lineNumber - 1) && (column <= line + lineNumber - 1))
            {
                putchar('*');
            }
            //space
            else
            {
                putchar('.');
            }
        }
        //new line
        putchar('\n');
    }

    #pragma endregion METHOD 3

    #pragma region LAZY METHOD

    //for loop is used because we know how many times it will be executed
    printf("\nLazy method\n");


    for(n = 1; n < lineNumber + 1; n++)
    {
        printf("%.*s", lineNumber-n, "........................................");
        printf("%.*s\n", 2*n-1, "****************************************");
    }

    #pragma endregion LAZY METHOD

    return 0;
}
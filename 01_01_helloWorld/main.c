#include <stdio.h>  //enables us to use printf function
#include <stdlib.h> //enables us to use system("PAUSE");

int main(void)  //void -> no parameter are passed through the main function
{
    #pragma region EXAMPLE
    //no variable is declared here

    printf("hello world\n");  //we print "hello world" (const char *) in the console -> \n : new line after the printf

    system("PAUSE");    //we pause the system
    #pragma endregion EXAMPLE

    #pragma region EXERCISE 1
    printf("hello");
    printf(" ");
    printf("world");
    printf("\n");

    system("PAUSE");
    #pragma endregion EXERCISE 1

    #pragma region EXERCISE 2
    //alternative 1
    printf("The result of %d * %d is %d\n", 37, 12, 37 * 12);

    //alternative 2
    int a = 37, b = 12, result = a*b;   //variables
    printf("The result of %d * %d is %d\n", a, b, result);

    system("PAUSE");
    #pragma endregion EXERCISE 2

    #pragma region ADVANCED EXERCISE
    int c = 37, d = 12;     //variables
    int i;  //iterator

    for(i = 0; i < d + 1; i++)
    {
        printf("%d * %d = %d\n", c, i, c * i);
    }

    system("PAUSE");
    #pragma endregion ADVANCED EXERCISE

    return 0;   //end of program
}
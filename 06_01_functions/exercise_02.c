#include <stdio.h>
#include <stdlib.h>

//FUNCTIONS - prototypes
void function1();       //0 return value (void), 0 parameter
void function2(int);    //0 return value (void), 1 parameter (int)
int function3(int);     //1 return value (int),  1 parameter (int)

//MAIN
int main(void)
{
    //function call
    function3(5);       //effective parameter
}

//FUNCTIONS - definition
void function1()
{
    printf("Bonjour");
}

void function2(int value)   //formal parameter
{

    for(int i = 0; i < value; i++)
    {
        function1();
    }
}

int function3(int value)    //formal parameter
{
    function2(value);   //effective parameter

    return 0;
}
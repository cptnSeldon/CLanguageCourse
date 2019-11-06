#include <stdio.h>

//1. The function has to be declared here, C doesn't like implicit declaration of functions
int function(int);

int main(void)
{
    int result, parameter = 5;

    //3. finally, the function is called in the main function
    result = function(parameter);

    //4. parameter = 5, result = 10
    printf("p = %d, n = %d\n", parameter, result);

    return 0;
}

//2. then, the function has to be written down here :
int function(int value)
{
    //value = 5, returns 10
    return 2 * value;
}
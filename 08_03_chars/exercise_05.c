#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://www.tutorialspoint.com/c_standard_library/c_function_strtol.htm
//https://www.tutorialspoint.com/c_standard_library/c_function_strtok.htm

#define SIZE 128

int main(void)
{
    char text[SIZE];
    char * token;
    char * end;
    long number;

    printf("Enter a sentence : \n");
    fgets(text, SIZE, stdin);
    fflush(stdin);

    token = strtok(text, " ");

    while(token != NULL)
    {
        printf("%s ", token);
        number = strtol(token, &end, 10);

        if(number != 0) break;

        token = strtok(NULL, " ");
    }

    if(token[0] == '+') printf("Extracted number is : +%ld\n", number);
    else printf("Extracted number is : %ld\n", number);

    return 0;
}
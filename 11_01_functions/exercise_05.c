#include <stdio.h>
#include <stdlib.h>

//https://www.tutorialspoint.com/cprogramming/c_command_line_arguments.htm
//https://www.geeksforgeeks.org/command-line-arguments-in-c-cpp/

int main(int argc, char *argv[]) //int argc, char **argv)
{
    if(argc == 1)
    {
        printf("Hello World!\n");
        return 0;
    }

    switch(argv[1][0])
    {
        case 'F':
        case 'f':
            printf("Salut tout le monde!\n");
            break;
        case 'E':
        case 'e':
            printf("Hello world!\n");
        case 'D':
        case 'd':
            printf("Gruezi mitenand!\n");
            break;
        case 'H':
        case 'h':
            printf("Hello vilag!\n");   //helló világ
            break;
        case 'R':
        case 'r':
            printf("Privjet, mir!\n");   //Привет, мир!
            break;
        default:
            printf("This language is not supported..\n");
            break;
    }

    return 0;
}
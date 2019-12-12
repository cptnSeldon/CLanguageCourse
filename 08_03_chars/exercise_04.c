#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://codescracker.com/c/program/c-program-remove-spaces-from-string.htm

#define SIZE 80

int main(void)
{
    char text[SIZE];
    int size;

    printf("Enter a sentence : \n");
    fgets(text, SIZE, stdin);
    fflush(stdin);

    size = strlen(text);

    for(int i = 0; i < size; i++)
    {
        if(text[i] == ' ')
        {
            for(int j = i; j < size; j++)
            {
                text[j] = text[j+1];
            }
            size--;
        }
    }

    printf("%s", text);

    return 0;
}
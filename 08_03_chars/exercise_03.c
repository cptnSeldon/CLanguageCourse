#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 200

//MAIN
int main(void)
{
    char text[SIZE];
    char * temporaryText;

    int size;
    char e = 'e';
    int eCount = 0;
    int j = 0;

    printf("Enter a sentence : \n");
    fgets(text, SIZE, stdin);

    //a : string length
    size = strlen(text);
    printf("Sentence length : %d\n", size);

    //c : print reverse text
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
        //b 1 : count 'e's
        if(text[i] == 'e') eCount ++;
        //d 1 : reverse text
        temporaryText[j++] = text[i];
    }
    printf("\n");

    //b 2 : count 'e's
    printf("The sentence contains %d e s.\n", eCount);

    //d : reverse text
    strcpy(text, temporaryText);

    printf(text);

    return 0;
}
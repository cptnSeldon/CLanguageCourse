#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHAR 200
#define ARRAY_SIZE 10

int main(void)
{
    char ** pointerOnSentences = NULL;

    //memory allocation
    pointerOnSentences = (char **) malloc(ARRAY_SIZE * sizeof(char *));

    if(pointerOnSentences == NULL) exit(1);

    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        pointerOnSentences[i] = (char *) malloc((MAX_CHAR + 1) * sizeof(char));
        if(pointerOnSentences == NULL) exit(2);
    }

    //write sentences
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Write a sentence of max %d characters [%d]: \n", MAX_CHAR, i);
        fgets(pointerOnSentences[i], MAX_CHAR, stdin);
        fflush(stdin);
    }

    //print sentences
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%s", pointerOnSentences[i]);
    }
    printf("\n");

    //swap sentences
    char * temp = NULL;

    for(int i = 0, j = ARRAY_SIZE - 1; i < j; i++, j--)
    {
        temp = pointerOnSentences[i];
        pointerOnSentences[i] = pointerOnSentences[ARRAY_SIZE - 1 - i];
        pointerOnSentences[ARRAY_SIZE - 1- i] = temp;
    }

    //print sentences
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%s", pointerOnSentences[i]);
    }

    //memory deallocation
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        free(pointerOnSentences[i]);
        pointerOnSentences[i] = NULL;
    }

    free(pointerOnSentences);
    pointerOnSentences = NULL;

    return 0;
}
#include <stdlib.h>
#include <stdio.h>

#define SIZE 51

//PROTOTYPE
void findLetterInSentence(char *, char);

//MAIN
int main(void)
{
    //VARIABLE
    char sentence[SIZE];
    char character;

    printf("Enter a sentence [max 50 characters] :\n");
    fgets(sentence, SIZE, stdin);

    printf("Enter a character :\n");
    scanf("%c", &character);

    findLetterInSentence(sentence, character);

    return 0;
}

//FUNCTION
void findLetterInSentence(char * sentence, char letter)
{
    int occurrence = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if(sentence[i] == letter)
        {
            occurrence++;
            printf("Letter %c found at index %d.\n", letter, i);
        }
    }

    if(occurrence == 0)
    {
        printf("This letter isn't contained in the sentence.\n");
    }
}
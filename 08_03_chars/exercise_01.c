#include <stdlib.h>
#include <stdio.h>

#define SIZE 50

int main(void)
{
    //VARIABLES
    char m1[SIZE];
    char m2[SIZE];
    char m3[SIZE];
    char m4[SIZE];
    char m5[SIZE];

    printf("Enter 5 words :\n");
    scanf("%s %s %s %s %s", m1, m2, m3, m4, m5);
    printf("%s %s %s %s %s", m5, m4, m3, m2, m1);

    return 0;
}
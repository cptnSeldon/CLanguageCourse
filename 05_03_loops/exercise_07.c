#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //dividable by 3 :          buzz
    //dividable by 5 :          fizz
    //dividable by 3 and 5 :    buzzfizz

    for(int i = 1; i < 101; i++)
    {
        if(i % 5 == 0)
        {
            printf("buzz");
        }
        if(i % 3 == 0)
        {
            printf("fizz");
        }
        if(i % 3 != 0 && i % 5 != 0)
        {
            printf("%d", i);
        }
        printf(", ");
    }

    return  0;
}
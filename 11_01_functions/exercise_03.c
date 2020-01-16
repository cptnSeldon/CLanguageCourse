#include <stdio.h>
#include <stdlib.h>

//PROTOTYPE
void resetPointer(void **);

//MAIN
int main(void)
{
    int x;
    int * pointer = &x;

    printf("Pointer : %p\n", pointer);
    resetPointer((void **) &pointer);
    printf("Pointer : %p\n", pointer); // -> NULL

    return 0;
}

//FUNCTION
void resetPointer(void ** pointer)
{
    if(* pointer != NULL) * pointer = NULL;
}
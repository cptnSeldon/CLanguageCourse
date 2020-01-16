#include <stdio.h>
#include <stdlib.h>

//https://www.tutorialspoint.com/c_standard_library/c_function_malloc.htm

#define TYPE int

int main(void)
{
    int size;
    int i = 0;
    TYPE * pointerToMemoryAdress = NULL;

    printf("Choose size of data to allocate : ");
    scanf("%d", &size);

    do
    {
        //memory allocation
        pointerToMemoryAdress = (TYPE *) malloc (size * sizeof(TYPE));

        if(pointerToMemoryAdress != NULL)
        {
            printf("Bloc number %d has been allocated.\n", i++);
        }

    } while (pointerToMemoryAdress != NULL);

    printf("Out of Memory..\n");
    system("pause");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

//PROTOTYPES
//functions
int multiplyByTwo(int x) { return 2 * x; }
int multiplyByFour(int x) { return 4 * x; }
//array content modification
void modifyArray(int * array, int size, int (* pointerOnFunction) (int x))
{
    for(int i = 0; i < size; i++)
    {
        array[i] = (*pointerOnFunction)(array[i]);
    }
}
//array content display
void showArray(char * text, int * array, int size)
{
    //print text
    printf("%40s", text);

    //show array content
    for(int i = 0; i < size; i++)
    {
        printf("%5d ", array[i]);
    }
    printf("\n");
}

//MAIN
int main(void)
{
    //array
    int array[] = {1, 2, 3, 4};
    int size = sizeof(array)/sizeof(int);

    showArray("Base array : ", array, size);

    //functions
    modifyArray(array, size, multiplyByTwo);
    showArray("F(X) = 2X : ", array, size);

    modifyArray(array, size, multiplyByFour);
    showArray("F(X) = 4X : ", array, size);

    //pointer on functions
    int (* pointerOnFunctions)(int) = multiplyByTwo;
    modifyArray(array, size, pointerOnFunctions);
    showArray("Pointer on functions F(X) = 2X : ", array, size);

    pointerOnFunctions = multiplyByFour;
    modifyArray(array, size, pointerOnFunctions);
    showArray("Pointer on functions F(X) = 4X : ", array, size);

    //array of pointers on functions
    int (* arrayPointersOnFunctions[2]) (int) = {multiplyByTwo, multiplyByFour};

    for(int i = 0; i < 2; i++)
    {
        modifyArray(array, size, arrayPointersOnFunctions[i]);
        showArray("Array of pointers on functions : ", array, size);
    }

    return 0;
}
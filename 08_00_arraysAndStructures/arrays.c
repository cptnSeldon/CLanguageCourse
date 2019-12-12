#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

//PROTOTYPES
void printIntArray(int array[SIZE], int size);
void printIntArrayPointer(int * array, int size);
void display(int * array);  //int array[]

//MAIN
int main(void)
{
    #pragma region 8.1
    //8.1 - dos and don'ts examples
    int tab[SIZE] = {1, 2, 3};
    int data[] = tab;

    //8.1 - out of limit
    printIntArray(tab, SIZE + 1);

    //8.1 - constant
    const double sinus[6] = {0.000, 0.017, 0.035, 0.052, 0.070, 0.087};

    //8.1 - sizes
    int data[100] = {1, 2, 3, 4, 5, 6, 7};
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'y'};

    printf("Size of data : %d\n", sizeof(data)); 	    // 400
    printf("Size of int : %d\n", sizeof(int));		    // 4
    printf("Size of vowels : %d\n", sizeof(vowels)); 	// 6     (6 * 1 byte)

    //8.1 - function parameters
    display(data);
    #pragma endregion 8.1

    #pragma region 8.2

    //8.2 chars
    char helloChar[6] = {'s', 'a', 'l', 'u', 't', '\0'};
    //char helloCharKO[5] = {'h', 'e', 'l', 'l', 'o', '\0'};    //-> won't compile
    char helloString[6] = "salut";
    //char helloStringKO[3] = "hello";                          //-> won't compile
    char file[10] = "test.c";

    printf(helloChar);
    printf("\n");
    printf(helloString);
    printf("\n");
    printf(file);
    printf("\n");

    //8.2 - declaration and initialization
    char filename[] = "test.c";
    char address[] = "";
    char city[12] = "Saint-Imier";
    char name[10];
    //char firstname[];                                         //-> won't compile
    //char rue[5] = "rue de la Serre 17";                       //-> won't compile

    //8.2 - Input / Output
    char fileName[16] = "test.c";
    char wordOK[] = {'H','e','l','l','o', '\0'};
    char wordKO[] = {'H','e','l','l','o'};

    printf("%s", filename);
    printf("\n");
    printf("%s", wordOK);
    printf("\n");
    printf("%s", wordKO);
    printf("\n");

    char chaine[256];
    char mini[4];
    /*
    printf("Input : \n");
    scanf("%s", chaine);
    scanf("%s", mini);

    printf("Output : \n");
    printf("%s\n", chaine);
    printf("%s\n", mini);
    */
    printf("Input : \n");
    fgets(chaine, 256, stdin);

    printf("Output : \n");
    printf("%s\n", chaine);

    //8.2 - manipulate chars

    #pragma endregion 8.2
    return 0;
}

//FUNCTIONS
void printIntArray(int array[SIZE] , int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%3d ", array[i]);
    }
    printf("\n");
}

void printIntArrayPointer(int * array, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%3d ", array[i]);
    }
    printf("\n");
}

void display(int * array)   //int * array -> size = 1, int array[] -> error, can't find size
{
    printf("Array size : %d\n", sizeof(array) / sizeof(int));

    for(int i = 0; i < sizeof(array) / sizeof(int); i++)
    {
        printf("%3d ", array[i]);
    }
    printf("\n");
}
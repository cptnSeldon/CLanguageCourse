#include <stdio.h>
#include <stdlib.h>

//FUNCTIONS - prototypes
int setInterval(int, int);
void multiplicationTable(int);

//MAIN
int main(void)
{
    int number = setInterval(-5, 10);   //function call
    multiplicationTable(number);        //function call
    //system("pause");

    return 0;
}

//FUNCTION - declaration
int setInterval(int minimum, int maximum)
{
    int value = maximum + 1;

    //while loop : we DON'T know how many times it will loop
    while(value < minimum || value > maximum)
    {
        printf("Enter value between intervals [%d, %d] : ", minimum, maximum);
        scanf("%d", &value);
        fflush(stdin);  //clear output buffer
    }
    return value;
}

void multiplicationTable(int value)
{
    //for loop : we DO know how many times it will loop
    for(int i = 0; i <= 12; i++)
    {
        printf("%2d * %2d = %3d\n", i, value, i * value);
    }
}
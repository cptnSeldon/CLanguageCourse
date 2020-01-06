#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //A
    //variables declaration
    int a, b, c;
    int * pointer;

    pointer = &a;
    * pointer = 4;
    printf("A : %d, Pointer : %d\n", a, * pointer);

    b = a + 5;
    printf("A : %d, B : %d, Pointer : %d\n", a, b, * pointer);

    pointer = &b;
    printf("A : %d, B : %d, Pointer : %d\n", a, b, * pointer);

    c = * pointer;
    printf("A : %d, B : %d, C : %d, Pointer : %d\n", a, b, c, * pointer);

    printf("\n\n");

    //B
    //variables declaration
    char _a, _b, _c;
    char * _pointer;

    _a = _b = 3;

    _pointer = &_a;
    printf("A : %d, B : %d, Pointer : %d\n", _a, _b, * _pointer);

    _c = * _pointer += 2;
    printf("A : %d, B : %d, C : %d, Pointer : %d\n", _a, _b, _c, * _pointer);

    _pointer = &_c;
    printf("A : %d, B : %d, C : %d, Pointer : %d\n", _a, _b, _c, * _pointer);

    ++(* _pointer);
    printf("A : %d, B : %d, C : %d, Pointer : %d\n", _a, _b, _c, * _pointer);



    return 0;
}
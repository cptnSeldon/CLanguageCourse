#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    #pragma region BOOLEAN
    /*
    int true = 1;
    int false = 0;

    printf("false && false \t%s", (false && false) ? "true" : "false");
    printf("\n");
    printf("false && true \t%s", (false && true) ? "true" : "false");
    printf("\n");
    printf("true && false \t%s", (true && false) ? "true" : "false");
    printf("\n");
    printf("true && true \t%s", (true && true) ? "true" : "false");
    printf("\n");

    printf("false || false \t%s", (false || false) ? "true" : "false");
    printf("\n");
    printf("false || true \t%s", (false || true) ? "true" : "false");
    printf("\n");
    printf("true || false \t%s", (true || false) ? "true" : "false");
    printf("\n");
    printf("true || true \t%s", (true || true) ? "true" : "false");
    printf("\n");
    */
    #pragma endregion BOOLEAN

    #pragma region EXERCICE 4 a
    /*
        0 && 0 = 0      0 || 0 = 0
        0 && 1 = 0      0 || 1 = 1
        1 && 0 = 0      1 || 0 = 1
        1 && 1 = 1      1 || 1 = 1
    */

   /*
    int true = 1;
    int false = 0;
    //false     -> 0 - 1
    printf("a) 3 <= 2 - 1 : \t%s", (3 <= 2 - 1) ? "true" : "false");
    printf("\n");
    //true      -> 0 + 2.5
    printf("b) 3 * (4 > 4) + 2.5 : \t%s", (3 * (4 > 4) + 2.5) ? "true" : "false");
    printf("\n");
    //true      -> 0 + 1
    printf("c) (4 == 5.1) / 2 + 1 : \t%s", ((4 == 5.1) / 2 + 1) ? "true" : "false");
    printf("\n");
    //true      -> 0 || 1
    printf("d) true && false || true : \t%s", (true && false || true) ? "true" : "false");
    printf("\n");
    //true      -> 3 + 1
    int n = 1;
    printf("e) 3 + (n > n - 1) : \t%s", (3 + (n > n - 1)) ? "true" : "false");
    printf("\n");
    //true      -> false && false || true
    printf("f) !true && false || !false : \t%s", (!true && false || !false) ? "true" : "false");
    printf("\n");
    */
    #pragma endregion EXERCICE 4 a

    //https://www.geeksforgeeks.org/program-decimal-binary-conversion/

    #pragma region EXERCISE 6 a
    //http://hextodecimal.com/index.php
    /*
    unsigned char x = 0xAA;         //1010 1010
    unsigned char mask_a = 0xC0;    //1100 0000
    unsigned char mask_b = 0xFC;    //1111 1100

    unsigned int a = x;

    printf("%X \n", x);             //1010 1010

    while(a > 0)
    {
        printf("%d ", a % 2);
        a /= 2;
    }
    printf("\n");

    //1100 0000
    a = (x |= mask_a);
    printf("%X \n", a); //1110 1010

    while(a > 0)
    {
        printf("%d ", a % 2);
        a /= 2;
    }
    printf("\n");

    //1111 1100
    a = (x &= mask_b);
    printf("%X \n", a); //1110 1000

    while(a > 0)
    {
        printf("%d ", a % 2);
        a /= 2;
    }
    printf("\n");
    */
    #pragma endregion EXERCISE 6 a

    #pragma region EXERCISE 6 b
    /*
    unsigned char x = 0xAA;                       //1010 1010

    printf("%X\n", x);

    x = ((x >> 3) & 0x07);
    printf("%X\n",  x);

    while(x > 0)
    {
        printf("%d ", x % 2);
        x /= 2;
    }
    printf("\n");
    */
    #pragma endregion EXERCISE 6 b

    #pragma region EXERCISE 6 ab
    /*
    unsigned int y = 0x03020100; // sur 32 bits
    unsigned char b0,b1,b2,b3;
    unsigned int mask = 0xFF;

    b0 = ( ( y & mask ) );
    mask <<= 8;
    b1 = ( ( y & mask ) >> 8 );
    mask <<= 8;
    b2 = ( ( y & mask ) >> 16 );
    mask <<= 8;
    b3 = ( ( y & mask ) >> 24 );

    printf("%x %x %x %x\n", b0, b1, b2, b3);
    */
    #pragma endregion EXERCISE 6 ab
/*
    unsigned char x; //= 0xAA;         //1010 1010
    unsigned char mask_a = 0xC0;    //1100 0000
    unsigned char mask_b = 0xFC;    //1111 1100

    printf("Enter value : \n");
    scanf_s("%x", &x);
    fflush(stdin);

    unsigned int a = x;

    printf("%X \n", x);             //1010 1010

    //1100 0000
    a = (x |= mask_a);
    printf("%X \n", a); //1110 1010

    //1111 1100
    a = (x &= mask_b);
    printf("%X \n", a); //1110 1000
*/
    return 0;

}
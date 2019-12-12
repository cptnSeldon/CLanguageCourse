#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define MAX(x,y) ((x)>(y)?(x):(y))

//https://ftp.gnu.org/old-gnu/Manuals/make-3.79.1/html_chapter/make_2.html

int main(void)
{
#ifdef MY_UNDEF_MACRO
    printf("Defined!\n");
#else
    printf("Undefined!\n");
#endif
    printf("PI: %lf\n", PI);
    printf("MAX: %d\n", MAX(4,5));
    system("pause");
    return 0;
}
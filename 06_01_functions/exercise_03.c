#include <stdio.h>

int n = 10, q = 2; // global variables

int fct(int);
void f(void);

int main(void)
{
    //n : local to main (0), p : local to main (5), q : global (2)
    int n = 0, p = 5;

    //n : local to main (20), p : local to main (5), q : global (2)
    n = fct(p);

    printf("A : inside main, n = %d, p = %d, q = %d\n", n, p, q);

    //n : global (10), p : local to f (20), q : global (2)
    f();

    return 0 ;
}

int fct(int p)
{
    int q;

    //n : global (10), p : local to main (5), q : local to fct (20)
    q = 2 * p + n; //q = 2 * 5 + 10

    printf("B : inside fct, n = %d, p = %d, q = %d\n", n, p, q);

    return q;
}

void f(void)
{
    //n : global (10), p : local to f (20), q : global (2)
    int p = q * n; //p = 2 * 10

    printf("C : inside f, n = %d, p = %d, q = %d\n", n, p, q);
}
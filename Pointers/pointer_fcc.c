#include <stdio.h>

int main()
{
    int x = 5;

    int *p = &x;
    *p = 6;

    int **q = &p;

    int ***r = &q;

    printf("%d\n", x);

    printf("%d\n", *p);
    printf("%p\n", p);

    printf("%p\n", *q);

}
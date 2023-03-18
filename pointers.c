#include<stdio.h>

int main()
{
    int* p, a = 10;
    p = &a;

    int** q;
    q = &p;

    printf("%d\n", *p);
    printf("%p\n", p);
    printf("%p\n", q);
    printf("%d\n", **q);


    return 0;
}
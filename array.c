#include<stdio.h>

//__________Name of an array contains the memory address of the first element

int main()
{
    int x;
    printf("%ld\n", sizeof(x));

    int a[5] = {1};
    printf("%p\n\n", a); // this is why array is called as internal pointer variable
    printf("%p\n\n", &a);
    printf("%p\n\n", &a[0]);
    printf("0[a] address %p\n\n", &0[a]);
    printf("0[a] value %d\n\n", 0[a]);
    //printf("%p\n\n", a + a);  gives error as address + address gives error.


    for(int i = 0; i<5; i++)
        printf("%d\n", a[i]);
    
    return 0;
}
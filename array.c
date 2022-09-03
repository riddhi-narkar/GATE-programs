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


    for(int i = 0; i<5; i++)
        printf("%d\n", a[i]);
    
    return 0;
}
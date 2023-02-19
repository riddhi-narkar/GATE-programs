#include<stdio.h>

int main()
{
    for(int i = 0; i<10; i+=2)
        for(int j = 0; j<i; j+=2)
            printf("i = %d, j = %d\n", i, j);
    return 0;
}
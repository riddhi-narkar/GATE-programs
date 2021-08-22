// #include<stdio.h>

// int main()
// {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
//     printf("%d", a[2][3]);
// }

#include<stdio.h>

int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);

    for(int i = 0; i < 5; i++)
    
    return 0;
}
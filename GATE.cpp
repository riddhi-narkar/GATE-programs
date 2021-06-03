// GATE CODE

// 1)

// #include<stdio.h>
// int main()
// {
//     int x = 2;
//     int a[5];
//     a[x] = x = --x;
//     printf("%d %d %d", x, a[1], a[2]);
//     return 0;
    
// }

// 2) 

#include<stdio.h>
using namespace std;

int main()
{
    int x = 5, y = -1;
    x = ++x == 6;
    +y;
    printf("%d %d", x, y);
    return 0;
}

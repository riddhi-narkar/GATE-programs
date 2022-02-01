// GATE CODE

//_______________________________________________________________________________________________________
// 1) 

#include<stdio.h>

int main()
{
    int x = 2;
    int a[5];
    a[x] = x = --x;
    printf("%d %d %d", x, a[1], a[2]);
    return 0;
    
}

// here a[2] gives 0, that depends on compiler.

//_______________________________________________________________________________________________________
// 2) 

// #include<stdio.h>

// int main()
// {
//     int x = 5, y = -1;
//     x = ++x == 6;
//     +y;
//     printf("%d %d", x, y);
//     return 0;
// }

//_______________________________________________________________________________________________________
// 3)

// #include<stdio.h>

// int main()
// {
//     int a[5] = {5, 1, 15, 20, 25};
//     int i, j, m;
//     i = ++a[1];   // i gets 2, a[1] changes to 2
//     j = a[1]++;   // j gets 2, a[i] changes to 3
//     m = a[i++];   // m gets 15, i changes to 3
//     printf("%d, %d, %d", i, j, m);  // 3, 2, 15

//     for(int i = 0; i < 5; i++)
//         printf("\n%d", a[i]);   // 5, 3, 15, 20, 25
    
//     return 0;
// }
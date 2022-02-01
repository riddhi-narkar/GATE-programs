#include<stdio.h>
 
int main()
{
    int arr[2][3][2];
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            for(int k = 0; k < 2; k++)
                printf("%d, %d, %d = %p\n", i, j, k, &arr[i][j][k]);

    printf("%p, %p, %p, %p\n", arr[1], arr[0], arr[1][0], arr[0][0]);
    printf("%ld, %ld", arr[1]-arr[0], arr[1][0]-arr[0][0]);
    //(if you will subtract the starting address of the second )

    // int arr2[2][2];
    // printf("\n%ld", arr[1][0]-arr[0][1]);
 
    return 0;
}
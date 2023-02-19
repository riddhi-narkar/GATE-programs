#include<stdio.h>

int main()
{
    int a[][3] = {1, 2, 3, 4, 5, 6};
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
            printf("%d ", a[i][j]);
        printf("\n");    
    }

    int(*ptr)[3] = a;
    printf("\n%d %d\n", (*ptr)[1], (*ptr)[2]);
    ++ptr;
    printf("%d %d\n", (*ptr)[1], (*ptr)[2]);
    return 0;
}
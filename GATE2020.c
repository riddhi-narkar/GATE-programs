#include<stdio.h>
int main(){
    int a[4][5] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10}, 
                    {11, 12, 13, 14, 15}, 
                    {16, 17, 18, 19, 20}};
    
    printf("%d\n", *(*(a+**a+2)+3));
    printf("*(*a+**a++) = %d\n", *(*a+(**a)++));
                                                   
    // a++ = use and change (use == increment by 1)
    // a-- = use and change (use == decrement by 1)
    // ++a = change and use (use == increment by 1)
    // --a = change and use (use == decrement by 1)

    // prefix and postfix increment decrement operator has no effect when they are standalone

    // for(exp1; exp2; exp3)
    

    int x = 2, b = 3, c = 1;

    for(b*c; b--; x+c);

    return 0;
}
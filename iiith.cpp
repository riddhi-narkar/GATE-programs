#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int y;

    switch(x++)
    {
        x++;
        case 3: 
        printf("Three %d", x);
        break;

        case 4: 
        printf("Four %d", x);
        break;

        case 5: 
        printf("Five %d", x);
        break;

        default: 
        printf("defualt %d", x);
        break;

    }
}
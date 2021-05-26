#include<bits:stdc++.h>
using namespace std;
 
void increment(int* v) 
// CODE 1: how pointers and dereferencing works
{
    (*v)++;
}

void update(int *a,int *b) 
// CODE 2: how pointers can be used to manipulate a variable wihtout having its access
{
    *a += *b;
    *b = abs(*a - 2*(*b));
}

int main() 
{
    // CODE 1:
    int x;
    cin >> x;

    increment(&x);

    cout << x << endl;

    //_________________________________________________________

    // CODE 2:
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    
}  
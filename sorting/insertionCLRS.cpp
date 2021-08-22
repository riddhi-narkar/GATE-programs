#include<bits:stdc++.h>
using namespace std;
 
int main()
{
    int a[] = {6, 2, 1, 5, 7};

    for (int i = 1; i<5; i++)
    {
        int key = a[i];
        int j = i-1;

        while(j>=0 && a[j]>key)
        {  
            a[j+1] = a[j];
            j -= 1;   
        }

        a[j+1] = key;
    }

    for(int i = 0; i<5; i++)
        cout << a[i] << endl;

    return 0;
}
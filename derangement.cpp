#include <bits_stdc++.h> //comment line 1 and removed the comment the next line if are getting errors for line 1
//#include <bits/stdc++.h>
using namespace std;

int derangements = 0, flag = 0;
vector <string> all_derangements;

// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.

void permute(string a, int l, int r, string original)
{
	// Base case
	if (l == r)
    {
        for(int i = 0; i < original.size(); i++)
            if(a[i] == original[i])
                flag = 1;
            
        if(!flag)
        {
            int flag2 = 1;
            for(int k = 0; k < all_derangements.size(); k++)
                if(all_derangements[k] == a)
                    flag2 = 0;
                
            
            if(flag2)
            {
                all_derangements.push_back(a);
                cout << a << endl;
                derangements++;
            }
        }
        flag = 0;
    }

	else
	{
		// Permutations made
		for (int i = l; i <= r; i++)
		{
			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permute(a, l+1, r, original);

			//backtrack
			swap(a[l], a[i]);
		}
	}
}

// Driver Code
int main()
{
    string original, modified;

    cout << "\nEnter string:\n";
    cin >> original;
    modified = original;

    cout << "\nThe string's derangements are: \n";
	permute(original, 0, original.size() - 1, original);
	
    cout << "\nTotal derangements " << derangements << endl << endl;
    return 0;
}
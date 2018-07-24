//Subsequence
//(1), (2), (3), (4), (1,2), (1,3),(1,4), (2,3), (2,4), (3,4), (1,2,3), (1,2,4), (1,3,4), (2,3,4), (1,2,3,4)
//(2n-1) non-empty sub-sequences
//Every subarray is a subsequence. More specifically, Subsequence is a generalization of substring.
//Complexity: O(n * 2^n)

#include<bits/stdc++.h>
using namespace std;

void printSubsequences(int arr[], int n)
{
    unsigned int opsize = pow(2, n);

    for (int counter = 1; counter < opsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if (counter & (1<<j))
                cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "All Non-empty Subsequences\n";
    printSubsequences(arr, n);
    return 0;
}

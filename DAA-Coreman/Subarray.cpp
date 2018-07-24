//Subarray/Substring
//[1, 2, 3, 4]
//(1), (2), (3), (4), (1,2), (2,3), (3,4), (1,2,3), (2,3,4) and (1,2,3,4)
//n*(n+1)/2 non-empty subarrays/subsrings.
//Complexity: O(n^3)

#include<bits/stdc++.h>
using namespace std;

void subArray(int arr[], int n)
{
    for (int i=0; i <n; i++)
    {
        for (int j=i; j<n; j++)
        {
            for (int k=i; k<=j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    subArray(arr, n);
    return 0;
}

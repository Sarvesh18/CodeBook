//Permutations with duplicates allowed in lexicographically sorted order irrespective of input string
//n! permutation
//ABC
//ABC ACB BAC BCA CBA CAB

#include <bits/stdc++.h>
using namespace std;

void permute(string str)
{
    // Sort in lexicographically ascennding order
    sort(str.begin(), str.end());

    do {
       cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}

int main()
{
    string str = "NITIN";
    permute(str);
    return 0;
}

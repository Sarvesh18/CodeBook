//Naive Pattern Searching

#include<iostream>
#include<string.h>
using namespace std;
void search(char *pat, char *txt)
{
    int M=strlen(pat);
    int N=strlen(txt);
    for(int i=0;i<=N-M;)
    {
        int j;
        for(j=0;j<M;j++)
            if(txt[i+j]!=pat[j])
                break;
        if(j==M)
        {
            cout<<i<<endl;
        //}/*
            i=i+M;
        }
        else if(j==0)
            i=i+1;
        else
            i=i+j;
        //*/i++;
    }
}
int main()
{
    //char txt[]="AABAACAADAABAAABAA";
    //char pat[]="AABA";
    //search(pat, txt);
    char txt[]="ABCEABCDABCEABCD";
    char pat[]="ABCD";
    search(pat, txt);
    return 0;
}

#include<iostream>
#include<string>
int sz = 0;
char dfa[50];
int pos = 0;
int beg[50];
using namespace std;
void check (string str)
{
        string s="";
        for(int i=0;i<=sz;i++)
        {
            s=s+dfa[i];
        }
        str=str+']';
        if(s.find(str)== string::npos)
        {

            pos++;
            beg[pos]=sz+1;
            for(int i=0;i<str.length();i++)
            {
                sz++;
                dfa[sz]=str[i];
            }
        }
}
int main() {
    int ip,s;
    char input[50],state[50];
    int arr[50][50];

    cout<<"Enter No. of Inputs:";
    cin>>ip;
    for(int i=0;i<ip;i++)
        cin>>input[i];

    cout<<"Enter No. of States:";
    cin>>s;
    for(int i=0;i<s;i++)
        cin>>state[i];


    int flag,k=0;
    char ch,nfa[50];

    for(int i=0;i<ip;i++)
    {
        cout<<"\t";
        cout<<input[i];
        cout<<"\t";
    }
    cout<<endl;

    for(int i=0;i<s;i++)
    {
        cout<<state[i]<<"\t";
        for(int j=0;j<ip;j++)
        {
            flag=1;
            arr[i][j]=k;
            while(flag==1)
            {
                cin>>ch;
                if(ch=='}')
                {
                    flag=0;
                    nfa[k]='}';
                    k++;
                }
                else if (ch=='{' || ch==',')
                {

                }
                else
                {
                    nfa[k]=ch;
                    k++;
                }
            }
        }
        cout<<endl;
    }

    for(int i=0;i<ip;i++)
    {
        cout<<"\t";
        cout<<input[i];
        cout<<"\t";
    }
    cout<<endl;

    string str;
    int a;

    beg[pos]=0;
    dfa[sz]=state[sz];
    sz++;
    dfa[sz]=']';

    cout<<'['<<dfa[0]<<']'<<"\t";

    for(int i=0;i<ip;i++)
    {
        a=arr[0][i];
        str = "";
        while(nfa[a]!='}')
        {
            str=str+nfa[a];
            a++;
        }
        cout<<"["<<str<<"]\t\t";
        check(str);
    }
    cout<<"\n"<<endl;


    for(int i=1;i<=pos;i++)
    {
        cout<<'[';
        a=beg[i];
        while(dfa[a]!=']')
        {
            cout<<dfa[a];
            a++;
        }
        cout<<"]\t";

        for(int j=0;j<ip;j++)
        {
            a=beg[i];
            str = "";
            while(dfa[a]!=']')
            {
                int x;
                for(x=0;x<s;x++)
                {
                    if(dfa[a]==state[x])
                    {
                        break;
                    }
                }
                int z=arr[x][j];
                while(nfa[z]!='}')
                {
                    if(str.find(nfa[z])==string::npos)
                    {
                        str=str+nfa[z];
                    }
                    z++;
                }
                a++;
            }
            cout<<"["<<str<<"]\t\t";
            check(str);
        }
        cout<<"\n"<<endl;
    }
}

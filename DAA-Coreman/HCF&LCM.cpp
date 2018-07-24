//Euclidean Algorithm
//Greatest Common Divisor or Highest Common Factor
//Least Common Multiple LCM
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if(a==0||b==0)
        return 0;
    if(a==b)
    {
        cout<<"HCF "<<a<<endl;
        return a;
    }
    if(a>b)
        return gcd(a-b,b);
    return  gcd(a,b-a);
}
int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a=15, b=20;
    cout<<"LCM "<<lcm(a,b)<<endl;
    return 0;
}

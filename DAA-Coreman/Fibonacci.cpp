//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144,...
//Fibonacci Series using Recursion
#include<iostream>
using namespace std;
/*
int fib(int n)
{
  int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
*/
/*
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
*/
int fib(int n)
{
  /* Declare an array to store Fibonacci numbers. */
  int f[n+1];
  int i;
  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;
  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series and store it */
      f[i] = f[i-1] + f[i-2];
  }
  return f[n];
}
int main ()
{
  int n = 9;
  cout<<fib(n);
  return 0;
}

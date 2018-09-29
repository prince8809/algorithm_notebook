
//Fibonacci Series using Dynamic Programming
#include<bits/stdc++.h>
#include<stdio.h>
#define lli long long int

lli comp=0;
lli fib(lli n)
{
  /* Declare an array to store Fibonacci numbers. */
  lli f[n+2];   // 1 extra to handle case, n = 0
  lli i;

  /* 0th and 1st number of the series are 0 and 1*/
  f[0] = 0;
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      comp++;
      /* Add the previous 2 numbers in the series
         and store it */
      f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}

int main ()
{
  lli n = 50;
  std::cout<<fib(n-1);
  std::cout<<" "<<comp;
  getchar();
  return 0;
}

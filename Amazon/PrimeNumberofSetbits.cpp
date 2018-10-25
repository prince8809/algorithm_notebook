/*https://practice.geeksforgeeks.org/problems/prime-number-of-set-bits/0*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isprime(int no)
{
    if(no<=1)
        return false;
    for(int i=2;i<=sqrt(no);i++)
    {
        if(no%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int l,r;
         cin>>l>>r;
         int count=0;
         for(int i=l;i<=r;i++)
         {
         bitset<1000> sa(i);
       //  cout<<i<< " "<<sa.count()<< " ";
         if(isprime(sa.count()))
         count++;
//	cout<<isprime(2);
     }
     cout<<count<<endl;
     }
	return 0;
}
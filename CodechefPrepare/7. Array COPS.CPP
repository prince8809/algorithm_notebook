#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
    int arr[101]={0};
     int n,x,y;
     cin>>n>>x>>y;
     while(n--)
     {
         int a;
         cin>>a;
         arr[a]=-1;
         /*if cop visit set it to -1 */
         for(int i=0;i<=x*y;i++)
         {
             if(a+i<=100)
             arr[a+i]=-1;
             if(a-i>=1)
             arr[a-i]=-1;
             }
    }

     int co=0;
     for(int i=1;i<=100;i++)
     {
         if(arr[i]==0)
           co++;
     }
     cout<<co<<endl;;
    }
}

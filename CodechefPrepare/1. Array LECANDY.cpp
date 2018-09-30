#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli k,c;
        cin>>k>>c;
        lli sum=0;
        while(k--)
         {
             lli temp;
             cin>>temp;
             sum+=temp;
         }
         if(sum<=c)
            cout<<"Yes\n";
         else
            cout<<"No\n";
    }
    return 0;
}

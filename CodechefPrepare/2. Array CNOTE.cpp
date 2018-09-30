#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli x,y,k,n;
        cin>>x>>y>>k>>n;
        lli needed=x-y;
        bool flag;
        if(needed<=0)
            flag=true;
        else
            flag=false;
       while(n--)
       {
           lli pages,cost;
           cin>>pages>>cost;
          if(pages+y>=x&&cost<=k)
            flag=true;
       }
        if(flag==false)
            cout<<"UnluckyChef\n";
        else
            cout<<"LuckyChef\n";
    }
    return 0;
}


#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        lli arr[n];
        lli mini=LONG_MAX;
        for(lli i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<mini)
                mini=arr[i];
        }
        lli ans=0;
        for(lli i=0;i<n;i++)
        {
            ans+=arr[i]-mini;
        }
        cout<<ans<<endl;

    }
}



#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,k;
        cin>>n>>k;
        lli arr[n];
        int c=0;
        for(lli i=0;i<n;i++)
        {
            cin>>arr[i];
            if((arr[i]+k)%7==0)
                c++;
        }
        cout<<c<<endl;

    }
}


#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string sub1="",sub2="";
        ll n=s.length();
        bool even=false;
        if(n%2==0)even=true;
        for(ll i=0;i<n;i++)
        {
            if(even)
           {
              if(i<n/2)
                sub1+=s[i];
            else if(i>=n/2)
                sub2+=s[i];
           }
           else
           {

               if(i<n/2)
                sub1+=s[i];
            else if(i>n/2)
                sub2+=s[i];
           }
        }
        sort(sub1.begin(),sub1.end());
        sort(sub2.begin(),sub2.end());
        if(sub1==sub2)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

}

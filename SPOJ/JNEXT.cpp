#include<bits/stdc++.h>
using namespace std;
char s[1000000];
#define ll long long int
int nextpermutation(char y[],ll n)
{
    ll i,j;
    for(i=n-1;i>=1;i--)
    {
        if(y[i]>y[i-1])
        {
            break;
        }
    }
    if(i==0)
       {
            //cout<<"-1\n";
            return -1;
            //return a;
       }
    i--;
    for(j=n-1;j>=i+1;j--)
    {
        if(y[j]>y[i])
            break;
    }
    swap(y[i],y[j]);
    sort(y+i+1,y+n);
    return 0;
}
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        int k;
        cin>>k;
        s[i]=char(k+'0');
    }
    int x=nextpermutation(s,n);
    if(x==0)for(ll i=0;i<n;i++){cout<<s[i];}
    else
        cout<<-1;
    cout<<endl;
  }
}

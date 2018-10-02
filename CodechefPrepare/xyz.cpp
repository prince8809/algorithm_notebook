#include<bits/stdc++.h>
using namespace std;
char s[1000000];
#define ll long long int
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    ll n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        s[i]=char(k+'0');
      //  cout<<s[i];
    }
    for(i=n-1;i>=1;i--)
    {
        if(s[i]>s[i-1])
        {
            break;
        }
    }
    if(i==0)
       {
            cout<<"-1\n";
            continue;
       }
    i--;
    // cout<<i<<endl;
    for(j=n-1;j>=i+1;j--)
    {
        if(s[j]>s[i])
            break;
    }
    swap(s[i],s[j]);
    sort(s+i+1,s+n);
   for(i=0;i<n;i++)
    {
      cout<<s[i];
    }
    cout<<endl;
  }
}

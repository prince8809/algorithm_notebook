#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool sorted(string s)
{
    string s2=s;
    sort(s2.rbegin(),s2.rend());
    if(s==s2)
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
while(t--)
{
    int ny;
    cin>>ny;
   string s="";
   for(int i=0;i<ny;i++)
   {
       int nt;cin>>nt;
       //cout<<nt<<" ";
       s[i]=char(nt+48);
       cout<<char(nt+48)<<" ";
   }
   cout<<endl;
   for(int i=0;i<ny;i++)
   {
       cout<<s[i];
   }
   cout<<endl;
   int n=ny;
   string subs="";
   int in;
   for(int i=n-1;i>=0;i--)
   {
       subs+=s[i];

       string demo=subs;
       reverse(demo.begin(),demo.end());
       //cout<<demo<<endl;
       if(!sorted(demo))
        {
            subs=demo;
            //cout<<subs;
             in=i;
            break;
        }

   }
  // cout<<subs;
   int ni=subs.length();
   char temp=subs[ni-1];
   subs[ni-1]=subs[0];
   subs[0]=temp;

   for(int i=0;i<in;i++)
   {
       cout<<s[i];
   }
   cout<<subs;
}
}

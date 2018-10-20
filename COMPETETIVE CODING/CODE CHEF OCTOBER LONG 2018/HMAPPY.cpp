#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool comp(pair<ll,ll> c,pair<ll,ll> d)
{
    bool g=c.second<d.second?1:0;
    return g;
}
int main()
{
 ll n,m,req=0;
 cin>>n;
 cin>>m;
 pair<ll,ll> a[n];
 for(int i=0;i<n;i++)
 {
     ll te;
     cin>>te;
     a[i].first=te;
     req=req+a[i].first;
 }
 for(int i=0;i<n;i++)
 {
     ll te;
     cin>>te;
     a[i].second=te;
     a[i].second=a[i].first*te;
 }
 sort(a,a+n,comp);
 ll ki=0;
 ll kj=1;
 if(req<m||req==m)
 {
     cout<<0;
     cout<<"\n";
 }
 else if(m==ki)
 {
     cout<<a[n-1].second;
     cout<<"\n";
 }
 else if(n==kj)
 {
     cout<<(a[0].second-(a[0].first*m));
     cout<<"\n";
 }
 else
 {
     int min=0;
     ll low=a[0].second;
     ll high=a[n-1].second;
     ll mid,sum=0,ans;
     while(1)
     {
         mid=(low+high)/2;
         ans=ki;
         sum=ki;
         for(int i=ki;i<n;i++)
         {
             ll koi=a[i].first;
             ll koj=a[i].second;
             if(koj<mid)
             {
                 sum+=koi;
             }
             else
             {
                 if(mid%(koj/koi)==0)
                 {
                     ans++;
                 }
                 sum+=(mid/(koj/koi));
             }
         }
         ll qok=req-sum;
         sum=qok;
         if(ans==0)
         {
             if(sum>=m+1)
                 low=mid+1;
             else
                high=mid-1;
         }
         else
         {
             if(m>sum-1&&m<(sum+ans))
             {
                 cout<<mid;
                 cout<<endl;
                 break;

             }
             else if(sum>m)
             {

                 low=mid+1;
             }
             else
             {

                 high=mid-1;
             }
         }

         }

             }
         }



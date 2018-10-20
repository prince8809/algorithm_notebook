#include <bits/stdc++.h>
typedef long long int ll;
#define c 1000000007
using namespace std;
ll modIterative(ll xa,ll xb,ll xx)
{
    bool xy= xb == 0;
    bool yz=xb%2 ==0;
    ll qq=xb/2;
	if(xy)
		return 1;
	if(yz)
		return modIterative((xa*xa)%c,qq,0);
	else
		return ((xa%c)*(modIterative((xa*xa)%c,qq,0)))%c;
}
ll binomial_btr(ll n, int r,ll pw)
{

    bool xy=r == 0;
	if(xy)
		return 1;
	ll num = 1;
	for(int j = 2; j <r+1; j++)
        {
            ll qi=n-j+1;
		num = (num*qi)%c;
		num = (num*modIterative(j-1, c-2,0))%c;
	    }
	return num;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
        {
		ll n;
		ll k;
		cin>>n>>k;
		n+=1;
       bool ky=k==0;
       bool kj=k > n;
		if(ky) {
			cout<<"1"<<endl;
			continue;
		}
		if(kj) {
			cout<<"0"<<endl;
			continue;
		}
		ll sum = 0;
		ll b1,b2,x,p,val;
		for(int i = 0; i <= k-1; i++) {
                ll ji=n-k+1,jj=i+1+1;
                ll jk=k-1+1;
			 b1 = binomial_btr(ji, jj,0);
			 b2 = binomial_btr(jk, i+1,0);
			 x = ((b1*b2))%c;
			 p = modIterative(2, i+1,0);
			val = ((x*p))%c;
			sum = ((sum+val))%c;
		}
		cout<<sum<<endl;
	}
	return 0;
}

    #include<iostream>
    #include<stdio.h>
    #include<math.h>
    using namespace std;
    #define ll long long int
    ll arr[1000001]={0};
    bool isdecimal(double a)
    {
        ll b=a;
        if((a-b)!=0)
            return 1;
        return 0;
    }
    void calculateppo(ll h,ll x1,ll y1,ll r1,ll x2,ll y2,ll r2)
    {
        if(r1<r2)
        {
            swap(r1,r2);
            swap(x1,x2);
            swap(y1,y2);
        }
        ll min;
        ll max;
        bool a=x2==x1;
        bool b=y2==y1;
        if(a&&b)
        {
            min=r1-r2;
            max=r1+r2;
        }
        else
        {
            double xdif=x1-x2;
            double ydif=y1-y2;
            double d=sqrt((xdif*xdif)+(ydif*ydif));
            if(d>=(r1+r2))
            {
                min=d-r1-r2;
                max=r1+r2+d;
                bool kj=isdecimal(d);
                if(kj==true)
                {
                    min=min+1;
                }
            }
            else if(r1>=(d+r2))
            {
                min=r1-r2-d;
                max=r1+d+r2;
                bool ki=isdecimal(d);
                if(ki==true)
                {
                    min=min+1;
                }
            }
            else
            {
                min=0;
                max=d+r1+r2;
            }
        }
            arr[min]+=1;;
            arr[max+1]-=1;
    }
    int main()
    {
        ll n,q;
        cin>>n;
        cin>>q;
        ll a[n];
        ll b[n];
        ll r[n];
        for(ll i=0;i<=n-1;i++)
        {
            cin>>a[i]>>b[i]>>r[i];
        }
        ll iii=4;
        int kr=n-1;
        for(ll i=0;i<=n-2;i++){
                for(ll j=i+1;j<=kr;j++){
                        ll kkr=4;
                        ll a1=a[i];
                        ll a2=b[i];
                        ll a3=r[i];
                        ll a4=a[j];
                        ll a5=b[j];
                        ll a6=r[j];
                         calculateppo(0,a1,a2,a3,a4,a5,a6),kkr=6;

        }
        }
        for(ll i=1;i<1000001;i++)
        {
            arr[i]+=arr[i-1];
        }
        while(q--)
        {
            ll l;cin>>l;
            cout<<arr[l]<<endl;
        }
    }

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
        int a[8]={0};//frequency array
        bool ansi=true;
        bool anst=true;
        for(lli i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]<=0||arr[i]>=8)
            {
                ansi=false;
            }
            else
                a[arr[i]]++;
        }

        /* for checking that each element is atleast ince present */
        for(int i=1;i<8;i++){
            if(a[i]<1)
                anst=false;
        }
        bool flag=false;
        for(lli i=0;i<((n/2)+1);i++)
        {
            if(arr[i]==arr[n-i-1])
                flag=true;
              else
                {
                flag=false;
                break;
                }
        }

        if((flag==true&&ansi==true)&&(flag==true&&anst==true))
             cout<<"yes\n";
        else
             cout<<"no\n";
    }
    return 0;
}



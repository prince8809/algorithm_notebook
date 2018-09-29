#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli comp=0;
lli fibonacci(lli n)
{
    comp++;
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    lli n;
    cin>>n;
    cout<<fibonacci(n);
    //cout<<fibarray[3];
    cout<<"\ncomplexity "<<comp<<endl;
    return 0;
}

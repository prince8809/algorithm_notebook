#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli fibarray[100000]={0};
lli comp=0;
lli fibonacci(lli n)
{
    comp++;
    if(n==1)
       return 0;
    if(fibarray[n]!=0)
        return fibarray[n];
    else
        fibarray[n]=fibonacci(n-1)+fibonacci(n-2);
    return fibonacci(n-1)+fibonacci(n-2);

}

int main()
{
    fibarray[1]=0;
    fibarray[2]=1;
    lli n;
    cin>>n;
    cout<<fibonacci(n);
    cout<<"\ncomplexity "<<comp<<endl;
    //cout<<fibarray[3];
    return 0;
}

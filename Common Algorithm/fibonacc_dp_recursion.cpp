#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli fibarray[100000]={0};
lli comp=0;
lli fibonacci(lli n)
{

    if(n==1)
       return 0;
    else if(n==2)
        return 1;
    else if(fibarray[n]!=0)
        return fibarray[n];
    else
    {
        comp++;
        fibarray[n]=fibonacci(n-1)+fibonacci(n-2);
        return fibarray[n];
    }

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

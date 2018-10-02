#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli gcd(lli a, lli b)
{
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
lli lcm(lli a, lli b)
{
    return (a*b)/gcd(a, b);
}
int main()
{

    cout<<lcm(36,102)<<endl;;
    cout<<gcd(36,102);
}

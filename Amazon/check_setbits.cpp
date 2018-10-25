/* https://practice.geeksforgeeks.org/problems/check-set-bits/0 */

#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int countset=0;
    int counttotal=0;
    while(n>0)
    {
       counttotal++;
       if(n&1)
       {
           countset++;
       }
        n=n>>1;
    }
    if(countset==counttotal)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
	return 0;
}
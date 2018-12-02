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
    if(((n+1)&n)==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
	return 0;
}
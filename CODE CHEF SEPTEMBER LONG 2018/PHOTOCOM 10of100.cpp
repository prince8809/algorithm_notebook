#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a, long long int b)
{
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
long long int tc;
cin>>tc;
while(tc--)
{
long long int a_row,a_col;
cin>>a_row>>a_col;
string a;
cin>>a;
long long int b_row,b_col;
cin>>b_row>>b_col;
string b;
cin>>b;
long long int mat1[a_row][a_col],mat2[b_row][b_col];
/*matrix 1 and 2 formation */
long long int a_c=0;
for(long long int i=0;i<a_row;i++){for(long long int j=0;j<a_col;j++){mat1[i][j]=a[a_c]-'0';a_c++;}}
long long int b_c=0;
for(long long int i=0;i<b_row;i++){for(long long int j=0;j<b_col;j++){mat2[i][j]=b[b_c]-'0';b_c++;}}
/*                        */
/*  input checking formation */
/*
for(long long int i=0;i<a_row;i++){for(long long int j=0;j<a_col;j++){cout<<mat1[i][j]<<" ";}cout<<endl;}cout<<endl;
for(long long int i=0;i<b_row;i++){for(long long int j=0;j<b_col;j++){cout<<mat2[i][j]<<" ";}cout<<endl;}cout<<endl;
*/
long long int new_row=lcm(a_row,b_row);
long long int new_col=lcm(a_col,b_col);
long long int x_factor1=new_row/a_row;
long long int y_factor1=new_col/a_col;
long long int x_factor2=new_row/b_row;
long long int y_factor2=new_col/b_col;
long long int ans=0;
for(long long int i=0;i<new_row;i++)
{
for(long long int j=0;j<new_col;j++)
{
if(mat1[i/x_factor1][j/y_factor1]==mat2[i/x_factor2][j/y_factor2])
    ans++;
}
}
cout<<ans<<endl;
}
return 0;
}

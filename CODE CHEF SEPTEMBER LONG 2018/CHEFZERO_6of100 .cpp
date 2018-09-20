#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int m;
    long long int k;

    long long int to;
    cin>>n>>m>>k;
    long long int tempi=k;
  //  for(long int i=1;i<=n*m;i++)
   //    cin>>to;
   int x[n][m];
  int t=0;
    for(int i=1;i<=n;i++)
    {
        t++;
        for(int j=1;j<=m;j++)
        {
         int mij=i>j?j:i;
        // int mix=5-i+1>5-j+1?5-j+1:5-i+1;
        // int d=mij>mix?mix:mij;
        if(k==1)
            cout<<"1 ";
        if(k-mij+1>=1)
         cout<<k-mij+1<<" ";
         else
            cout<<1<<" ";
           //x[i][j]=t;
          // cout<<t<<" ";
        }
        cout<<endl;

    }
    return 0;
}

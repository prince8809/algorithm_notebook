#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
void prchef()
{
    cout<<"Chefirnemo\n";
}
void prpof()
{
    cout<<"Pofik\n";
}
void checker(int n,int m,int x,int y)
{
int over=0;
 if(n==1&&m==1){ prchef();over=1;}
if(n==2&&m==2){ prchef();over=1;}
int flag1=0;
int flag=0;
if(over==0)
{
if((n-1)%x==0){flag=1;}
if((m-1)%y==0){flag1=1;}
if((flag1==flag)&&flag1==1){prchef();}
else
{
    flag=0;flag1=0;
   if((n-2)>=0&&(n-2)%x==0){flag=1;}
   if((m-2)>=0&&(m-2)%y==0){flag1=1;}
   if((flag1==flag)&&flag1==1){   prchef();}
else
    prpof();
}
}
}
int main()
{
int s;
cin>>s;
while(s--)
{
   int n,m,x,y;
   cin>>n>>m>>x>>y;
   checker(n,m,x,y);
}
return 0;
}



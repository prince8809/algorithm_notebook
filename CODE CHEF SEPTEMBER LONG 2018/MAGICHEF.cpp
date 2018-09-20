#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int tell_pos(int ni,int xi,int sai)
{
    int current_posi=xi;
    while(sai--)
    {
        int a;
        int b;
        cin>>a>>b;
        if(a==current_posi){current_posi=b;}
        else if(b==current_posi){current_posi=a;}
    }
    return current_posi;
}
int main()
{
int tc;
cin>>tc;
while(tc--)
{
    int no,xo,so;
    cin>>no;
    cin>>xo;
    cin>>so;
    cout<<tell_pos(no,xo,so)<<endl;
}
return 0;
}


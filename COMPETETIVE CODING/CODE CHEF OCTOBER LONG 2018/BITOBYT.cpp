#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ll t;
cin>>t;
while(t--)
{
   ll time;
   cin>>time;
   time=time-1;
   ll var=0;
   ll bit=pow(2,(time/26)),nibble=0,byte=0;
   ll rem=time%26;
   //cout<<rem;

   if(time<26)
   {
       bit=0,nibble=0,byte=0;
       if(time>=0&&time<2)
        bit=1;
       if(time>=2&&time<10)
        nibble=1;
       if(time>=10&&time<26)
        byte=1;
        cout<<bit<<" "<<nibble<<" "<<byte<<endl;
       // cout<<"invoked inner";
   }
   else
   {
  ll newb;
   if(rem>=2&&rem<10)
    nibble++;
   if(rem>=10&&rem<26)
    byte++;
    if((nibble>0||byte>0)&&bit!=1)
        newb=0;
        else
            newb=bit;
   cout<<newb<<" "<<nibble*bit<<" "<<byte*bit<<endl;
   }

}
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void leftrotate(string &s, int d)
{
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
void rightrotate(string &s, int d)
{
   leftrotate(s, s.length()-d);
}

int main()
{
   int n;
   cin>>n;
   string min_probab="";
   string max_probab="";
   for(int i=1;i<=n;i++)
   {
       if(i!=n)
       min_probab+=to_string(i)+" ";
       else
        min_probab+=to_string(i);
   }
if(n<=9)
rightrotate(min_probab,1);
if(n>=10)
rightrotate(min_probab,2);

   int y=n/2;
   string a1="",a2="";
   for(int i=1;i<=y;i++)
   {
       //if(i!=y)
       a1+=to_string(i)+" ";
      // else
       // a1+=to_string(i);
   }
   for(int i=y+1;i<=n;i++)
   {
       if(i!=n)
       a2+=to_string(i)+" ";
       else
        a2+=to_string(i);
   }
   leftrotate(a1,1);
   leftrotate(a2,1);
   max_probab=a1+a2;
  // cout<<max_probab<<endl;
   //cout<<min_probab<<endl;
   for(int i=0;i<max_probab.size();i++){
        if(n<10)
        {
            if(i==max_probab.size()-1)
                cout<<" ";
        }
        else
        {
            if(i==max_probab.size()-1)
                cout<<" ";

        }
        if(i!=0)
        cout<<max_probab[i];

   }
   cout<<endl;
   for(int i=0;i<min_probab.size();i++){
      if(n<10)
      {
          if(i==1)
            cout<<" ";
      }
      else
      {
          if(i==2)
            cout<<" ";
      }
        cout<<min_probab[i];
        }
   cout<<endl;
   /*for(int i=0;i<max_probab.size();i++){

        cout<<min_probab[i]<<" ";
   }
   cout<<endl;*/
}




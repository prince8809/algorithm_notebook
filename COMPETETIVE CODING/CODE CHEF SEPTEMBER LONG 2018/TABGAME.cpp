#include<bits/stdc++.h>
using namespace std;
int ret(char c){return c-'0';}
int main( )
  {
    long int btop;
    long int tc;
    cin>>tc;
    for(long int tck=0;tck<tc;tck++)
    {
        btop=2;
        string n,m;
        cin>>m>>n;
        int m_len=m.size(),n_len=n.size();
        if(n_len>1&&m_len>1){btop=3;}
        long int axx[btop][m_len+1],axy[n_len+1][btop];
        axx[0][0]=-1;
        axy[0][0]=-1;
        long int max;
        max=(n_len>=m_len)?n_len:m_len;
        for(long int i=1;i<=max;i++)
        {
                if(i<=m_len)
                    {
                        axx[0][i]=ret(m[i-1]);
                }
        if(i<=n_len)
            {
                axy[i][0]=ret(n[i-1]);
        }
        }
        long int xa=axy[1][0];
        long int xb=axx[0][1];
         axx[1][0]=xa;
         axy[0][1]=xb;
       for(int i=1;i<=m_len;i++)
       {
           if(i==1)
           axx[1][i]=(axx[0][i]==1&&axx[1][i-1]==1)?1:0;
           else
           axx[1][i]=(axx[1][i-1]==0&&axx[0][i]==1)?1:0;
       }
       for(int i=1;i<=n_len;i++)
       {
           if(i==1)
           axy[1][1]=(axy[0][1]==1&&axy[1][0]==1)?1:0;
           else
           axy[i][1]=(axy[i-1][1]==0&&axy[i][0]==1)?1:0;
       }
       if(btop>3||btop==3)
       {
           long int ya=axy[2][0];
           long int yb=axy[2][1];
           axx[2][0]=ya;
           axx[2][1]=yb;
         for(long int i=2;i<=m_len;i++)
         {
                 axx[2][i]=(axx[2][i-1]==0&&axx[1][i]==0)?1:0;
         }
         long int za=axx[0][2];
         long int zb=axx[1][2];
           axy[0][2]=za;
           axy[1][2]=zb;
           for(long int i=2;i<=n_len;i++)
           {
                   axy[i][2]=(axy[i-1][2]==0&&axy[i][1]==0)?1:0;
           }
       }
       long int qno;
       cin>>qno;
       string rt="";
       int x[qno];
       int y[qno];
       for(long int ko=0;ko<qno;ko++)
       {
          long int x_ini,y_ini;
          cin>>x_ini;
          cin>>y_ini;
          x[ko]=x_ini;
          y[ko]=y_ini;
       }
       for(int i=0;i<qno;i++)
        {
        long int x_ini=x[i];
        long int y_ini=y[i];

          long int diff=x_ini-y_ini,result;
          if((y_ini<2||y_ini==2)||(x_ini<2||x_ini==2))
              result=(x_ini<y_ini)?axx[x_ini][y_ini]:axy[x_ini][y_ini];
          else
              result=(y_ini>=x_ini)?axx[2][2-diff]:axy[2+diff][2];

              rt=(result==0)?rt+"1":rt+"0";

        }
           cout<<rt<<endl;
       }
       }




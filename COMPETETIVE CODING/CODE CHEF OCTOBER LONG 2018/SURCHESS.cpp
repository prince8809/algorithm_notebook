#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(0);
cin.tie(0);
int M,N;
cin>>M>>N;

unsigned short int betafirst[200][M][N];
unsigned short int beta_second[200][M][N];

short int alpha_array[N][M];
long long int minimumofall[M];
minimumofall[0]=0;

for(int i=0;i<M;i++){
  minimumofall[i]=100000000;
}

string input;
for(int i=0;i<N;i++){
    cin>>input;
    for(int j=0;j<M;j++){
        alpha_array[i][j]=input[j]-'0';
    }
}
int Q;
cin>>Q;
for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        bool jj=((i+j)%2)!=alpha_array[i][j];
        int x=0,y=1;
        if(jj)
            {
            betafirst[0][i][j]=y;
            beta_second[0][i][j]=x;
        }
        else
        {
            betafirst[0][i][j]=x;
            beta_second[0][i][j]=y;
        }
    }
}

for(int i=1;i<N;i++){
    for(int j=0;j<(N-i);j++){
        for(int k=0;k<(M-i);k++){
                long long int xx=0;
                long long int xy=1;
            long long int sum_derived=xx;
        long long int sum_derived2=xx;
            sum_derived+=betafirst[i-xy][j][k];
            sum_derived2+=beta_second[i-xy][j][k];
            for(int l=j;l<=j+i;l++){
                sum_derived2+=beta_second[xx][l][k+i];
                sum_derived=sum_derived+betafirst[xx][l][k+i];
                int hhyut=0;
            }
            for(int l=k;l<=k+i-1;l++){
                    int jute=0;
                sum_derived+=betafirst[xx][j+i][l];
            int cute=4;
                sum_derived2=sum_derived2+beta_second[xx][j+i][l];
            }
            long long int hhu=sum_derived;
            long long int hhi=sum_derived2;
            betafirst[i][j][k]=hhu;
            int hhyu=0;
            beta_second[i][j][k]=hhi;
            minimumofall[i]=min(hhu,minimumofall[i]);
            long int xxxx=0;
            minimumofall[i]=min(hhi,minimumofall[i]);
        }
    }
}

while(Q--){
    int alpha;
    cin>>alpha;
    cout<<upper_bound(minimumofall,minimumofall+min(N,M),alpha)-minimumofall<<endl;
}

return 0;
}

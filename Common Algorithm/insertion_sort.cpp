#include<bits/stdc++.h>
using namespace std;
#define fori(x,n) for(int i=x;i<n;i++)
void insertionsort(int arr[],int n)
{
    for(int i=1;i<10;i++)
    {
        int temp;
        temp=arr[i];
        int x;
        for(int j=i;j>=0;j--)
        {
            if(temp<=arr[j])
             {
              arr[j]=arr[j-1];
              x=j;
             }
        }
        arr[x]=temp;
    }
}
int main()
{
    int arr[10]={2,3,1,4,5,7,6,8,10,9};
    insertionsort(arr,10);
    fori(0,10)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

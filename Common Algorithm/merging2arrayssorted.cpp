#include<bits/stdc++.h>
using namespace std;
void merge1(int left[],int right[],int m,int n)
{
    int i=0;
    int j=0;
    int k=0;
    int c[m+n];
    while(i<m&&j<n)
    {
        if(left[i]<=right[j])
            c[k++]=left[i++];
        else
            c[k++]=right[j++];
    }
    while(i<m)
    {
        c[k++]=left[i++];
    }
    while(j<n)
    {
        c[k++]=right[j++];
    }
    for(int p=0;p<m+n;p++)
    {
        cout<<c[p]<<" ";
    }
}
int main()
{
    int arr[5]={10,20,30,200,300};
    int arr2[10]={10,15,20,25,30,35,40,45,50,55};
    merge1(arr,arr2,5,10);

}

#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int m,int r)
{
    int size1=m-l+1;
    int size2=r-m;
    int left[size1];
    int right[size2];
    for(int i=0;i<size1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int j=0;j<size2;j++)
    {
        right[j]=arr[j+m+1];
    }
    int i=0,j=0,k=l;
    while(i<size1&&j<size2)
    {
        if(left[i]<=right[j])
        {
            arr[k++]=left[i++];
        }
        else
            arr[k++]=right[j++];
    }
    while(i<size1)
    {
        arr[k++]=left[i++];
    }
    while(j<size2)
    {
        arr[k++]=right[j++];
    }
}
void mergesort(int arr[],int l,int r)
{
   if( l < r)
   {
    int mid= l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
    }
}
int main()
{
    int arr[10]={10,9,9,7,6,5,4,3,2,1};
    mergesort(arr,0,9);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

}

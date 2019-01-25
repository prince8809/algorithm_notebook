#include<bits/stdc++.h>
using namespace std;
void createboard(int **arr,int n)
{
   // int arr1[][]=arr;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
}
void printboard(int **arr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool issafe(int **arr,int row,int col)
{
    for(int i=0;i<col;i++)
    {
        if(arr[row][i])
        return false;
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--)
    {
        if(arr[i][j])
         return false;
    }
    for(int i=row,j=col;i<10&&j>=0;i++,j--)
    {
        if(arr[i][j])
         return false;
    }
    return true;
}
bool solveboard(int **arr,int col)
{
    if(col>=10)
        return true;

     for(int i=0;i<10;i++)
     {
         if(issafe(arr,i,col))
         {
             arr[i][col]=1;
             if(solveboard(arr,col+1))
                return true;

             arr[i][col]=0;
         }

     }
    return false;



}
int main()
{
    int **arr=new int*[10];
    for(int i=0;i<10;i++)
    {
       arr[i]=new int[10];

    }
    //int arr[10][10];
    createboard(arr,10);
    printboard(arr,10);
    cout<<endl;
    if(solveboard(arr,0))
    printboard(arr,10);

}

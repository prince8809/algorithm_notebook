import java.util.*;
import java.applet.*;
import java.io.*;
public class nqueens {
  
    public  static void createboard(int arr[][],int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=0;
            }       
        }
    }
    public  static void printboard(int arr[][],int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                System.out.print(arr[i][j]+" ");
            }
            System.out.println("");
        }
    }
    //hhhh
    ///jhhk
    public static boolean issafe(int arr[][],int row,int col,int n)
    {
        for(int i=0;i<col;i++)
        {
            if(arr[row][i]==1)
                return false;
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--)
        {
            if(arr[i][j]==1)
                return false;
        }
        for(int i=row,j=col;i<n&&j>=0;i++,j--)
        {
            if(arr[i][j]==1)
                return false;
        }
        return true;
    }
    public static boolean solve(int arr[][],int col,int n)
    {
        if(col>=n)
            return true;
        for(int i=0;i<n;i++)
        {
         if(issafe(arr,i,col,n))
         {
             arr[i][col]=1;
             if(solve(arr,col+1,n))
                 return true;
             else
             arr[i][col]=0;
         }
        }
        return false;
    }
    
   
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int n;
    n=sc.nextInt();
    System.out.println(n);    
    int arr[][]=new int[n][n];
    createboard(arr,n);
    printboard(arr,n);
    System.out.println();
    if(solve(arr,0,n))
    printboard(arr,n);
    }
    
}

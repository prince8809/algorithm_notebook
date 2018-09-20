import java.io.*;
import java.util.Scanner;
class andsubseq {
public static void main(String args[])
  {   
    Scanner sc=new Scanner(System.in);
    int tc;
    tc=sc.nextInt();
    while(tc!=0)
    {
        tc--;
        int n;
        int q;
        n=sc.nextInt();
        q=sc.nextInt();
        int arr[]=new int[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        for(int i=0;i<q;i++)
        {
            int as;
            int p;
           as=sc.nextInt();
            p=sc.nextInt();
            int newarr1[]=new int[p-as+1];
            for(int j=0;j<p-as+1;j++)
            {
                newarr1[j]=arr[as+j-1];
            }
            System.out.println(subArray(newarr1,p-as+1));
    }
    }
}
static int subArray(int arr[], int n)
    {
        int counts=0;
        for (int i=0; i <n; i++)
        {
            for (int j=i; j<n; j++)
            {
                int band=arr[i];
                for (int k=i+1; k<=j; k++)
                {
                    band=band&arr[k];
                }
                boolean case1=isSquare(Double.valueOf(band));
                if(case1==true)
                    counts++;
                }
            }  
        return counts;
    }
static boolean isSquare(double x)  
    { 
        double sr = Math.sqrt(x); 
        return ((sr - Math.floor(sr)) == 0); 
    } 
}

import java.io.*;
import java.util.*;
class warxorxx{
  public static void main(String args[])
  {     
    Scanner sc=new Scanner(System.in);  
    int tck;
    tck=sc.nextInt();
    long a[]=new long[1000008];
    for(int l=0;l<tck;l++)
    {
       for(int i=0;i<1000004;i++)
    {
        a[i]=0;
    }   
       long odd;
       long n;
       long total_noerror;
       n=sc.nextLong();
       long even=0;
       for(long i=n-1;i>=0;i--)
       {
           int j;
           j=sc.nextInt();
           a[j]=a[j]+1;
           if(j%2==0)
           {even++;   }
       }
       odd=n-even;
       long total_witherror;
       total_witherror=total_with_error(odd,even);
       long mins;
       mins=error_calculator(a);
       total_noerror=total_witherror-mins;
       System.out.println(total_noerror);
    }
}
  public static long total_with_error(long odd,long even)
  {
      long result=(odd*(odd-1)/2);
          result=result+(even*(even-1))/2;
      return result;
  }
  public static long error_calculator(long a[])
  {
      long minus=0;
      for(int i=1;i<1000004;i++)
      {
        if(1<a[i])
        minus=minus+((a[i]*(a[i]-1))/2);
      }
       
    for(int i=4;i<1000004;i+=4) 
    { 
        minus=minus+(a[i]*a[i+2]);
      minus=minus+(a[i+1]*a[i+3]);
    }
    minus=minus+(a[1]*a[3]);
    return minus;
  }
 

}
       
      
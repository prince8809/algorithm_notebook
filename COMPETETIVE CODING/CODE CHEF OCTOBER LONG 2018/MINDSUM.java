import java.math.*;
import java.io.InputStream;
import java.util.*;
import java.io.*;
class  Solution
{
    static class Reader
    {   
        public DataInputStream din;
        public byte[] buffer;
        public int bufferPointer;
        public int bytesRead;
        final public int BUFFER_SIZE = 1 << 25;
        public Reader()
        {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            int x=0;
            bufferPointer = x;
            bytesRead = x;
        }
        private void fillBuffer() throws IOException
        {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            byte x=-1;
            int y=-1;
            if (bytesRead == y)
                buffer[0] = x;
        }
        public String readLine() throws IOException 
        { 
            byte[] buf;
            buf= new byte[1280000]; // line length 
            int pp=0;
            int cnt = pp;
            int c; 
            while ((c = read()) != -1) 
            { 
                if (c == '\n') 
                {
                    break; 
                }
                
                buf[cnt] = (byte) c; 
                cnt++;
            } 
            String siu= new String(buf, 0, cnt); 
            return siu;
        } 
        public byte read() throws IOException
        {
            boolean gg=bufferPointer == bytesRead;
            if (gg)
            {
                fillBuffer();
            }
            
            return buffer[bufferPointer++];
        }
        public int nextInt() throws IOException
        {
            int piz;
            piz=0;
            int ret = piz;
            byte c;
            c= read();
            while (' '>=c)
            {
                c = read();
            }
            
            boolean neg = (c == '-');
            if (neg==true)
                c = read();
            do
            {
                ret = ret * 10 + c - '0';
            }  while ((c = read()) <= '9' && c >= '0');
 
            if (neg==true)
                return -ret;
            return ret;
        }
        public long nextLong() throws IOException 
        { 
            long py=0;
            long ret = py; 
            byte c;
            c= read(); 
            while ( ' '>=c) 
                c = read(); 
            boolean neg;
            neg= c == '-'; 
            if (neg==true) 
            {
                c = read();
            } 
            do 
            { 
                ret = ret * 10 + c - '0'; 
            }while ((c = read()) <= '9'&&c >= '0'); 
            
            if (neg==true) 
                return -ret; 
            return ret; 
        } 
    }
    static HashMap<Long, Long> map;
    static long min,minCount;
    public static void main(String[] argh) throws Exception
    {
        Reader br;
        br= new Reader();
        int t;
        t= br.nextInt();
        long n,d;
        for(int q= 0; q<t; q++){
            n= br.nextLong();
            d= br.nextLong();
            long kk=Long.MAX_VALUE;
            min=kk;
            minCount= kk;
            map= new HashMap<>();
            long ii=n;
            long jj=d;
            findMin(ii, 0, jj);
            System.out.print(min + " " + minCount);
            System.out.println();
        }
    }
    
    public static void findMin(long num, long count, long d)
    {
        long num1;
        num1= num;
        long c;
        c= 0;
        if(num1 >= 10)
        {
            c+=1;
            num1=digitSum(num1);
        }
        if(map.containsKey(num1)==false)
        {
            map.put(num1, count + c);
            if(num1<min) 
            {
                long k=num1;
                min= k;
                minCount= count;
                minCount+= c;
            }
            else if(num1==min)
            {
                if((count+c)<minCount  )
                {
             
                    minCount= count;
                    minCount=minCount+ c;
                }
            }
            findMin(num+d, count+1, d);
            findMin(num1, count+c, d);
            
            long q=num1;
            map.remove(q);
        }
    }
    
    public static long digitSum(long num)
     {
        long d,result;
        result=0;
        
        while(num>0)
        {
            d=num%10;
            result =result+ d;
            num =num/ 10;
        }
        return result;
    }
}

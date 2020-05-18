
import java.io.*;
import java.util.*;

public class Assist {
    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);
        int ans = 0, n = sc.nextInt();
        int []x = new int[101];
        for (int i = 0; i <n ; i++) {
            int a = sc.nextInt();
            x[a]++;
        }
        for (int i = 1; i < 101; i++) {
            ans+=(x[i]/2);
        }
        System.out.print(ans);
        
    }
    static class Scanner
    {
        StringTokenizer st;
        BufferedReader br;
 
        public Scanner(InputStream s){    br = new BufferedReader(new InputStreamReader(s));}
 
        public String next() throws IOException
        {
            while (st == null || !st.hasMoreTokens())
                st = new StringTokenizer(br.readLine());
            return st.nextToken();
        }
 
        public int nextInt() throws IOException {return Integer.parseInt(next());}
 
        public long nextLong() throws IOException {return Long.parseLong(next());}
 
        public String nextLine() throws IOException {return br.readLine();}
 
        public boolean ready() throws IOException {return br.ready();}
 
 
    }
}

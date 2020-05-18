import java.io.*;
import java.util.*;

public class Assist {
    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int x[] = new int[n];
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            x[i] = sc.nextInt();
        }
        
        for (int i = 0; i < n; i++) {
            
            if(i+2 < n && x[i+2] == 0){
                ans++;
                i++;
            }
            else if(i+1 < n && x[i+1]==0){
                ans++;
            }
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

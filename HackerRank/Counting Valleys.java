import java.io.*;
import java.util.*;

public class Assist {
    public static void main(String[] args) throws IOException {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = 0;
        String s = sc.nextLine();
        int numOfU = 0,numOfD = 0;
        char first;
        
        for (int i = 0; i < n; i++) {
            if(s.charAt(i) == 'D'){
                numOfD++;
            }
            else{
                numOfU++;
            }
            if(numOfD == numOfU){
                if(s.charAt(i) =='U'){
                    ans++;
                    numOfD = 0;
                    numOfU = 0;
                }
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

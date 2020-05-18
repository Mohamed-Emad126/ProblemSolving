import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {


    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] nd = scanner.nextLine().split(" ");

        int n = Integer.parseInt(nd[0]);

        int d = Integer.parseInt(nd[1]);

        int[] a = new int[n+n+1];

        String[] aItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int aItem = Integer.parseInt(aItems[i]);
            if(i<d){
                a[i+n] = aItem;
            }
            else{
                a[i] = aItem;
            }
            
            
        }

        for (int i = 0; i< n+n+1; i++) {
            if(a[i] != 0)
                bufferedWriter.write(String.valueOf(a[i]) + " ");
        }

        

        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

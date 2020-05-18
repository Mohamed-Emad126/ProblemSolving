import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static void minimumBribes(int[] fnal) {
        Vector<Integer> v = new Vector<Integer>();
        int ans = 0;
        
        for (int i = fnal.length-1; i >= 0; --i) {
            v.add(fnal[i]);
        }
        
        for (int i = fnal.length; i > 0; --i) {
            
            if( v.indexOf(i) >2) {
                System.out.println("Too chaotic");
                return;
            }
            else {
                ans += v.indexOf(i);
                v.removeElementAt( v.indexOf(i) );
            }
        }
        System.out.println(ans);

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int t = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int tItr = 0; tItr < t; tItr++) {
            int n = scanner.nextInt();
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            int[] q = new int[n];

            String[] qItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int i = 0; i < n; i++) {
                int qItem = Integer.parseInt(qItems[i]);
                q[i] = qItem;
            }

            minimumBribes(q);
        }

        scanner.close();
    }
}

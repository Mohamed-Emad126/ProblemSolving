import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static int minimumSwaps(int[] fnal) {
        Map<Integer, Integer> mp = new HashMap<Integer, Integer>();
        int ans = 0;
        
        for (int i = 0; i < fnal.length; i++) {
            mp.put(fnal[i], i);
        }
        
        for (int i = 1; i <= fnal.length; i++) {
            int temp = fnal[i-1];
            if(temp != i) {
                ans ++;
                
                fnal[mp.get(i)] = temp;
                mp.put(temp, mp.get(i));
                mp.put(i, i-1);
                
                fnal[i-1] = i;
            }
        }

        return ans;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        int[] arr = new int[n];

        String[] arrItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            int arrItem = Integer.parseInt(arrItems[i]);
            arr[i] = arrItem;
        }

        int res = minimumSwaps(arr);

        bufferedWriter.write(String.valueOf(res));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

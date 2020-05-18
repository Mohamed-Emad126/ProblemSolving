import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static String twoStrings(String s1, String s2) {
        int a1[] = new int[300];
        int a2[] = new int[300];
        for(int i=0; i<s1.length(); i++){
            a1[s1.charAt(i)]++;
        }
        for(int i=0; i<s2.length(); i++){
            a2[s2.charAt(i)]++;
        }
        for(int i=0; i<300; i++){
            if(a1[i]!=0 && a2[i]!= 0){
                return "YES";
            }
        }

        return "NO";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String s1 = scanner.nextLine();

            String s2 = scanner.nextLine();

            String result = twoStrings(s1, s2);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static int commonChild(String s1, String s2) {
        int [][] DP = new int[s1.length()+1][s2.length()+1];

        for (int i = 1; i < DP.length; i++) {
            for (int j = 1; j < DP[i].length; j++) {
                if(s1.charAt(i-1) == s2.charAt(j-1)){
                    DP[i][j] = DP[i-1][j-1] + 1;
                }
                else {
                    DP[i][j] = Math.max(DP[i][j-1] , DP[i-1][j]);
                }
            }
        }
        return DP[s1.length()][s2.length()];

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s1 = scanner.nextLine();

        String s2 = scanner.nextLine();

        int result = commonChild(s1, s2);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

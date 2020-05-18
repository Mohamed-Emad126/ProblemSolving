import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static int sherlockAndAnagrams(String s) {
        Map<String, Integer> mp = new HashMap<>();
        int ans = 0;

        for (int i = 0; i < s.length(); i++) {
            String a = "";
            for (int j = i; j <s.length() ; j++) {
                a+= s.charAt(j);
                //System.out.print(a + " ");
                char[] array = a.toCharArray();
                Arrays.sort(array);
                String sorted = new String(array);

                //System.out.println(sorted);

                if(mp.containsKey(sorted)){
                    mp.replace(sorted, mp.get(sorted) + 1);
                }
                else{
                    mp.put(sorted , 1);
                }
            }
        }
        for (Map.Entry<String, Integer> a : mp.entrySet()) {
            if(a.getValue()>1){
                ans += (a.getValue() * (a.getValue()-1)) / 2;
            }
        }
        return ans;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String s = scanner.nextLine();

            int result = sherlockAndAnagrams(s);

            bufferedWriter.write(String.valueOf(result));
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

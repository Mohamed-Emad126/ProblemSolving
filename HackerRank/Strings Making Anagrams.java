import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static int makeAnagram(String s, String s1) {
        Map<Character, Integer> mp = new HashMap<>();
        Map<Character, Integer> mp1 = new HashMap<>();
        int ans = 0;

        for (int i = 0; i < s1.length(); i++) {
            mp1.put(s1.charAt(i), mp1.getOrDefault(s1.charAt(i), 0) + 1);
        }
        for (int i = 0; i < s.length(); i++) {
            mp.put(s.charAt(i), mp.getOrDefault(s.charAt(i), 0) + 1);
        }
        //System.out.println(mp);
        //System.out.println(mp1);

        for(Map.Entry<Character, Integer> a : mp.entrySet()){
            if(!mp1.containsKey(a.getKey())){
                ans += a.getValue();
            }
            else{
                ans += (Math.max(a.getValue(), mp1.get(a.getKey()))) -
                        Math.min(a.getValue(), mp1.get(a.getKey())
                );
            }
        }
        for(Map.Entry<Character, Integer> a : mp1.entrySet()){
            if(!mp.containsKey(a.getKey())){
                ans += a.getValue();
            }
        }
        return ans;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String a = scanner.nextLine();

        String b = scanner.nextLine();

        int res = makeAnagram(a, b);

        bufferedWriter.write(String.valueOf(res));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

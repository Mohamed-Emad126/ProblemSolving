import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static String isValid(String s) {
        Hashtable<Integer, List<Character>> table = new Hashtable<>();
        Map<Character, Integer> mp = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {
            mp.put(s.charAt(i), mp.getOrDefault(s.charAt(i), 0) + 1);
        }

        for(Map.Entry<Character, Integer> a : mp.entrySet()){
            List<Character> list;
            if(table.containsKey(a.getValue())){
                list = table.get(a.getValue());
            }
            else{
                list = new ArrayList<>();
            }
            list.add(a.getKey());
            table.put(a.getValue(), list);
        }

        if(table.size() == 2){
            for(Map.Entry<Integer, List<Character>> a : table.entrySet()){
                if(a.getValue().size() == 1 && (table.containsKey(a.getKey()-1) || a.getKey()-1==0 )){
                    return "YES";
                }
            }
        }
        else if(table.size() == 1){
            return "YES";
        }
        return "NO";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String result = isValid(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

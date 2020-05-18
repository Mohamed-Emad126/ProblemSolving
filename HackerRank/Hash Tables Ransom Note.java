import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static void checkMagazine(String[] magazine, String[] note) {

        Map<String, Integer> mp1 = new HashMap<String, Integer>();
        Map<String, Integer> mp2 = new HashMap<String, Integer>();

        for (String s : note) {
            if (mp1.containsKey(s)) {
                mp1.replace(s, mp1.get(s) + 1);
            } else {
                mp1.put(s, 1);
            }
        }
        for (String s : magazine) {
            if (mp2.containsKey(s)) {
                mp2.replace(s, mp2.get(s) + 1);
            } else {
                mp2.put(s, 1);
            }
        }

        for(int i=0; i<note.length; i++){
            if(!mp2.containsKey(note[i])){
                System.out.print("No");
                return ;
            }
            else if(mp1.get(note[i])> mp2.get(note[i])){
                System.out.print("No");
                return ;
            }
        }
        System.out.print("Yes");
        return;


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        String[] mn = scanner.nextLine().split(" ");

        int m = Integer.parseInt(mn[0]);

        int n = Integer.parseInt(mn[1]);

        String[] magazine = new String[m];

        String[] magazineItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < m; i++) {
            String magazineItem = magazineItems[i];
            magazine[i] = magazineItem;
        }

        String[] note = new String[n];

        String[] noteItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < n; i++) {
            String noteItem = noteItems[i];
            note[i] = noteItem;
        }

        checkMagazine(magazine, note);

        scanner.close();
    }
}

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static String encryption(String s) {
        int cl ;
        int rw ;
        StringBuilder ss = new StringBuilder();
        List<Map.Entry<Integer, Map.Entry<Integer, Integer>>> lst = new ArrayList<>();

        for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i) != ' '){
                ss.append(s.charAt(i));
            }
        }

        rw = (int) Math.floor(Math.sqrt(ss.length()));
        cl = (int) Math.ceil(Math.sqrt(ss.length()));

        if(rw * cl < ss.length()){
            rw ++;
        }

        //System.out.println(rw + " " + cl);
        int x =0;
        for (int i = 0; i < cl * rw; i++) {
            ss.append(" ");
        }

        char[][]grid = new char[rw][cl];
        for (int i = 0; i < rw; i++) {
            for (int j = 0; j < cl; j++) {
                grid[i][j] = ss.charAt(x++);
            }
        }

        x = 0;
        String ans ="";
        for (int i = 0; i < cl; i++) {
            for (int j = 0; j < rw; j++) {
                if(grid[j][i] != ' ')
                    ans+=grid[j][i];
            }
            ans+=" ";
        }
        return ans;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String result = encryption(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

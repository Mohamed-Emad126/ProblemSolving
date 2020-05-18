import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {

    static long countTriplets(List<Long> arr, long r) {
        long ans = 0L;
        Map<Long, Long> mp = new HashMap<>();
        Map<Long, Long> mp2 = new HashMap<>();


        for(Long a : arr) {
        ans += mp.getOrDefault(a, 0L);
        if (mp2.containsKey(a)){
            mp.put(a*r, mp.getOrDefault(a*r, 0L) + mp2.get(a));
        }
        mp2.put(a*r, mp2.getOrDefault(a*r, 0L) + 1);
    }
        
    return ans;
    }

        public static void main(String[] args) throws IOException {
            BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

            String[] nr = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

            int n = Integer.parseInt(nr[0]);

            long r = Long.parseLong(nr[1]);

            List<Long> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                .map(Long::parseLong)
                .collect(toList());

            long ans = countTriplets(arr, r);

            bufferedWriter.write(String.valueOf(ans));
            bufferedWriter.newLine();

            bufferedReader.close();
            bufferedWriter.close();
        }
    }

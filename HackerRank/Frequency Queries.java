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

    static List<Integer> freqQuery(List<List<Integer>> arr) {
        Map<Integer, Hashtable<Integer, Boolean>> freq = new HashMap<>();
        Map<Integer, Integer> mp = new HashMap<>();
        ArrayList<Integer> ans = new ArrayList<>();

        for (List<Integer> i : arr){
            Hashtable<Integer, Boolean> tble = new Hashtable<>();
            Integer value = mp.getOrDefault(i.get(1), 0);
            if(i.get(0) == 1){

                if(value == 0){
                    mp.put(i.get(1), 1);
                    if(freq.containsKey(1)){
                        tble = freq.get(1);
                    }
                    tble.put(i.get(1), true);
                    freq.put(1 , tble);
                    //System.out.println(i.get(1)+ "added");
                }
                else{
                    if(freq.containsKey(value)){
                        freq.get(value).remove(i.get(1));
                    }
                    if(freq.containsKey(value+1)){
                        tble = freq.get(value + 1);
                    }
                    mp.put(i.get(1), value + 1);
                    tble.put(i.get(1), true);
                    freq.put(value + 1, tble);
                    //System.out.println(i.get(1)+ "added");
                }
            }
            else if(i.get(0) == 2){
                if(value != 0){
                    if(value == 1){
                        mp.remove(i.get(1));
                        if(freq.containsKey(value)){
                            freq.get(value).remove(i.get(1));
                            //System.out.println(i.get(1)+ "removed");
                        }
                    }
                    else{
                        if(freq.containsKey(value)){
                            freq.get(value).remove(i.get(1));
                            //System.out.println(i.get(1)+ "removed");
                        }
                        if(freq.containsKey(value-1)){
                            tble = freq.get(value - 1);
                        }
                        mp.put(i.get(1), value - 1);
                        tble.put(i.get(1), true);
                        freq.put(value - 1, tble);
                    }
                }
            }
            else{
                if(freq.containsKey(i.get(1)) && freq.get(i.get(1)).size() != 0){
                    ans.add(1);
                    //System.out.println(1);
                }
                else{
                    //System.out.println(0);
                    ans.add(0);
                }
            }

        }
        return ans;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = Integer.parseInt(bufferedReader.readLine().trim());

        List<List<Integer>> queries = new ArrayList<>();

        IntStream.range(0, q).forEach(i -> {
            try {
                queries.add(
                    Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                        .map(Integer::parseInt)
                        .collect(toList())
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        List<Integer> ans = freqQuery(queries);

        bufferedWriter.write(
            ans.stream()
                .map(Object::toString)
                .collect(joining("\n"))
            + "\n"
        );

        bufferedReader.close();
        bufferedWriter.close();
    }
}

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0; i< n ;i++){
            arr[i] = in.nextInt();
        }

        int[] fq = new int[1010];
        for (int i = 0; i < arr.length; i++) {
            fq[arr[i]]++;
        }
        System.out.println(arr.length);
        int var = arr.length;
        for (int i = 0; i < fq.length; i++) {
           if(fq[i] != 0){
               var -= fq[i];
               if(var > 0){
                   System.out.println(var);
               }
           }
        }
    }
}

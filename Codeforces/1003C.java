import java.util.*;
import java.math.*;
import java.io.*;
import java.lang.*;
public class IntenseHeat {
    public static void main(String[] args) {
        int n,k;
        double ans=-1,v,x[]=new double[5009];
        Scanner in=new Scanner(System.in);
        n=in.nextInt();k=in.nextInt();
        n++;
        for(int i=1;i<n;i++)
            x[i]=in.nextDouble();
        for(int i=2;i<n;i++)
            x[i]+=x[i-1];
        for(int i=0;i<n;i++){
            if(i+k>n-1)
                break;
            for(int j=i+k,o=0;j<n;j++,o++){
                v=(x[j]-x[i])/(k+o);
                ans=Math.max(ans, v);
            }
        }
        System.out.printf("%1.16f",ans);
    }
    
    
}

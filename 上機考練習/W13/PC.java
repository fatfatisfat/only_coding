package W13;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            int k = input.nextInt();
            int[] c = new int[n];
            long s = 0;
            for (int i=0; i<n; i++){
                c[i] = input.nextInt();
                if (c[i] >= k){
                    int num = c[i];
                    long sum = 1;
                    for (int j=0; j<k; j++) sum *= num--;
                    for (int j=1; j<=k; j++) sum /= j;
                    s += sum;
                }
            }
            long m = 1;
            int all = 0;
            for (int i=0; i<n; i++) all += c[i];
            // c (all, k)
            for (int j=0; j<k; j++) m *= all--;
            for (int j=1; j<=k; j++) m /= j;
            // System.out.println(s + "/" + m);
            while (gcd(s, m) != 1){
                long a = gcd(s, m);
                s /= a;
                m /= a;
            }
            if (s == 1 && m == 1) System.out.println(1);
            else if (s == 0) System.out.println(0);
            else System.out.println(s + "/" + m);

            
        }
        input.close();
    }
    public static long gcd(long s, long m){
        while (s != 0){
            long temp = m % s;
            m = s;
            s = temp;
        }
        // System.out.println(m);
        return m;
    }
}

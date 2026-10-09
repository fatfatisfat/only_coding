package W1;
import java.util.*;
public class PD114910 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        long f1 = 1;
        long f2 = 1;
        long sum = 0;
        for (int t=0; t<T; t++){
            long n = input.nextLong();
            if (n == 0){
                sum = 1;
                System.out.println(sum);
                continue;
            }
            for (int i=2; i<=n; i++){
                sum = f1+f2;
                f1 = f2;
                f2 = sum;
            }
            System.out.println(sum);
            f1 = 1;
            f2 = 1;
            sum = 0;
        }
    input.close();
    }
}

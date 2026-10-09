package W14;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            int[] credit = new int[t];
            int sum = 0;
            for (int k=0; k<t; k++){
                credit[k] = input.nextInt();
                sum += credit[k];
            }
            long[] dp = new long[sum+1];
            dp[0] = 1;
            int half = (sum + 1) / 2;
            for (int c : credit){
                for (int i=sum; i>=c; i--){
                    dp[i] += dp[i-c];
                }
            }
            long count = 0;
            for (int i=half; i<=sum; i++){
                count += dp[i];
            }
            System.out.println(count);
        }
        input.close();
    }
}

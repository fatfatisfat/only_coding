package W14;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int k=0; k<t; k++){
            int n = input.nextInt();
            int s = input.nextInt();
            int s_sum = s;
            int count = 0;
            for (int i=0; i<n; i++){
                int c = input.nextInt();
                s_sum -= c;
                if (s_sum < 0){
                    count ++;
                    s_sum = s - c;
                }
            }
            if (s_sum != s) count++;
            System.out.println(count);
        }
        input.close();
    }
}

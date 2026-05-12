import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int n = input.nextInt();
            int[] num = new int[n];
            for (int j=0; j<n; j++){
                int a = input.nextInt();
                num[j] = a;
            }
            
            boolean fb = num[0] == -1;
            boolean lb = num[n-1] == -1;

            for (int j=0; j<n; j++) if (num[j] == -1) num[j] = 0;
            int sum = 0;
            if (fb || lb){
                if (fb && lb) {
                    num[0] = 0;
                    num[n-1] = 0;
                } else if (fb) {
                    num[0] = num[n-1];
                } else if (lb) {
                    num[n-1] = num[0];
                }
            }
            sum = Math.abs(num[n-1] - num[0]);

            System.out.println(sum);
            for (int j=0; j<n-1; j++){
                System.out.print(num[j] + " ");
            }
            System.out.println(num[n-1]);
        }
        input.close();
    }
}
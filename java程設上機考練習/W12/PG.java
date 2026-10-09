package W12;
import java.util.*;
public class PG {
    public static void main(String aargs[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int k=0; k<t; k++){
            int n = input.nextInt();
            int[] num = new int[n];
            for (int i=0; i<n; i++) num[i] = input.nextInt();
            int count = 0;
            for (int i=0; i<n-1; i++){
                for (int j=0; j<n-i-1; j++){
                    if (num[j] > num[j+1]){
                        int temp = num[j];
                        num[j] = num[j+1];
                        num[j+1] = temp;
                        count++;
                    }
                }
            }
            System.out.println(count);
        }
        input.close();
    }
}

package W12;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            if (t == 0) break;
            int[][] arr = new int[2][t];
            int[] y = new int[t];
            for (int i=0; i<t; i++){
                arr[0][i] = input.nextInt();
                arr[1][i] = input.nextInt();
                y[i] = arr[1][i];
            }
            Arrays.sort(y);
            int mid = 0;
            if (t % 2 == 0) mid = y[t/2-1];
            else mid = y[t/2];
            int sum = 0;
            for (int i=0; i<t; i++) sum += Math.abs(arr[1][i] - mid);
            System.out.println(mid + " " + sum);
        }
        input.close();
    }
}

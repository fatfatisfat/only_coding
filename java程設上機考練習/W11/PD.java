package W11;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int k = input.nextInt();
        int d = input.nextInt();
        int[][] arr = new int[4][t];
        for (int i=0; i<t; i++){
            arr[2][i] = input.nextInt();
        }
        for (int i=0; i<t; i++){
            arr[3][i] = input.nextInt();
        }
        for (int i=0; i<t; i++){
            int even = arr[3][i] - d;
            int odd = arr[3][i] + d;
            if (even >= 0 && even < k && even % 2 == 0){
                arr[1][i] = even;
            }else if (odd >=0 && odd < k && odd % 2 != 0){
                arr[1][i] = odd;
            }
            arr[0][i] = arr[1][i] + arr[2][i];
        }

        for (int i=0; i<t-1; i++){
            System.out.print(arr[0][i] + " ");
        }
        System.out.println(arr[0][t-1]);
        input.close();
    }
}

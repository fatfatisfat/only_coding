package W13;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            int m = input.nextInt();
            int s = input.nextInt();
            if (n == 0 && m ==0 && s == 0) break;
            int[][] arr = new int [n][n];
            for (int i=0; i<n; i++){
                for (int j=0; j<n; j++){
                    arr[i][j] = input.nextInt();
                }
            }
            int t = (n - m) / s + 1;
            double[][] new_arr = new double[t][t];
            for (int i=0; i<t; i++){
                for (int j=0; j<t; j++){
                    double sum = 0;
                    for (int k=0; k<m; k++){
                        for (int l=0; l<m; l++){
                            sum += arr[s*i+k][s*j+l];
                        }
                    }
                    new_arr[i][j] = sum / (m * m);
                }
            }

            for (int i=0; i<t; i++){
                for (int j=0; j<t-1; j++){
                    System.out.printf("%.2f ", new_arr[i][j]);
                }
                System.out.printf("%.2f\n", new_arr[i][t-1]);
            }
        }
        input.close();
    }
}

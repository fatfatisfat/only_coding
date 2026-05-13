package W10;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            if (n == 0) break;
            double[][] arr = new double[n][n];
            double[][] ansarr = new double[n][n];
            int[] dx = {1,-1,0,0,1,1,-1,-1};
            int[] dy = {0,0,1,-1,1,-1,1,-1};
            for (int i=0; i<n; i++){
                for (int j=0; j<n; j++){
                    arr[i][j] = input.nextDouble();
                    ansarr[i][j] = arr[i][j];
                }
            }
            for (int i=0 ; i<n; i++){
                for (int j=0; j<n; j++){
                    if (arr[i][j] == 0){
                        double sum = 0;
                        double ww = 0;
                        for (int k=0; k<8; k++){
                            int mx = i + dx[k];
                            int my = j + dy[k];
                            int w = 1;
                            if (k<4) w = 2;
                            if (check(mx, my, n)){
                                sum += arr[mx][my] * w;
                                ww += w;
                            }
                        }
                        ansarr[i][j] = sum / ww;
                    }
                }
            }
            for (int i=0 ; i<n; i++){
                for (int j=0; j<n-1; j++){
                    System.out.printf("%.1f ", ansarr[i][j]);
                }
                System.out.printf("%.1f\n", ansarr[i][n-1]);
            }
            System.out.println();
        }
    input.close();
    }
    public static boolean check(int i, int j, int n){
        return i>=0 && i<n && j>=0 && j<n;
    }
}

package W10;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            int m = input.nextInt();
            int p = input.nextInt();
            if (n == 0 && m ==0 && p ==0) break;
            int[][] arr = new int[n][n];
            for (int i=0; i<n; i++){
                for (int j=0; j<n; j++){
                    arr[i][j] = input.nextInt();
                }
            }
            int step = (n - m) / p;
            int[][] result = new int[step][step];
            for (int i=0; i<step; i+=p){
                for (int j=0; j<step; j+=p){
                    int max = Integer.MIN_VALUE;
                    for (int k=i*p; k<i*p+m; k++){
                        for (int l=j*p; l<j*p+m; l++){
                            max = Math.max(max, arr[k][l]);
                        }
                    }
                    result[i][j] = max;
                }
            }
            for (int i=0; i<step; i++){
                for (int j=0; j<step; j++){
                    System.out.print(result[i][j]);
                }
                System.out.println(result[i][step-1]);
            }
        }
        input.close();
    }
    public static int find(){
        int max = 0;
        return max;
    }
}

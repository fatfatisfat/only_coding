package W13;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int r = input.nextInt();
            int c = input.nextInt();
            int[][] arr = new int[r][c];
            for (int i=0; i<r; i++){
                for (int j=0; j<c; j++){
                    arr[i][j] = input.nextInt();
                }
            }
            int tar = input.nextInt();
            int row = 0;
            int col = 0;
            for (int i=0; i<r; i++){
                for (int j=0; j<c; j++){
                    if (arr[i][j] == tar){
                        row = i;
                        col = j;
                    }
                }
            }
            for (int i=0; i<r; i++){
                for (int j=0; j<c; j++){
                    if (i != row && j != col) arr[i][j] = 0;
                }
            }
            for (int i=0; i<r; i++){
                for (int j=0; j<c-1; j++){
                    System.out.print(arr[i][j] + " ");
                }
                System.out.println(arr[i][c-1]);
            }
        }
        input.close();
    }
}

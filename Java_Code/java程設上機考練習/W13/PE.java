package W13;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int[] move = {-1, 1, 1, -1};
        while (input.hasNext()){
            int row = input.nextInt();
            int col = input.nextInt();
            int[][] arr = new int[row][col];
            for (int i=0; i<row; i++){
                for (int j=0; j<col; j++){
                    arr[i][j] = input.nextInt();
                }
            }
            int r = input.nextInt();
            int c = input.nextInt();
            int forward = input.nextInt();
            String step = input.next();
            boolean fall = false;
            for (char s : step.toCharArray()){
                if (s == 'R') forward++;
                else if (s == 'L') forward--;
                else if (check(r, c, row, col, forward)){
                    if (forward % 2 == 0) r += move[forward];
                    else c += move[forward];
                    if (arr[r][c] == 1){
                        System.out.println("Fall");
                        fall = true;
                        break;
                    }
                }
                forward %= 4;
                if (forward < 0) forward = 3;
            }
            // System.out.println(r + " " + c);
            if (!fall) System.out.println("Safe");
        }
        input.close();
    }
    public static boolean check(int x, int y, int r, int c, int f){
        if (f == 0) return x > 0;
        else if (f == 1) return y < c-1;
        else if (f == 2) return x < r-1;
        else return y > 0;
    }
}
package W14;
import java.util.*;
public class PF {
    public static void main(String  args[]){
        Scanner input = new Scanner(System.in);
        int[] move = {-1, 1, 1, -1};
        while (input.hasNext()){
            int row = input.nextInt();
            int col = input.nextInt();
            int count = 0;
            int[][] arr = new int[row][col];
            for (int i=0; i<row; i++){
                for (int j=0; j<col; j++){
                    arr[i][j] = input.nextInt();
                }
            }
            int r = input.nextInt();
            int c = input.nextInt();
            int f = input.nextInt();
            String step = input.next();
            for (char cc : step.toCharArray()){
                if (cc == 'R') f++;
                if (cc == 'L') f--;
                f %= 4;
                if (f < 0) f = 3;
                if (cc == 'F' && check(r, c, row, col, f, move)){
                    if (f % 2 == 0) r += move[f];
                    else c += move[f];
                    if (arr[r][c] == 1) count++;
                }
            }
            System.out.println(count);
        }
        input.close();
    }
    public static boolean check(int r, int c, int row, int col, int f, int[] move){
        if (f % 2 == 0) r += move[f];
        else c += move[f];
        return r < row && r >= 0 && c < col && c >= 0;
    }
}

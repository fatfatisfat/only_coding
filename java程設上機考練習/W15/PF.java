package W15;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int row = input.nextInt();
            int col = input.nextInt();
            int[] move = {-1, 1, 1, -1};
            int[][] arr = new int[row][col];
            for (int i=0; i<row; i++){
                for (int j=0; j<col; j++){
                    arr[i][j] = input.nextInt();
                }
            }
            int t = input.nextInt();
            for (int k=0; k<t; k++){
                int r = input.nextInt();
                int c = input.nextInt();
                int f = input.nextInt();
                String line = input.next();
                boolean fall = false;
                for (char s : line.toCharArray()){
                    if (s == 'R'){
                        f++;
                        f %= 4;
                    }else if (s == 'L'){
                        f--;
                        if (f < 0) f = 3;
                    }else if (s == 'F'){
                        if (c1(arr, row, col, r, c, f, move)){
                            if (f % 2 == 0) r += move[f];
                            else c += move[f];
                            if (arr[r][c] == 1){
                                System.out.println("Fall at (" + r + ", " + c + ")");
                                fall = true;
                                arr[r][c] = 2;
                                break;
                            }
                        }
                    }
                }
                if (!fall){
                    System.out.println("Safe at (" + r + ", " + c + ")");
                }
            }
        }
        input.close();
    }
    public static boolean c1(int[][] arr, int row, int col, int r, int c, int f, int[] move){
        if (f % 2 == 0) r += move[f];
        else c += move[f];
        return r<row && r>=0 && c<col && c>=0 && arr[r][c] != 2;
    }
}

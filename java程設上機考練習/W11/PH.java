package W11;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int k=0; k<t; k++){
            int row = input.nextInt();
            int col = input.nextInt();
            int target = input.nextInt();
            int[][] arr = new int[row][col];
            for (int i=0; i<row; i++){
                for (int j=0; j<col; j++){
                    arr[i][j] = input.nextInt();
                }
            }
            int top_row = 0;
            int bot_row = row - 1;
            int mid_row = (top_row + bot_row) / 2;
            a:
            while (true){
                for (int i=0; i<col; i++){
                    if (arr[mid_row][i] == target){
                        break a;
                    }
                }
                if (arr[mid_row][col-1] < target) top_row = mid_row + 1;
                else if (arr[mid_row][0] > target) bot_row = mid_row - 1;
                mid_row = (top_row + bot_row) / 2;
                System.out.print("false ");
            }
            System.out.println("true");
            int top = col - 1;
            int bot = 0;
            int mid = (top + bot) / 2;

            while (true){
                if (arr[mid_row][mid] == target){
                    break;
                }
                if (arr[mid_row][mid] > target) top = mid - 1;
                else bot = mid + 1;
                mid = (top + bot)/2;
                System.out.print("false ");
            }
            System.out.println("true");
            System.out.println(mid_row + " " + mid);
        }
        input.close();
    }
}

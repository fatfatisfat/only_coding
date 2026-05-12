import java.util.*;
public class CPE_P21 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int[] m1 = {1, 0, -1, 0, 1, -1, 1, -1};
        int[] m2 = {0, 1, 0, -1, 1, -1, -1, 1};
        int count = 1;
        while (input.hasNext()){
            int row = input.nextInt();
            int col = input.nextInt();
            if (row == 0 && col == 0) break;
            String[] arr = new String[row];
            for (int i=0; i<row; i++) arr[i] = input.next();
            
            // for (int i=0; i<row; i++){
            //     for (int j=0; j<col; j++){
            //         arr[i] = input.next();
            //     }
            // }
            int[][] bomb = new int[row][col];
            for (int i=0; i<row; i++){
                String s = arr[i];
                for (int j=0; j<col; j++){
                    char c = s.charAt(j);
                    if (c == '*'){ 
                        bomb[i][j] = -1;
                        for (int k=0; k<8; k++){
                            if (check(row, col, i+m1[k], j+m2[k])){
                                if (bomb[i+m1[k]][j+m2[k]] != -1) bomb[i+m1[k]][j+m2[k]]++;
                            }
                        }
                    }
                }
            }
            System.out.println("Field #" + count + ":");
            count++;
            for (int i=0; i<row; i++){
                for (int j=0; j<col-1; j++){
                    if (bomb[i][j] == -1)System.out.print("*");
                    else System.out.print(bomb[i][j]);
                }
                if (bomb[i][col-1] == -1)System.out.println("*");
                else System.out.println(bomb[i][col-1]);
            }
            System.out.println();
        }
        input.close();
    }
    public static boolean check(int r, int c, int i, int j){
        // System.out.println(i<r && i>=0 && j<c && j>=0);
        return i<r && i>=0 && j<c && j>=0;
    }
}

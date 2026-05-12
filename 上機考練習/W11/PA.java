package W11;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        int t = input.nextInt();
        int[] mi = {1, 0, -1, 0, 1, 1, -1, -1};
        int[] mj = {0, 1, 0, -1, 1, -1, 1, -1};
        for (int a=0; a<t; a++){
            int n = input.nextInt();
            int m = input.nextInt();
            String d1 = input.next();
            String d2 = input.next();
            String[] arr = new String[n];
            for (int i=0; i<n; i++){
                arr[i] = input.next();
            }
            String[][] ans = new String[n][m];
            for (int i=0; i<n; i++){
                for (int j=0; j<m; j++){
                    ans[i][j] = "0";
                }
            }
            for (int i=0; i<n; i++){
                for (int j=0; j<m; j++){
                    char c = arr[i].charAt(j);
                    if (c == 'V'){
                        ans[i][j] = "V";
                        for (int k=0; k<8; k++){
                            String days = d1;
                            if (k >= 4) days = d2;
                            if (check(i + mi[k], j + mj[k], n, m)){
                                if (ans[i + mi[k]][j + mj[k]].equals(d1) || ans[i + mi[k]][j + mj[k]].equals("V")) continue;
                                ans[i + mi[k]][j + mj[k]] = days;
                            }
                        }
                    }
                }
            }
            System.out.println("Airplane #" + (a+1) + ":");
            for (int i=0; i<n; i++){
                for (int j=0; j<m-1; j++){
                    System.out.print(ans[i][j]);
                }
                System.out.println(ans[i][m-1]);
            }
        }
        input.close();
    }
    public static boolean check(int i, int j, int row, int col){
        return i>=0 && i<row && j>=0 && j<col;
    }
}

package W13;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int len = input.nextInt();
            int[][] a = new int[2][len];
            String s = input.next();
            String ans = input.next();
            for (int j=0; j<s.length(); j++){
                char c = s.charAt(j);
                a[0][c - 'A'] = 1;
            }
            for (int j=0; j<ans.length(); j++){
                char c = ans.charAt(j);
                a[1][c - 'A'] = 1;
            }
            int score = len;
            for (int j=0; j<len; j++){
                if (a[0][j] != a[1][j]) score -= 2;
            }
            System.out.println(score);
        }
        input.close();
    }
}

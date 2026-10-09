package W5;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        
        int t = input.nextInt();
        for (int i=0; i <t; i++){
            int hb = -1001;
            int dp = Integer.MAX_VALUE;
            int day = input.nextInt();
            for (int j=0; j<day; j++){
                int cp = input.nextInt();
                if (cp < dp) dp = cp;
                if (hb < cp - dp) hb = cp - dp;
            }
            System.out.println(hb);
        }
    input.close();
    }
}

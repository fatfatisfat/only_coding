package W4;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int turn = input.nextInt();
        
        
        for (int t=0; t<turn; t++){
            int y = input.nextInt();
            int x = input.nextInt();
            int top = Integer.MAX_VALUE;
            int right = Integer.MAX_VALUE;
            int bot = Integer.MIN_VALUE;
            int left = Integer.MIN_VALUE;
            for (int i=0; i<y; i++){
                for (int j=0; j<x; j++){
                    int dot = input.nextInt();
                    if (dot == 1){
                        if (i < top) top = i;
                        if (i > bot) bot = i;
                        if (j < right) right = j;
                        if (j > left) left = j;
                    }
                }
            }
            int wide = Math.abs(left - right)+1;
            int high = Math.abs(top - bot)+1;
            // System.out.println(wide + " " + high);
            System.out.println(wide * high);
        }
    input.close();
    }
}

import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int y = input.nextInt();
            int x = input.nextInt();
            int top = Integer.MAX_VALUE;
            int bot = Integer.MIN_VALUE;
            int left = Integer.MAX_VALUE;
            int right = Integer.MIN_VALUE;

            for (int j=0; j<y; j++){
                for (int k=0; k<x; k++){
                    int n = input.nextInt();
                    if (n == 1){
                        if (j < top) top = j;
                        if (j > bot) bot = j;
                        if (k < left) left = k;
                        if (k > right) right = k;
                    }
                }
            }
            int h = Math.abs(top - bot) + 1;
            int w = Math.abs(left - right) + 1;

            System.out.println(h * w);
        }
    input.close();
    }
}
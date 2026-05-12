package W4;
import java.util.*;
public class PH {
    public static void main (String args[]){
        Scanner input = new Scanner(System.in);

        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int len = input.nextInt();
            int max = Integer.MIN_VALUE;
            int lowest = Integer.MAX_VALUE;
            for (int j=0; j<len; j++){
                int num = input.nextInt();
                if (num-lowest > max) max = num-lowest;
                if (num < lowest) lowest = num;
            }
            if (max < 0) max = 0;
            System.out.println(max);
        }
    input.close();
    }
}

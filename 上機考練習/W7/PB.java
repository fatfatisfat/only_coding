package W7;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int x = input.nextInt();
            int y = input.nextInt();
            int count = 0;
            int n = input.nextInt();
            for (int j=0; j<n; j++){
                int tx = input.nextInt();
                int ty = input.nextInt();
                int sign = input.nextInt();
                if (Math.abs(tx - x) + Math.abs(ty - y) <= sign){
                    count++;
                }
            }
            if (count < 3) count = 0;
            System.out.println(count);
        }
    input.close();
    }
}

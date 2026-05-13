package W8;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        int turn = input.nextInt();
        for (int i=0; i<turn; i++){
            int x = input.nextInt();
            int v = input.nextInt();
            int a = input.nextInt();
            int t = input.nextInt();
            long s = (v * t) + (a * t * t)/2 + x;
            System.out.println(s);
        }
    input.close();
    }
}

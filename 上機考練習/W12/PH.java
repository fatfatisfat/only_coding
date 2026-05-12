package W12;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        int c = input.nextInt();
        if (Math.max(Math.max(a, b), c) - Math.min(Math.min(a, b), c) >= 10) System.out.println("check again");
        else {
            int[] d = {a, b, c};
            Arrays.sort(d);
            System.out.println("final " + d[1]);
        }
        input.close();
    }
}

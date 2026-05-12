package W6;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            double r = input.nextDouble()/255;
            double g = input.nextDouble()/255;
            double b = input.nextDouble()/255;
            double max = Math.max(r, Math.max(g, b));
            double min = Math.min(r, Math.min(g, b));
            double s = 0;
            if (max != 0) s = (max - min)/max;
            double bv = s * max;
            if (bv <= 0.87){
                System.out.println("pending");
            }else {
                System.out.println("skip");
            }
        }
    input.close();
    }
}

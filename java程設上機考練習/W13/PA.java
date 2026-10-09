package W13;
import java.util.*;
public class PA{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            double r = Integer.parseInt(input.next(), 2);
            double g = Integer.parseInt(input.next(), 2);
            double b = Integer.parseInt(input.next(), 2);
            r /= 255;
            g /= 255;
            b /= 255;
            double cmax = Math.max(r, Math.max(g, b));
            double cmin = Math.min(r, Math.min(g, b));
            double s = (cmax - cmin) / cmax;
            if (cmax == 0) s = 0;
            double bv = s * cmax;
            if (bv <= 0.87) System.out.println("pending");
            else System.out.println("skip");
        }
        input.close();
    }
}
package W5;
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
            String sp = "";
            double s = 0;
            if (max == 0){
                s = 0;
            }else {
                s = (max - min)/max;
            }
            double bv = s * max;
            if (bv <= 0.87){
                sp = "pending";
            }else {
                sp = "skip";
            }
            System.out.println(sp);
        }
        
    input.close();
    }
}

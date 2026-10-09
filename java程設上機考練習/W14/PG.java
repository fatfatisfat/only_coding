package W14;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner  input = new Scanner (System.in);
        double n = input.nextDouble();
        double m = input.nextDouble();
        double e = input.nextDouble();
        while (input.hasNext()){
            double t = input.nextDouble();
            n += t;
            if (Math.abs(m - n) <= e || (Math.abs(m - n) > e && n > m)){
                System.out.println("dangerous");
                break;
            }
            System.out.println("save");
        }
        input.close();
    }
}

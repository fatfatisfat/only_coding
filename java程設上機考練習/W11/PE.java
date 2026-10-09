package W11;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            long h = input.nextLong();
            long d = input.nextLong();
            long dur = input.nextLong();
            long n = input.nextLong();
            long last_time = 0;
            for (int i=0; i<n; i++){
                long current_time = input.nextLong();
                if (i != 0) h -= Math.min(dur, current_time - last_time) * d;
                // if (h <= 0) break;
                last_time = current_time;
            }
            if (n != 0) h -= d * dur;
            if (h <= 0) System.out.println("Dead");
            else System.out.println("Alive");
        }
        
        input.close();
    }
}

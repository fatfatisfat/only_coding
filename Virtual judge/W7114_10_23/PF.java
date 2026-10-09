package W7114_10_23;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            long num = input.nextLong();
            if (num == 0) break;
            int sqrtnum = (int)Math.sqrt(num);
            
            boolean bulb = sqrtnum * sqrtnum == num;
            
            if (bulb){
                System.out.println("yes");
            }else {
                System.out.println("no");
            }
        }
        
    input.close();
    }
}

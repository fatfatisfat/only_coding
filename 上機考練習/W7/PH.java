package W7;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            String n1 = input.next();
            String n2 = input.next();
            // int h = Integer.parseInt(n1, 2); //秒解法
            // int m = Integer.parseInt(n2, 2);
            int h = 0;
            int m = 0;
            int count = 0;
            for (int i=n1.length()-1; i>=0; i--){
                int c = n1.charAt(i) - '0';
                h += c * Math.pow(2, count);
                count++;
            }
            count = 0;
            for (int i=n2.length()-1; i>=0; i--){
                int c = n2.charAt(i) - '0';
                m += c * Math.pow(2, count);
                count++;
            }
            System.out.println(h + ":" + m);
        }
    input.close();
    }
}

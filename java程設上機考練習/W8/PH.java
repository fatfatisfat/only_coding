package W8;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            String n1 = input.next();
            String n2 = input.next();
            int h = Integer.parseInt(n1, 2);
            int m = Integer.parseInt(n2, 2);
            System.out.println(h + ":" + m);
        }
    input.close();
    }
}

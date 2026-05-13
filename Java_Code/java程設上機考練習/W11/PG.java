package W11;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String h = input.next();
        char[] a = {'C', ' ', 'D', ' ', 'E', 'F', ' ', 'G', ' ', 'A', ' ', 'B'};
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            String s = input.next();
            int sum = 0;
            sum += (h.charAt(1) - s.charAt(1)) * 12;
            int i1 = 0;
            int i2 = 0;
            for (int j=0; j<a.length; j++){
                if (s.charAt(0) == a[j]) i1 = j;
                if (h.charAt(0) == a[j]) i2 = j;
            }
            sum += i2 - i1;
            System.out.println(sum);
        }
        input.close();
    }
}

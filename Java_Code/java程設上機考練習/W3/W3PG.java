package W3;
import java.util.*;
public class W3PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            long a = input.nextLong();
            long b = input.nextLong();
            long sum = ((a + b) + (a - b) + (a * b) + (a/b))%(a%b);
            System.out.println(sum);
        }
    input.close();
    }    
}

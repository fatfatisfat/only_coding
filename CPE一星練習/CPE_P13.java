import java.util.*;
public class CPE_P13 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            long a = input.nextLong();
            long b = input.nextLong();
            long sum = Math.abs(a-b);
            System.out.println(sum);
        }
    input.close();
    }
}

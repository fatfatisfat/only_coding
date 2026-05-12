package W12;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int k=0; k<t; k++){
            String[] arr = input.nextLine().split(" ");
            int count = 0;
            for (String s : arr){
                if (!s.equals("f")) break;
                count++;
            }
            long num1 = Long.parseLong(arr[count]);
            for (int i=0; i<count; i++){
                long num2 = Long.parseLong(arr[count + 1 + i]);
                // System.out.println("num1 : " + num1 + " num2 : " + num2);
                num1 = f(num1, num2);
            }
            System.out.println(num1);
        }
        input.close();
    }
    public static long f(long x, long y){
        long sum = x * x * x + 2 * x * x - (3 * x) - 1 + y * y * y - y * y + 4 * y;
        return sum;
    }
}

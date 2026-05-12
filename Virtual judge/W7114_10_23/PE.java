package W7114_10_23;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            long num = input.nextLong();
            int count = 0;
            if (num == op(num)){
                System.out.print(count);
            }else {
                
            }
        }
    input.close();
    }
    public static long op(Long n){
        long op = 0;
        String line = Long.toString(n);
        int len = line.length()-1;
        while (len>=0){
            op += (line.charAt(len) - '0') * Math.pow(10, len);
            len--;
        }
        return op;
    }
}

package W8;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            if (t == 0) break;
            int l = 0;
            int m = 0;
            for (int i=2; i<t; i++){
                if (isprime(i) && isprime(t-i)){
                    l = i;
                    m = t-i;
                    break;
                }
            }
            System.out.println(t + " = " + l + " + " + m);
        }
    input.close();
    }
    public static boolean isprime (int n){
        boolean is = true;
        for (int i=2; i<n; i++){
            if (n % i == 0) is = false;
        }
        return is;
    }
}

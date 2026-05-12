package W10;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int n = input.nextInt();
            int k = input.nextInt();
            String s = input.next();
            StringBuilder result = new StringBuilder();
            for (char c : s.toCharArray()){
                result.append(complement(c, n-1));
            }
            String r = result.toString();
            if (n == k){
                r = plus(r, k);
            }
            System.out.println(r);
        }
        input.close();
    }
    public static char complement(char c, int base){
        int d = 0;
        if (c >= '0' && c <= '9'){
            d = c - '0';
        }else if (c >= 'A' && c <= 'Z'){
            d = c - 'A' + 10;
        }
        d = base - d;
        if (d < 10){
            return (char)('0' + d);
        }
        return (char)('A' + d - 10);
    }
    public static String plus(String s, int k){
        StringBuilder result = new StringBuilder(s);
        int len = s.length();
        for (int i=len-1; i>=0; i--){
            char c = s.charAt(i);
            int d = 0;
            if (c >= '0' && c <= '9'){
                d = c - '0';
            }else if (c >= 'A' && c <= 'Z'){
                d = c - 'A' + 10;
            }
            d++;
            char cc = '0';
            if (d < 10){
                cc = (char)('0' + d);
            }else {
                cc = (char)('A' + d - 10);
            }

            if (d < k){
                result.setCharAt(i, cc);
                return result.toString();
            }else {
                result.setCharAt(i, '0');
            }
        }
        return "1" + result.toString();
    }
}

package W11;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            String s = input.nextLine();
            int len = s.length();
            int split = (int)Math.ceil((double)s.length()/3);
            int count = 0;
            String n = "";
            int sum1 = 0;
            int sum2 = 0;
            for (int j=len-1; j>=0; j--){
                char c = s.charAt(j);
                count++;
                n = c + n;
                if (count == 3 || j==0){
                    if (split % 2 == 0){
                        sum1 += Integer.parseInt(n);
                    }else {
                        sum2 += Integer.parseInt(n);
                    }
                    n = "";
                    split--;
                }
                count %= 3;
            }
            int num = Math.abs(sum1 - sum2);
            if (num % 13 == 0){
                System.out.println(num + " YES");
            }else {
                System.out.println(num + " NO");
            }
        }
        input.close();
    }
}

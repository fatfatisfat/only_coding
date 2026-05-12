package W7;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            String line = input.nextLine();
            int len = line.length();
            char c = line.charAt(len-1);
            boolean is = false;
            if ((c - '0') % 2 == 0){
                if ((c - '0') % 5 == 0){
                    int sum = 0;
                    for (int i=0; i<len; i++){
                        sum += line.charAt(i) - '0';
                    }
                    if (sum % 3 == 0){
                        int sum1 = 0;
                        int sum2 = 0;
                        for (int i=0; i<len; i++){
                            if (i % 2 == 0) sum1 += line.charAt(i) - '0';
                            else sum2 += line.charAt(i) - '0';
                        }
                        if (Math.abs(sum1 - sum2) % 11 == 0){
                            is = true;
                        }
                    }
                }
            }
            if (is) System.out.println("nice gift");
            else System.out.println("skip");
        }
    input.close();
    }
}

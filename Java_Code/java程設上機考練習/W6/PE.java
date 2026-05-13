package W6;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            String num = input.nextLine();
            boolean gift = false;
            if (num.charAt(num.length()-1) % 2 == 0){
                if ((num.charAt(num.length()-1) - '0') % 5 == 0){
                    int sum1 = 0;
                    int sum2 = 0;
                    for (int i=num.length()-1; i>=0; i--){
                        char c = num.charAt(i);
                        if (i % 2 == 0) sum1 += c - '0';
                        else sum2 += c - '0';
                    }
                    if (Math.abs(sum1 - sum2) % 11 == 0){
                        int sum = 0;
                        for (int i=0; i<num.length(); i++){
                            char c = num.charAt(i);
                            sum += c - '0';
                        }
                        if (sum % 3 == 0){
                            gift = true;
                        }
                    }
                }
            }
            if (gift){
                System.out.println("nice gift");
            }else {
                System.out.println("skip");
            }
        }
    input.close();
    }
}

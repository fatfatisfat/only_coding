import java.util.*;
public class CPE_P9 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while(input.hasNext()){
            long num1 = input.nextInt();
            long num2 = input.nextInt();
            if (num1 == 0 && num2 == 0) break;
            long ten = 0;
            int f = 0;
            while (num1 > 0 || num2 > 0){
                if (num1%10 + num2%10 + ten >=10){
                    ten = 1;
                    f++;
                    num1 = num1/10;
                    num2 = num2/10;
                }else {
                    ten = 0;
                    num1 = num1/10;
                    num2 = num2/10;
                }
            }
            if (f == 0){
                System.out.println("No carry operation.");
            }else if (f == 1){
                System.out.println("1 carry operation.");
            }else {
                System.out.println(f + " carry operations.");
            }
        }
    input.close();
    }
}

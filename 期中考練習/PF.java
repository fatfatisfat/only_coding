import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            double megaHP = 30 * Math.pow(1.3, n-1);
            double megaATK = 10 * Math.pow(1.3, n-1);
            double pekaHP = 50 * Math.pow(1.25, n-1);
            double pekaATK = 25 * Math.pow(1.25, n-1);
            int count = 0;
            while (!(Math.ceil(megaHP / pekaATK) > Math.ceil(pekaHP / megaATK))){
                megaHP *= 1.3;
                megaATK *= 1.3;
                count++;
            }
            System.out.println(count);
        }
    input.close();
    }
}

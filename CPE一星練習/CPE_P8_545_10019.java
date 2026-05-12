import java.util.*;
public class CPE_P8_545_10019 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            long n = input.nextLong();
            int b1 = 0;
            long ttwo = n;
            while (ttwo > 0){
                int num = (int)ttwo%2;
                ttwo = ttwo/2;
                if (num == 1) b1++;
            }
            long tst = n;
            long toten = 0;
            long base = 16;
            while (tst > 0){
                toten = toten + (tst%10*base);
                tst = tst/10;
                base *= 16;
            }
            ttwo = toten;
            int b2 = 0;
            while (ttwo > 0){
                int num = (int)ttwo%2;
                ttwo = ttwo/2;
                if (num == 1) b2++;
            }
            System.out.println(b1 + " " + b2);
        }
    input.close();
    }
}

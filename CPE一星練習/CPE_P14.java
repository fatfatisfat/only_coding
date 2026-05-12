import java.util.*;
public class CPE_P14 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int n = input.nextInt();
            double p = input.nextDouble();
            int win = input.nextInt();
            double sum = p*Math.pow(1-p, win-1);
            sum /= 1-Math.pow(1-p, n);
            System.out.printf("%.4f\n", sum);
        }
    input.close();
    }
}

package W3;
import java.util.*;
public class W3PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            long k = input.nextInt();
            long w = input.nextInt();
            // double num = (double)w*k/100*10;
            // num = (long)num;
            // float sum = (float)num/10.0f;
            // System.out.println(sum);
            System.out.println((float)k/100*w);
        }
    input.close();
    }
}
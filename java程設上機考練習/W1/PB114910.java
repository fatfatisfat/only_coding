package W1;
import java.util.*;
public class PB114910 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            double s = input.nextDouble();
            int n = input.nextInt();
            int k = input.nextInt();
            double sum = s*(n-2*k)/n;
            if (sum <=0){
                sum = 0;
                System.out.println(sum);
            }else{
                System.out.println(sum);
            }
        }
    input.close();
    }
}

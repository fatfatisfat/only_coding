package W1;
import java.util.*;
public class PG114910 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int sum = 0;
        for (int i=0; i<t; i++){
            int num = input.nextInt();
            while (num>0){
                sum += num%10;
                num = num/10;
            }
            System.out.println(sum);
            sum = 0;
        }
    input.close();
    }
}

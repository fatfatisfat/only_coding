package W7;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int count = 1;
            int sum = 0;
            int d = input.nextInt();
            for (int j=0; j<d; j++){
                int todo = input.nextInt();
                if (todo == 0){
                    sum += 10*count;
                    count ++;
                }else {
                    count = 1;
                }
            }
            System.out.println(sum);
        }
    input.close();
    }
}

package W6;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int sum = 0;
            int day = input.nextInt();
            int count = 1;
            for (int j=0; j<day; j++){
                int todo = input.nextInt();
                if (todo == 0){
                    sum += 10*count;
                    count++;
                }else {
                    count = 1;
                }
            }
            System.out.println(sum);
        }
    input.close();
    }
}

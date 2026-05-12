package W1;
import java.util.*;
public class PC114910 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        long sum = input.nextLong();
        while (input.hasNext()){
            int num = input.nextInt();
            sum = sum+num;
            System.out.println(sum);
        }
    input.close();
    }
}

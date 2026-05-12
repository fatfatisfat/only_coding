package W14;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            int sum = 1;
            for (int i=1; i<t; i++){
                sum = (sum+1) * 2;
            }
            System.out.println(sum);
        }
        input.close();
    }
}

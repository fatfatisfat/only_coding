package W1;
import java.util.*;
public class PE114610 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            double tr = Math.pow(b, 2)-(4*a*c);
            if (tr > 0){
                System.out.println(2);
            }else if (tr == 0){
                System.out.println(1);
            }else{
                System.out.println(0);
            }
        }
    input.close();
    }
}

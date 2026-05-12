package W1;
import java.util.*;
public class PF114910 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int range = 0;
        while (input.hasNext()){
            int a = input.nextInt();
            int b = input.nextInt();
            if (a == -1 && b == -1){
                break;
            }
            if (Math.abs(a-b) >= 50){
                range = 100-Math.abs(a-b);
            }else{
                range = Math.abs(a-b);
            }
            System.out.println(range);
        }
    input.close();
    }
}

import java.util.*;
public class CPE_P17 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);

        while (input.hasNext()){
            int v = input.nextInt();
            int t = input.nextInt();
            int sum = 2 * v * t;
            System.out.println(sum);
        }
    input.close();    
    }
}

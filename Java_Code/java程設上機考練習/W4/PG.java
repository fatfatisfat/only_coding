package W4;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n1 = input.nextInt();
            if (n1 == -1) break;
            int n2 = input.nextInt();
            int n3 = input.nextInt();
            int n4 = input.nextInt();
            
            int max = Math.max(n1, Math.max(n2, Math.max(n3, n4)));
            int min = Math.min(n1, Math.min(n2, Math.min(n3, n4)));
            if ((n1+n2+n3+n4) >= 350 && max-min <= 25){
                System.out.println("In");
            }else {
                System.out.println("Nah");
            }
        }
    input.close();
    }
}

package W5;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int s1 = input.nextInt();
            if (s1 == -1) break;
            int s2 = input.nextInt();
            int s3 = input.nextInt();
            int s4 = input.nextInt();
            int sum = s1 + s2 + s3 + s4;
            int max = Math.max(s1, Math.max(s2, Math.max(s3, s4)));
            int min = Math.min(s1, Math.min(s2, Math.min(s3, s4)));
            if (sum >= 350 && max - min <= 25){
                System.out.println("In");
            }else{
                System.out.println("Nah");
            }
        }
    input.close();
    }
}

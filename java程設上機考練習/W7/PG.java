package W7;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int count = 0;
        input.nextLine();
        for (int i=0; i<t; i++){
            String ans = input.nextLine();
            int len = ans.length();
            if (ans.charAt((len-1)/2) == 'O') {
                count++; 
            }
        }
        System.out.println(t - count);
    input.close();
    }
}

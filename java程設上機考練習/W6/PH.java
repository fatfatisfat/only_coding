package W6;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        int count = 0;
        for (int i=0; i<t; i++){
            String q = input.nextLine();
            int half = (q.length()-1)/2;
            if (q.charAt(half) == 'O'){
                count++;
            }
        }
        System.out.println(t-count);
    input.close();
    }
}

package W7;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            boolean is = true;
            String line = input.nextLine();
            int len = line.length();
            for (int j=0; j<len/2; j++){
                if (line.charAt(j) != line.charAt(len - 1 - j)){
                    is = false;
                    break;
                }
            }
            if (is) System.out.println("Yes");
            else System.out.println("No");
        }
    input.close();
    }
}

package W6;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
    
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            boolean res = true;
            String line = input.nextLine();
            int half = (line.length()-1)/2;
            for (int j=0; j<half; j++){
                if (line.charAt(j) != line.charAt(line.length()-1-j)){
                    res = false;
                    break;
                }
            }
            if (res) System.out.println("Yes");
            else System.out.println("No");
        }
    input.close();
    }
    
}

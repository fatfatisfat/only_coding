package W8;
import java.util.*;

public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String h = input.nextLine();
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            String c = input.nextLine();
            if (c.charAt(1) == h.charAt(1)){
                if (suyuxiang(c.charAt(0)) <= suyuxiang(h.charAt(0))){
                    System.out.println("Plan Singing");
                }else System.out.println("Plan Toilet");
            }else if (c.charAt(1) <= h.charAt(1)){
                System.out.println("Plan Singing");
            }else System.out.println("Plan Toilet");
        }
    input.close();
    }
    public static int suyuxiang(char c){
        char[] let = {'C', 'D', 'E', 'F', 'G', 'A', 'B'};
        int num = 0;
        for (int i=0; i<7; i++){
            if (c == let[i]) num = i;
        }
        return num;
    }
}

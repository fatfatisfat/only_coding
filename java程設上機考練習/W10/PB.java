package W10;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int sa = input.nextInt();
            int ra = input.nextInt();
            int sb = input.nextInt();
            int rb = input.nextInt();
            int dis = 1000;
            boolean A = false;
            boolean D = sa == sb;
            dis -= sa + sb;
            while (!win(ra, rb, dis)) dis -= sa + sb;
            if (dis < 0){
                System.out.println("No winner");
            }else {
                if (ra >= dis && rb >= dis) A = sa >= sb;
                else if (ra >= dis || rb >= dis){
                    A = ra >= dis;
                    D = false;
                } 
                if (A && D){
                    System.out.println("No winner");
                }else if (A){
                    System.out.println("Player A win");
                }else {
                    System.out.println("Player B win");
                }
            }
            
        }
    input.close();
    }
    public static boolean win (int ra, int rb, int dis){
        return ra >= dis || rb >= dis;
    }
}

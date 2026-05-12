package W14;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int k=0; k<t; k++){
            int[] drink = new int[3];
            for (int i=0; i<3; i++) drink[i] = input.nextInt();
            int tea = 500;
            int bob = 500;
            int count = 0;
            while (tea > 0 && bob > 0){
                tea -= drink[count];
                bob -= 10 - drink[count];
                count++;
                count %= 3;
            }
            if (tea <= 0 && bob <= 0) System.out.println("Finished at the same time");
            else if (tea > 0) System.out.println("Remaining " + tea + " cc Tea");
            else if (bob > 0) System.out.println("Remaining " + bob + " cc Boba");
        }
        input.close();
    }
}

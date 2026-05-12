package W12;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int k=0; k<t; k++){
            boolean not_found = true;
            int r = input.nextInt();
            int c = input.nextInt();
            for (int i=0; i<r; i++){
                for (int j=0; j<c; j++){
                    String name = input.next();
                    if (name.equals("Wally")){
                        System.out.println((i+1) + " " + (j+1));
                        not_found = false;
                    }
                }
            }
            if (not_found) System.out.println("Wally Not Found");
        }
        input.close();
    }
}

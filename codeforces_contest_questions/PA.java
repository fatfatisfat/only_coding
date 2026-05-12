import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int n = input.nextInt();
            int con = 0;
            if (n % 2 == 0){
                con = n/4 + 1;
            }else {
                con = 0;
            }
            System.out.println(con);
        }
        input.close();
    }
}

package W1;
import java.util.*;
public class PA114910 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i=0; i<t; i++){
            int a = input.nextInt();
            int b = input.nextInt();
            if (b>a){
                int c = a;
                a = b;
                b = c; 
            }
            while (b != 0){
                int r = a%b;
                a = b;
                b = r;
            }
            System.out.println(a);
        }
    input.close();
    }
}

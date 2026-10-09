import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int sum = 0;
            int n = input.nextInt();
            while (n > 0){
                sum += n % 10;
                n /= 10;
            }
            System.out.println(sum);
        }
    input.close();
    }
}

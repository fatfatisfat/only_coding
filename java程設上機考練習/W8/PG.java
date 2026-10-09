package W8;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            if (t == 0) break;
            int[] st = new int[t];
            for (int i=0; i<t; i++){
                st[i] = input.nextInt();
            }
            for (int i=0; i<t-1; i++){
                int sum = 0;
                for (int j=t-1; j>=i; j--){
                    sum += st[j];
                }
                System.out.print(sum + " ");
            }
            System.out.println(st[t-1]);
        }
        input.close();
    }
}

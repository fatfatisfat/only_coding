package W11;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            if (n == 0) break;
            int m = input.nextInt();
            int[] student = new int[11];
            int [] task = new int[11];
            for (int i=0; i<n; i++) student[10 - input.nextInt()]++;
            for (int i=0; i<m; i++) task[input.nextInt()]++;
            int count = 0;
            task[0] = Integer.MAX_VALUE;
            for (int i=0; i<=10; i++){
                count += Math.min(student[i], task[i]);
            }
            System.out.println(count);
        }
        input.close();
    }
}

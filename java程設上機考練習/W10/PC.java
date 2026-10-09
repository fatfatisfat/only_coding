package W10;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNextInt()){
            int t = input.nextInt();
            // input.nextLine();
            // String[] line = input.nextLine().split(" ");    //split
            // int[] time = new int[t];
            // for (int i=0; i<t; i++){
            //     time[i] = Integer.parseInt(line[i]);
            // }

            int[] time = new int[t];     //用for迴圈
            for (int i=0; i<t; i++){
                time[i] = input.nextInt();
            }

            int n = input.nextInt();
            int poison = n;
            if (t == 0) poison = 0;
            for (int i=0; i<t-1; i++){
                poison += Math.min(n, time[i+1] - time[i]);
            }
            System.out.println(poison);
        }
        input.close();        
    }
}

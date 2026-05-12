package W15;
import java.util.*;
public class PG {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int h = input.nextInt();
            int ad = input.nextInt();
            boolean find = false;
            if (h == 0 && ad == 0) break;
            int[] arr = new int[12];
            int zero = 0;
            for (int i=0; i<12; i++){
                arr[i] = input.nextInt();
                if (arr[i] == 0) zero++;
            }
            // System.out.println("zero: " + zero);
            for (int i=0; i<=12-h; i++){
                int count = 0;
                for (int j=0; j<h; j++){
                    if (arr[i+j] == 1) count++;
                }
                if (count <= Math.min(ad, (zero - (h - count)))){
                    find = true;
                    System.out.println((8+i));
                    break;
                }
            }
            if (!find) System.out.println("busy");
        }
        input.close();
    }
}

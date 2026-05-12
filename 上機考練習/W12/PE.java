package W12;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        long[] arr = new long[92];
        arr[0] = 0;
        arr[1] = 1;
        for (int i=2; i<92; i++) arr[i] = arr[i-1] + arr[i-2];
        while (input.hasNext()){
            int t = input.nextInt();
            System.out.println(arr[t]);
        }
        input.close();
    }    
}

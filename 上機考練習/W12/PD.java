package W12;
import java.util.*;
public class PD {
    public static void main(String argsss[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int count = 0;
        for (int i=0; i<t; i++){
            boolean bang = false;
            String line = input.next();
            int[] a = new int[3];
            for (char c : line.toCharArray()){
                if (c == 'A'){
                    bang = true;
                    break;
                }
                if (c == 'B') a[0]++;
                else if (c == 'F') a[1]++;
                else if (c == 'I') a[2]++;
            }
            if (a[0] < 2 || a[1] < 3 || a[2] < 3 || bang) count++;
        }
        System.out.println(count);
        input.close();
    }
}

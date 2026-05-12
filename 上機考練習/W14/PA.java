package W14;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            int m = input.nextInt();
            if (n == 0 && m == 0) break;
            input.nextLine();
            String[] arr = input.nextLine().split(" ");
            int start = 0;
            int last = Integer.MIN_VALUE;
            for (int i=0; i<=12-n; i++){
                int adjust = m;
                int count = 0;
                for (int j=0; j<n; j++){
                    String s = arr[i+j];
                    if (s.equals("0")){
                        count++;
                    }else {
                        if (adjust > 0){
                            count++;
                            adjust--;
                        }else {
                            // System.out.println("no way");
                            break;
                        }
                    }
                }
                if (count == n && adjust > last){
                    start = 8 + i;
                    last = adjust;
                }
                // System.out.println(start + " " + last);
            }
            if (start == 0) System.out.println("busy");
            else System.out.println(start);
        }
        input.close();
    }
}

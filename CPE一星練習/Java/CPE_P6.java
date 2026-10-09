import java.util.*;
public class CPE_P6 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            List<Integer> fib = new ArrayList<>();
            int n = input.nextInt();
            if (n == 0){
                System.out.println("0 = 0 (fib)");
                continue;
            }
            fib.add(1);
            fib.add(2);
            while (fib.get(fib.size()-1) <= n){
                fib.add(fib.get(fib.size()-1) + fib.get(fib.size()-2));
            }

            StringBuilder sb = new StringBuilder();
            boolean started = false;
            int num = n;
            for (int j=fib.size()-1; j>=0; j--){
                int f = fib.get(j);
                if (f <= num){
                    sb.append('1');
                    num -= f;
                    started = true;
                }else if (started){
                    sb.append('0');
                }
            }
            System.out.println(n + " = " + sb.toString() + " (fib)");
        }
    input.close();
    }
}

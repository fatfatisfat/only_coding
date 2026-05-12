package sort_search;

import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = 0;
        while (input.hasNext()){
            int n = input.nextInt();
            if (n < 0) break;
            t++;
            int sum = 1;
            int count = 0;
            while (sum < n){
                sum *= 2;
                count++;
            }
            System.out.println("Case " + t + ": " + count);
        }
        input.close();
    }
}

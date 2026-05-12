package sort_search;

import java.util.*;
public class PE{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            long n = input.nextLong();
            long m = input.nextLong();
            long target = input.nextLong();
            long count = 0;
            boolean inthefield = true;
            if (target < n || target > m) inthefield = false;
            while ( inthefield){
                count++;
                long temp = (m + n) / 2;
                if (temp == target) break;
                else if (temp > target) m = temp-1;
                else if (temp < target) n = temp+1;

            }
            if (!inthefield) System.out.println(-1);
            else System.out.println(count);
        }
        input.close();
    }
}
package W7114_10_23;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            int[] nums = new int[t];
            for (int i=0; i<t; i++){
                nums[i] = input.nextInt();
            }
            Arrays.sort(nums);
            int A = nums[(t-1)/2];
            int countmin = 0;
            int min = Integer.MAX_VALUE;
            for (int i=0; i<t; i++){
                if (Math.abs(nums[i] - A) < min){
                    min = Math.abs(nums[i] - A);
                    countmin = 1;
                }else if (nums[i] - A == min){
                    countmin++;
                }
            }
            int countmid;
            if (t == 1){
                countmid = nums[0];
            }else {
                countmid = nums[t/2] - nums[t/2-1] + 1;
            }
            
            System.out.println(A + " " + countmin + " " + countmid);
        }
    input.close();
    }
}

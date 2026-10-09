import java.util.*;
public class CPE_P10 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int len = input.nextInt();
            int[] nums = new int[len];
            for (int i=0; i<len; i++){
                nums[i] = input.nextInt();
            }
            boolean[] find = new boolean[len-1];
            boolean isjolly = true; 
            for (int i=0; i<len-1; i++){
                int num = Math.abs(nums[i] - nums[i+1]);
                if (num >=1 && num <= len-1){
                    find[num-1] = true;
                }else {
                    isjolly = false;
                    break;
                }
            }
            if (isjolly == true){
                for (int i=0; i<len-1; i++){
                    if (find[i] == false) {
                        isjolly = false; 
                        break;
                    }
                }
            }
            if (isjolly) System.out.println("Jolly");
            else System.out.println("Not jolly");
        }
    input.close();
    }
}

import java.util.*;
public class CPE_P11 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int sum = 0;
            int left = 0;
            int right = 30000;
            int ads = input.nextInt();
            int mid = 0;
            boolean doub = true;
            for(int j=0; j<ads; j++){
                int num = input.nextInt();
                if (left == 0 && right == 30000){
                    mid = num;
                }else if (num <= mid && num >= left && !doub){
                    System.out.println(2);
                    sum = sum + Math.abs(num - mid);
                    left = num;
                    right = mid;
                    mid = left;
                }else if (num >= mid && num <= right && !doub){
                    System.out.println(3);
                    sum = sum + Math.abs(num - mid);
                    right = num;
                    left = mid;
                    // mid = left;
                }else if (left == 0 || right == 30000){
                    System.out.println(1);
                    if (num > right){
                        left = mid;
                        mid = right;
                        right = num;
                    }else if(num < left){
                        right = mid;
                        mid = left;
                        left = num;
                    }else if (num > mid){
                        mid = left;
                        mid = num;
                    }else if (num < mid){
                        mid = right;
                        mid = num;
                    }
                }else if (num >= left && num <= right && doub){
                    System.out.println(4);
                    mid = num;
                }else if (doub){
                    if (num < left){

                    }else if (num > right){

                    }
                }else {
                    System.out.println(6);
                    // if (num > right){
                    //     left = mid;
                    //     mid = right;
                    //     right = num;
                    // }else if(num < left){
                    //     right = mid;
                    //     mid = left;
                    //     left = num;
                    // }
                }
                doub = !doub;
                System.out.println("left: " + left);
                System.out.println("right: " + right);
            }
            System.out.println(sum);
        }
    input.close();
    }
}

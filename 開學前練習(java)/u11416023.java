import java.util.*;
public class u11416023 {
    public static void main(String args[]){
        int count = 0;
        int[] unluck = new int[20];
        while (count < 20){
            int a = (int)(Math.random() * (44 - 1 + 1) + 1);
            if (!check(unluck, a)){
                unluck[count] = a;
                count++;
            }
        }
        Arrays.sort(unluck);
        for (int i=0; i<20; i++){
            if (unluck[i] < 10) System.out.println("u1141600" + unluck[i]);
            else System.out.println("u114160" + unluck[i]);
        }
    }
    public static boolean check(int[] arr, int a){
        for (int i=0; i<arr.length; i++){
            if (arr[i] == a) return true;
        }
        return false;
    }
}

import java.util.*;
public class A_339 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        
        String[] arr = input.nextLine().split("\\+");
        int[] n = new int[arr.length];
        
        for (int i=0; i<arr.length; i++){
            n[i] = Integer.parseInt(arr[i]);
        }
        Arrays.sort(n);
        System.out.print(n[0]);
        for (int i=1; i<n.length; i++){
            System.out.print("+" + n[i]);
        }
        System.out.println();
        input.close();
    }
}

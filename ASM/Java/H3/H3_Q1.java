package ASM.Java.H3;
import java.util.Scanner;

public class H3_Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("輸入一個正奇數: ");
        int n = sc.nextInt();
        int sum = 0;
        
        for (int i = n; i >= 1; i -= 2) {
            sum += i;
        }
        System.out.println("總和為: " + sum);
        sc.close();
    }
}
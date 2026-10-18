package ASM.Java.H3;
import java.util.Scanner;

public class H3_Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("請輸入一個正整數: ");
        int n = sc.nextInt();
        int totalSum = 0;
        
        for (int i = 1; i <= n; i++) {
            int tempSquare = 0;
            for (int j = 1; j <= i; j++) {
                tempSquare += i;
            }
            totalSum += tempSquare;
        }
        System.out.println("平方和為: " + totalSum);
        sc.close();
    }
}
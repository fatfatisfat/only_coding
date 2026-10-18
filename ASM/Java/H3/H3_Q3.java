package ASM.Java.H3;
import java.util.Scanner;

public class H3_Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input a positive integer to determine prime number: ");
        int n = sc.nextInt();
        boolean is_prime = true;

        if (n <= 1) {
            is_prime = false;
        } else {
            for (int i = 2; i < n; i++) {
                if (n % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        System.out.println("Is it a prime number: " + (is_prime ? "YES" : "NO"));
        sc.close();
    }
}
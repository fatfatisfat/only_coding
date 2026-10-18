package ASM.Java.H3;
import java.util.Scanner;

public class H3_Q4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input a line of English letters: ");
        String input = sc.next();
        char[] str = input.toCharArray();
        
        for (int i = 0; i < str.length; i++) {
            str[i] = (char)(str[i] ^ 0x20); 
        }
        
        System.out.println("result: " + new String(str));
        sc.close();
    }
}
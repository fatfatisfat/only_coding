package sort_search;

import java.util.*;
public class PG{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            String s = "";
            for (int i=0; i<24; i++){
                if (n % 2 == 1){
                    s = "1" + s;
                }else {
                    s = "0" + s;
                }
                n /= 2;
            }
            String a = "";
            for (int i=2; i<10; i++){
                int c1 = s.charAt(i) - '0';
                int c2 = s.charAt(12 + i) - '0';
                a += c1 ^ c2;
            }
            String b = "";
            for (int i=0; i<8; i++){
                int c1 = s.charAt(i) - '0';
                int c2 = s.charAt(8+i) - '0';
                int c3 = s.charAt(16+i) - '0';
                b += (c1 ^ c2) ^ c3;
            }
            int n1 = Integer.parseInt(a, 2);
            int n2 = Integer.parseInt(b, 2);
            System.out.println(n1 + " " + n2);
        }
        input.close();
    }
}

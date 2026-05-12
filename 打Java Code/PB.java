import java.util.*;
public class PB {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
        float s = sc.nextInt(); 
        int n = sc.nextInt(); 
        int k = sc.nextInt(); 
        float num = s*(n-(2*k))/n;
        System.out.println(num);
        }
    sc.close();
    }
}

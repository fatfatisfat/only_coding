import java.util.*;
public class PA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i=0; i<t; i++){
            int l = sc.nextInt();
            int s = sc.nextInt();
            int num = l/s;
            System.out.println(num);
        }
    sc.close();
    }
}
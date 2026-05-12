import java.util.*;
public class P5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int sum = 0;
        for (int i=0; i<t; i++){
            int num = sc.nextInt(); 
            while (num>0){
                sum = sum + (num%10);
                num = num/10;
            }
            System.out.println(sum);
            sum = 0;
        }
    sc.close();
    }
}
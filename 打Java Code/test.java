import java.util.Scanner;

public class test {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        totalMoney(t);
            // float a = 10;
            // float b = 3;
            // float c = a/b;
            // System.out.println(a + " " + b);
            // System.out.printf("%.1f", c);
    sc.close();
    }
    public static int totalMoney(int n) {
        
        int count = 1;
        int mon = 1;
        int sum = 0;
        while (n > 0){
            sum += mon + count - 1;
            if (count == 7) {
                mon++;
                count = 1;
            }
            count++;
            n--;
        }
        System.out.println(sum);
        return 0;
    }

}

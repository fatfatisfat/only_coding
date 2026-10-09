import java.util.*;
public class P3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNext()) {
        int a = sc.nextInt(); 
        int b = sc.nextInt(); 
        int c = sc.nextInt(); 
        int num = b*b-(4*a*c);
        if (num>0){
            System.out.println(2);
        }else if(num == 0){
            System.out.println(1);
        }else{
            System.out.println(0);
        }
        }
        sc.close();
    }
}

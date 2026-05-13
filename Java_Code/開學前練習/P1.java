import java.util.*;
public class P1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt(); 
        
        int s = 360/a;
        System.out.println(s);
        if (s>17){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    sc.close();
    }
}

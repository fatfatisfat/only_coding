import java.util.*;
public class PC {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = sc.nextInt(); 
            
        while (sc.hasNext()) {
            int p = sc.nextInt();
            sum = sum + p;
            System.out.println(sum);
        }
    sc.close();
    }    
}

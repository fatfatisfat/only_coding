import java.util.*;
public class P2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); 
        
        for (int i = 0; i<t; i++){
            
        double b = sc.nextDouble();
        double f = (b-32)*5/9;
        
        System.out.println(f);
        }
        sc.close();
        }
        
        
    }

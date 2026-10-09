import java.util.Scanner;

public class PD {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int c = 0;
        for (int i=0; i<3; i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            
            if (a == b){
                System.out.println("Jim\r");
            }else if (a == 0){
                if (b == 1){
                    System.out.println("Eva\r");
                }else{
                    System.out.println("Allen\r");
                }
            }else if (a == 1){
                if (b == 0){
                    System.out.println("Allen\r");
                    c++;
                }else{
                    System.out.println("Eva\r");
                    c--;
                }
            }else if (a == 2){
                System.out.println("Jim\r");
                if (b == 0){
                    System.out.println("Eva\r");
                    c--;
                }else{
                    System.out.println("Allen\r");
                    c++;
                }
            }
        
        }
        if (c == 0){
            System.out.println("Jim");
        }else if (c > 0){
            System.out.println("Allen\r");
        }else{
            System.out.println("Eva\r");
        }
    sc.close();
    }
}
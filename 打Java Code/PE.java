import java.util.Scanner;

public class PE {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()){
            int score = sc.nextInt();
            if (score > 100 || score < 0){
                System.out.println("INVALID\r");
            }else if (score >= 60){
                System.out.println("PASS\r");
            }else if (score < 60 && score%2 == 0){
                System.out.println("ARM\r");
            }else if (score < 60 && score%2 == 1){
                System.out.println("LEG\r");
            }else {
                System.out.println("HEAD\r");
            }
        }
    sc.close();
    }
}

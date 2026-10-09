package W8;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            String line = input.nextLine();
            System.out.println(line + " is the input number");
        }
        while (input.hasNext()){
            String line = input.nextLine();
            if (line.charAt(0) == '-') break;
            System.out.println(line + " is the input number");
        }
        while (input.hasNext()){
            String line = input.nextLine();
            System.out.println(line + " is the input number");
        }
    input.close();
    }
}

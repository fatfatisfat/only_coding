package W8;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int r = input.nextInt();
            String mask = input.next();
            input.nextLine();
            for (int j=0; j<r; j++){
                String sec = "";
                String line = input.nextLine();
                for (int k=0; k<mask.length(); k++){
                    if (mask.charAt(k) == '1' ^ line.charAt(k) == '1'){
                        sec += '1';
                    }else {
                        sec += '0';
                    }
                }
                System.out.println(sec);
            }
        }
    input.close();
    }
}

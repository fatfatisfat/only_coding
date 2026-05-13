package W7;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String line = input.nextLine();
        int len = line.length();
        String let = "";
        for (int i=0; i<len; i+=2){
            String num = "";
            for (int j=0; j<2; j++){
                char c = line.charAt(i+j);
                num += c;
            }
            if (num.equals("00")){
                let += "A";
            }else if (num.equals("01")){
                let += "B";
            }else if (num.equals("10")){
                let += "C";
            }else if (num.equals("11")){
                let += "D";
            }
        }
        System.out.println(let);
    input.close();
    }
}

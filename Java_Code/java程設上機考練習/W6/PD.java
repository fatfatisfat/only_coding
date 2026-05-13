package W6;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String line = input.nextLine();
        int len = line.length();
        String result = "";
        for (int i=0; i<len; i+=2){
            String let = "";
            for (int j=0; j<2; j++){
                let += line.charAt(i+j);
            }
            if (let.equals("00")){
                result += 'A';
            }else if (let.equals("01")){
                result += 'B';
            }else if (let.equals("10")){
                result += 'C';
            }else if (let.equals("11")){
                result += 'D';
            }
        }
        System.out.println(result);
    input.close();
    }
}

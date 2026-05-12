import java.util.*;
public class CPE_P18 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            String line = input.nextLine();
            int mx = 1;
            int sum = 0;
            for (int i=0; i<line.length(); i++){
                char c = line.charAt(i);
                int temp = 0;
                if (c >= '0' && c <='9'){
                    temp = c - '0';
                }else if (c >= 'A' && c <='Z'){
                    temp = c - 'A' + 10;
                }else if (c >= 'a' && c <='z'){
                    temp = c - 'a' + 36;
                }
                if (mx <= temp) mx = temp;
                sum += temp;
            }
            boolean out = false;
            for (int i=mx; i<62; i++){
                if (sum % i == 0){
                    System.out.println(i+1);
                    out = true;
                    break;
                }
            }
            if (!out){
                System.out.println("such number is impossible!");
            }
        }
    input.close();
    }
}

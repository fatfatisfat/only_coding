package W6;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        
        for (int i=0; i<t; i++){
            boolean isfirstnum = true;
            String result = "";
            String line = input.nextLine();
            int len = line.length();
            for (int j=0; j<len; j++){      //負號確認
                char c = line.charAt(j);
                if (c >= '0' && c <= '9'){
                    if (j != 0 && line.charAt(j-1) == '-'){
                        result = "-";
                    }
                    break;
                }
            }

            for (int j=0; j<len; j++){      //加入數字
                char c = line.charAt(j);
                if (c >= '1' && c <= '9'){
                    result += c;
                    isfirstnum = false;
                }else if (c == '0' && !isfirstnum){
                    result += c;
                }
            }
                        
            if (result == "-" || result == ""){
                System.out.println(0);
            }else{
                System.out.println(result);
            }
            
        }
    input.close();
    }
}

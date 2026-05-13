package W7;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            String line = input.nextLine();
            String ans = "";
            boolean firstnum = true;
            boolean positive = true;
            int len = line.length();
            for (int j=0; j<len; j++){
                char c = line.charAt(j);
                if (c >= '0' && c <= '9'){
                    if (positive && j != 0 && line.charAt(j-1) == '-'){
                        ans = "-" + ans;
                    }
                    positive = false;
                    if (c == '0' && !firstnum){
                        ans += c;
                    }
                    else if (c != '0'){
                        ans += c; 
                        firstnum = false;
                    }
                }
            }
            if (ans.equals("-") || ans == ""){
                System.out.println("0");
            }else{
                System.out.println(ans);
            }
        }
    input.close();
    }
}

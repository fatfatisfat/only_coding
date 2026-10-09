package W15;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int k=0; k<t; k++){
            String s = input.next();
            String ans = "";
            for (char c : s.toCharArray()){
                if (c == 'A'){
                    ans += "U";
                }else if(c == 'T'){
                    ans += "A";
                }else if(c == 'C'){
                    ans += "G";
                }else if(c == 'G'){
                    ans += "C";
                }
            }
            System.out.println(ans);
        }
        input.close();
    }
}

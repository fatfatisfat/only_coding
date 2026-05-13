package W11;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            String s = input.nextLine();
            int count = 2;
            int locate = 0;
            String result = "";
            for (char c : s.toCharArray()){
                locate += (c - 'A') * Math.pow(3, count);
                count--;
                if (count == -1){
                    if (locate != 26) result += (char)('a' + locate);
                    else result += " ";
                    count = 2;
                    locate = 0;
                }
                
            }
            System.out.println(result);
        }
        input.close();
    }
}

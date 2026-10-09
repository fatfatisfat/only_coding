import java.util.*;
public class CPE_P19 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = 1;
        while (input.hasNext()){
            String line = input.nextLine();
            int len = line.length();
            int count = 0;
            int digit = 0;
            String[] digits = {" shata ", " hajar ", " lakh ", " kuti "};
            String n = "";
            String ans = "";
            if (line.length() < 2){
                ans = line;
            }else {
                for (int i=0; i<2; i++){
                    char c = line.charAt(len -1 - i);
                    ans = c + ans;
                }
                for (int i=len-3; i>=0; i--){
                    char c = line.charAt(i);
                    n = c + n;
                    count++;
                    if (count == 1 && !n.isEmpty()){
                        ans = n + digits[digit] + ans;
                        n = "";
                        digit++;
                    }else if (count == 3 && !n.isEmpty()){
                        ans = n + digits[digit] + ans;
                        n = "";
                        digit++;
                    }else if (count == 5 && !n.isEmpty()){
                        ans = n + digits[digit] + ans;
                        n = "";
                        digit++;
                    }else if (count == 7 && !n.isEmpty()){
                        ans = n + digits[digit] + ans;
                        n = "";
                        digit++;
                        count = 0;
                    }
                    digit %= 4;
                    System.out.println("for");
                }
                if (!n.isEmpty()) {
                    System.out.println("if");
                    ans = n + digits[digit] + ans;
                    // ans = n + ans;
                    n = "";
                }
            }
            // ans = Integer.toString(t) + ". " + ans;
            System.out.println(t + ". " + ans);
            ans = "";
            t++;
        }
    input.close();
    }
}

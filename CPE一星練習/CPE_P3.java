import java.util.*;
public class CPE_P3 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        boolean isop = true;
        while (input.hasNextLine()){
            String sentence = input.nextLine();
            StringBuilder sb = new StringBuilder();
            for (char c : sentence.toCharArray()){
                if (c == '"'){
                    if (isop == true){
                        sb.append("``");
                        isop = false;
                    }else {
                        sb.append("''");
                        isop = true;
                    }
                }else {
                    sb.append(c);
                }
            }
            System.out.println(sb.toString());
        }
    input.close();
    }
}

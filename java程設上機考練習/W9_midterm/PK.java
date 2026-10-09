package W9_midterm;
import java.util.*;
public class PK {
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        while (input.hasNext()){
            String line = input.nextLine();
            String pass = "";
            int ad = -1;
            outer:
            for (int i=0; i<line.length(); i++){
                char c = line.charAt(i);
                if (pass.indexOf(c) == -1){
                    pass += c;
                    for (int j=i+1; j<line.length(); j++){
                        if (line.charAt(j) == c) continue outer ;
                    }
                    ad = i;
                    break;
                }
                pass += c;
            }
            System.out.println(ad);
        }
    input.close();
    }
}

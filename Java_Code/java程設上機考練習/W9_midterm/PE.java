package W9_midterm;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            String line = input.nextLine();
            String[] sp = line.split(" ");
            int maxround = 0;
            int round = 0;
            int mp = 0;
            for (String s : sp){
                int cp = Integer.parseInt(s);
                mp += cp;
                if (mp >= 0){
                    round++;
                }else {
                    maxround = Math.max(maxround, round);
                    round = 0;
                    mp = 0;
                }
            }
            maxround = Math.max(maxround, round);
            System.out.println(maxround);
        }
    input.close();
    }
}

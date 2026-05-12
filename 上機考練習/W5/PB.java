package W5;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int needtime = 0;
        int lasttime = 0;
        for (int i=0; i<t; i++){
            int ct = input.nextInt();
            int wine = input.nextInt();
            needtime -= ct - lasttime;
            if (needtime < 0) needtime = 0;
            needtime += wine;
            lasttime = ct;
        }
        System.out.println(needtime + lasttime);
        
    input.close();
    }
}

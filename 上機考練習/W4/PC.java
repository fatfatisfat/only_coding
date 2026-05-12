package W4;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int needtime = 0;
        int lastcup = 0;
        for (int i=0; i<t; i++){
            int time = input.nextInt();
            int wine = input.nextInt();
            needtime = needtime - (time - lastcup);
            if (needtime < 0) needtime = 0;
            needtime += wine;
            lastcup = time;
        }
        System.out.println(needtime + lastcup);
    input.close();
    }
}

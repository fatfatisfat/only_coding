import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int lasttime = 0;
        int wake = 0;
        for (int i=0; i<t; i++){
            int time = input.nextInt();
            int wine = input.nextInt();
            wake -= time - lasttime;
            if (wake < 0) wake = 0;
            lasttime = time;
            wake += wine;
        }
        System.out.println(wake + lasttime);
    input.close();
    }
}
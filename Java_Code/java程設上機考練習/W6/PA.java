package W6;

import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int x = input.nextInt();
            int y = input.nextInt();
            int count = 0;
            int towers = input.nextInt();
            for (int j=0; j<towers; j++){
                int tx = input.nextInt();
                int ty = input.nextInt();
                int power = input.nextInt();

                int dist = Math.abs(tx - x) + Math.abs(ty - y);
                if (dist <= power){
                    count++;
                }
            }
            if (count < 3){
                System.out.println(0);
            }else {
                System.out.println(count);
            }
        }
    input.close();
    }
}

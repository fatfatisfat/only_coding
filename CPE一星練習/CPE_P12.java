import java.util.*;
public class CPE_P12 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int day = input.nextInt();
            boolean[] nowork = new boolean[day];
            int p = input.nextInt();
            for (int j=0; j<p; j++){
                int h = input.nextInt();
                for (int d=h-1; d<day; d += h){
                    int whatday = d%7;
                    if (whatday == 5 || whatday == 6) continue;
                    nowork[d] = true;
                }
            }
            int countday = 0;
            // int d = 0;
            // while (d < day){
            //     System.out.print(nowork[d] + " ");
            //     d++;
            // }
            for (boolean b : nowork){
                if (b) countday++;
            }
            System.out.println(countday);
        }
    input.close();
    }
}

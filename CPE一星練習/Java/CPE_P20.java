import java.util.*;
public class CPE_P20 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            long tour = input.nextLong();
            long find_day = input.nextLong();
            long in = 1;
            while (in < find_day){
                in += tour;
                tour++;
            }
            // System.out.println(in);
            // System.out.println("tour = " + tour);
            if (in == find_day) System.out.println(tour);
            else System.out.println(tour-1);
        }
        input.close();
    }
}

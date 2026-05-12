package W8;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            double level = input.nextDouble();
            double pekaATK = 25 * Math.pow(1.25, level-1);
            double pekaHP = 50 * Math.pow(1.25, level-1);
            double megaATK = 10 * Math.pow(1.3, level-1);
            double megaHP = 30 * Math.pow(1.3, level-1);

            int count = 0;
            while (!fight(megaATK, megaHP, pekaATK, pekaHP)){
                megaATK *= 1.3;
                megaHP *= 1.3;
                count++;
            }
            System.out.println(count);
        }
    input.close();
    }
    public static boolean fight(double megaATK, double megaHP, double pekaATK, double pekaHP){
        boolean megawin = false;
        if (Math.ceil(megaHP/pekaATK) > Math.ceil(pekaHP/megaATK)) megawin = true;
        return megawin;
    }
}

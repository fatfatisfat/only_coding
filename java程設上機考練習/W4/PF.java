package W4;
import java.util.*;
public class PF {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String[] days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int day = input.nextInt();
        while (input.hasNext()){
            int num = input.nextInt();
            day = day + num;
            if (day <0) {
                day = 6;
            }else {
                day = day%7;
            }
        }
        System.out.println(days[day]);
    input.close();
    }
}

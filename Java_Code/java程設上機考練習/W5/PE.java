package W5;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String[] days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int day = input.nextInt();

        while (input.hasNext()){
            int move = input.nextInt();
            day += move;
            if (day < 0) day = 7 + day;
            day = day % 7;
        }
        System.out.println(days[day]);
    input.close();
    }
}

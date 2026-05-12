package W15;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        boolean a = false;
        while (input.hasNext()){
            if (a){
                System.out.println();
                input.nextLine();
            }
            a = true;
            String[] today = input.nextLine().split("/");
            int t = Integer.parseInt(input.nextLine());
            for (int k=0; k<t; k++){
                String[] line = input.nextLine().split(" ");
                String[] birth = line[1].split("/");
                int m = month(Integer.parseInt(birth[0]), Integer.parseInt(today[0]));
                int d = day(birth, today);
                if (Integer.parseInt(birth[0]) == Integer.parseInt(today[0])){
                    if (d == 0) System.out.println("Happy Birthday, " + line[0]);
                    else if (d > 0) System.out.println("Happy " + d +" days before birthday, " + line[0]);
                    else System.out.println("Happy " + -d + " days after birthday, " + line[0]);
                }else {
                    m -= d;
                    if (Integer.parseInt(birth[0]) > Integer.parseInt(today[0])){
                        System.out.println("Happy " + m +" days before birthday, " + line[0]);
                    }else {
                        System.out.println("Happy " + m + " days after birthday, " + line[0]);
                    }
                }
            }
        }
        input.close();
    }
    public static int month(int b, int t){
        int[] months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int m = 0;
        if (b == t){
            return 0;
        }else if (b > t){
            for (int i=t-1; i<b; i++){
                m += months[i];
            }

        }else {
            for (int i=b-1; i<t; i++){
                m += months[i];
            }
        }
        return m;
    }
    public static int day(String[] birth, String[] today){
        int[] months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int b = Integer.parseInt(birth[1]);
        int t = Integer.parseInt(today[1]);
        if (Integer.parseInt(birth[0]) == Integer.parseInt(today[0])){
            return b - t;
        }else if (Integer.parseInt(birth[0]) > Integer.parseInt(today[0])){
            return (months[Integer.parseInt(birth[0])-1] - b) + t;
        }else {
            return (months[Integer.parseInt(today[0])-1] - t) + b;
        }
    }
}

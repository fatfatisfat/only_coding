package W9_midterm;
import java.util.*;
public class PI {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            double x1 = input.nextInt();
            double y1 = input.nextInt();
            double x2 = input.nextInt();
            double y2 = input.nextInt();
            double x3 = input.nextInt();
            double y3 = input.nextInt();
            double x4 = input.nextInt();
            double y4 = input.nextInt();

            double a1 = y1 - y2;
            double b1 = x2 - x1;
            double c1 = -(x1 * y2 - x2 * y1);
            double a2 = y3 - y4;
            double b2 = x4 - x3;
            double c2 = -(x3 * y4 - x4 * y3);
            
            double d = a1 * b2 - a2 * b1;
            double dx = c1 * b2 - c2 * b1;
            double dy = a1 * c2 - a2 * c1;
            
            boolean line1 = x1 == x2;
            boolean line2 = x3 == x4;

            if (line1 && line2){
                if (x1 == x3)System.out.println("LINE");
                else System.out.println("NONE");
            }else {
                if (d == 0 && dx == 0 && dy == 0){
                    System.out.println("LINE");
                }else if (d == 0 && (dx != 0 || dy != 0)){
                    System.out.println("NONE");
                }else {
                    double x = dx / d;
                    double y = dy / d;
                    if (x == -0.00) x = 0.00;
                    if (y == -0.00) y = 0.00;
                    System.out.printf("POINT %.2f %.2f\n", x, y);
                }
            }
            
        }
    input.close();
    }
}

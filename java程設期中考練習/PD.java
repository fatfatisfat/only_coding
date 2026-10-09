import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int x1 = input.nextInt();
            int y1 = input.nextInt();
            int x2 = input.nextInt();
            int y2 = input.nextInt();
            int x3 = input.nextInt();
            int y3 = input.nextInt();
            int x4 = input.nextInt();
            int y4 = input.nextInt();

            boolean line1 = x1 == x2;
            boolean line2 = x3 == x4;

            if (line1 && line2){
                if (x1 == x3){
                    System.out.println("LINE");
                }else {
                    System.out.println("NONE");
                }
            }else {
                double a1 = y1 - y2;
                double b1 = x2 - x1;
                double c1 = -((x1 * y2) - (x2 * y1));
                double a2 = y3 - y4;
                double b2 = x4 - x3;
                double c2 = -((x3 * y4) - (x4 * y3));
                double deltas[] = delta(a1, b1, c1, a2, b2, c2);
                if (deltas[0] == 0 && deltas[1] == 0 && deltas[2] == 0){
                    System.out.println("LINE");
                }else if (deltas[0] == 0 && (deltas[1] != 0 || deltas[2] != 0)){
                    System.out.println("NONE");
                }else {
                    double x = deltas[1]/deltas[0];
                    double y = deltas[2]/deltas[0];
                    if (x == -0.00) x = 0.00;
                    if (y == -0.00) y = 0.00;
                    System.out.printf("POINT %.2f %.2f\n", x, y);
                }
            }

        }
    input.close();
    }
    public static double[] delta(double a1, double b1, double c1, double a2, double b2, double c2){
        double[] deltas = new double[3];
        deltas[0] = a1 * b2 - a2 * b1;
        deltas[1] = c1 * b2 - c2 * b1;
        deltas[2] = a1 * c2 - a2 * c1;
        return deltas;
    }
}

package W4;
import java.util.*;
public class PD {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            double x1 = input.nextDouble();  double y1 = input.nextDouble();   //輸入四個點
            double x2 = input.nextDouble();  double y2 = input.nextDouble();
            double x3 = input.nextDouble();  double y3 = input.nextDouble();
            double x4 = input.nextDouble();  double y4 = input.nextDouble();

            boolean line1 = x1 == x2;  //判斷是不是垂直
            boolean line2 = x3 == x4;
            
            if (line1 && line2){   //判斷為垂直後判斷是重合還是平行
                if (x1 == x3){
                    System.out.println("LINE"); //重合
                }else {
                    System.out.println("NONE"); //平行
                }
            }else {
                double a1 = y2 - y1;                double a2 = y4 - y3;                //求方程式係數
                double b1 = -(x2 - x1);             double b2 = -(x4 - x3);
                double c1 = (x2 * y1) - (x1 * y2);  double c2 = (x4 * y3) - (x3 * y4);
                
                // double m1 = (y2 - y1)/(x2 - x1);   double m2 = (y4 - y3)/(x4 - x3);  //求斜率
                // double b1 = x1*m1 - y1;   double b2 = x1*m1 - y1;   //求常數
                
                double[] deltas = getdelta(a1, b1, -c1, a2, b2, -c2);  //求delta, delta X, delta Y
                if (deltas[0] == 0 && deltas[1] == 0 && deltas[2] == 0){     //判斷兩線關係
                    System.out.println("LINE");
                }else if (deltas[0] == 0 && (deltas[1] != 0 || deltas[2] == 0)){
                    System.out.println("NONE");
                }else {
                    System.out.printf("POINT %.2f %.2f\n", deltas[1]/deltas[0], deltas[2]/deltas[0]);
                }
                

            }

        }
    input.close();
    }
    public static double[] getdelta (double a1, double b1, double c1, double a2, double b2, double c2){

        double delta = (a1*b2) - (a2*b1);
        double dx = (c1*b2) - (c2*b1);
        double dy = (a1*c2) - (a2*c1);
        return new double[]{delta, dx, dy};
    }
}

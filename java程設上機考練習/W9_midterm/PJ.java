package W9_midterm;
import java.util.*;
public class PJ {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            String line = input.nextLine();
            String[] twoside = line.split("=");
            if (twoside[0].charAt(0) != '-') twoside[0] = "+" + twoside[0];
            if (twoside[1].charAt(0) != '-') twoside[1] = "+" + twoside[1];

            int[] x = new int[2];
            int[] n = new int[2];
            for (int j=0; j<2; j++){
                String num = "";
                boolean isx = false;
                for (int k=twoside[j].length()-1; k>=0; k--){
                    char c = twoside[j].charAt(k);
                    if (c == 'x'){
                        isx = true;
                        continue;
                    }
                    if (c == '-' || c == '+'){
                        // if (num.equals("0")) continue;
                        if (num.isEmpty()) num = "1";
                        if (c == '-') num = '-' + num;
                        if (isx){
                            x[j] += Integer.parseInt(num);
                            isx = false;
                        }else {
                            n[j] += Integer.parseInt(num);
                        }
                        num = "";
                    }else {
                        num = c + num;
                    }
                        
                }
            }
            double X = x[0] - x[1];
            double N = n[1] - n[0];
            if (X == 0 && N == 0){
                System.out.println("INF");
            }else if (X == 0 && N != 0){
                System.out.println("NONE");
            }else {
                System.out.println((int)Math.floor(N / X));
            }
            
        }
    input.close();
    }
}

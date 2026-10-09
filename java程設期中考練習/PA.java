import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            float k = input.nextFloat()/100;
            float w = input.nextFloat();
            float sum = k * w;
            System.out.println(sum);
        }
    input.close();
    }
}

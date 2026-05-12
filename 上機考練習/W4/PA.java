package W4;
import java.util.*;
public class PA{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            float k = input.nextFloat();
            float w = input.nextFloat();
            float sum = k/100*w;
            System.out.println(sum);
        }
    input.close();
    }
}
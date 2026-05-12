package W9_midterm;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int a = input.nextInt();
            int b = input.nextInt();
            System.out.println(Math.abs(a - b));
        }
    input.close();
    }
}

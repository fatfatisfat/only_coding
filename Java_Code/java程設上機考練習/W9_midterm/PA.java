package W9_midterm;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner (System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            String line = "";
            if (a == 1){
                line += "handsome ";
            }else if (a == 2){
                line += "rich ";
            }else {
                line += "smart ";
            }
            if (b == 1){
                line += "Allcky ";
            }else if (b == 2){
                line += "Jimmy ";
            }else {
                line += "Chen ";
            }
            if (c == 1){
                line += "dances";
            }else if (c == 2){
                line += "eats";
            }else {
                line += "writes";
            }
            System.out.println(line);
        }
        
    input.close();
    }
}

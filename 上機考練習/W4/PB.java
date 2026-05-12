package W4;
import java.util.*;
public class PB {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        String[] adj= {"handsome ", "rich ", "smart "};
        String[] name= {"Allcky ", "Jimmy ", "Chen "};
        String[] verb= {"dances", "eats", "writes"};
        String line = "";

        for (int i=0; i<t; i++){
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();
            switch (a){
                case 1:
                    line = adj[0];
                    break;
                case 2:
                    line = adj[1];
                    break;
                case 3:
                    line = adj[2];
                    break;
            }
            switch (b){
                case 1:
                    line = line + name[0];
                    break;
                case 2:
                    line = line + name[1];
                    break;
                case 3:
                    line = line + name[2];
                    break;
            }
            switch (c){
                case 1:
                    line = line + verb[0];
                    break;
                case 2:
                    line = line + verb[1];
                    break;
                case 3:
                    line = line + verb[2];
                    break;
            }
            System.out.println(line);
        }
    input.close();
    }
}


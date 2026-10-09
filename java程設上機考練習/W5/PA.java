package W5;
import java.util.*;
public class PA {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        String[] adj = {"handsome", "rich", "smart"};
        String[] name = {"Allcky", "Jimmy", "Chen"};
        String[] v = {"dances", "eats", "writes"};

        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();

            String s = adj[a-1] + " " + name[b-1] + " " + v[c-1];
            System.out.println(s);
        }
    input.close();
    }
}

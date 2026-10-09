package W13;
import java.util.*;
public class PF {
    static int count = 0;
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        boolean f = false;
        while (input.hasNext()){
            int t = input.nextInt();
            if (t == 0) break;
            else if(f) System.out.println();
            count = 0;
            hanoi(t, 'A', 'B', 'C');
            f = true;
        }
        input.close();
    }

    public static void hanoi(int disk, char from, char aux, char to){
        if (disk == 1){
            count++;
            System.out.println(count + " - " + from + " to " + to);
            return;
        }
        hanoi(disk-1, from, to, aux);
        
        count++;
        System.out.println(count + " - " + from + " to " + to);
        
        hanoi(disk-1, aux, from, to);
        return;
    }
}
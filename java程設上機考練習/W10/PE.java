package W10;
import java.util.*;
public class PE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            if (t == 0)break;
            int[] n = new int[t];
            for (int i=0; i<t; i++){
                n[i] = input.nextInt();
            }
            for (int i=0; i<t; i++){
                for (int j=0; j<t; j++){
                    if (n[j] == i+1){
                        int temp = n[j];
                        n[j] = n[i];
                        n[i] = temp;
                        break;
                    }
                }
                for (int j=0; j<t-1; j++){
                    System.out.print(n[j] + " ");
                }
                System.out.println(n[t-1]);
            }
        }
    input.close();
    }
}

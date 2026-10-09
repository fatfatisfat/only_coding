import java.util.*;
public class CPE_P4 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        
        for (int i=0; i<t; i++){
            int tlong = input.nextInt();
            int[] train = new int[tlong];
            int count = 0;
            for (int j=0; j<tlong; j++){
                train[j] = input.nextInt();
            }
            for (int j=0; j<tlong; j++){
                boolean swap = false;
                for (int l=0; l<tlong-j-1; l++){
                    if (train[l] > train[l+1]){
                        int s = train[l];
                        train[l] = train[l+1];
                        train[l+1] = s;
                        swap = true;
                        count++;
                    }
                }
                if (!swap) break;
            }
            System.out.println("Optimal train swapping takes " + count + " swaps.");
        }
    input.close();
    }
}

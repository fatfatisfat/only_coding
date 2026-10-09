import java.util.*;
public class CPE_P11_MLE {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            int len = input.nextInt();
            int[] ad = new int[len];
            for (int j=0; j<len; j++){
                ad[j] = input.nextInt();
            }
            
            // for (int j=0; j<len; j++){       //bubble sort
            //     for (int k=j; k<len-1; k++){
            //         if (ad[k] > ad[k+1]){
            //             int c = ad[k];
            //             ad[k] = ad[k+1];
            //             ad[k+1] = c;
            //         }
            //     }
            // }
            Arrays.sort(ad);

            long sum = 0;
            for (int j=0; j<len; j++){
                sum = sum + Math.abs(ad[j] - ad[(len-1)/2]);
            }
            System.out.println(sum);
        }
    input.close();
    }
}

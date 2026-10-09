package W12;
import java.util.*;
public class PC {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int t = input.nextInt();
            if (t == 0) break;
            input.nextLine();
            String[] arr = input.nextLine().split(" ");
            boolean print = false;
            for (int i=0; i<t; i++){
                if (arr[i].equals("A")) arr[i] = "1";
                else if (arr[i].equals("J")) arr[i] = "11";
                else if (arr[i].equals("Q")) arr[i] = "12";
                else if (arr[i].equals("K")) arr[i] = "13";
            }
            boolean[] card = new boolean[14];
            for (String s : arr){
                int n = Integer.parseInt(s);
                if (n == 1){
                    card[0] = true;
                    card[13] = true;
                }else {
                    card[n-1] = true;
                }
            }
            for (int i=0; i<10; i++){
                String[] s = new String[5];
                for (int j=i; j<i+5; j++){
                    if (card[j]){
                    s[j-i] = to_string(j+1);
                    }else break;
                    if (j == i+4){
                        print = true;
                        for (int k=0; k<4; k++) System.out.print(s[k] + " ");
                        System.out.println(s[4]);
                    }
                }
            }
            if (!print) System.out.println("NONE");
            // for (int i=0; i<5; i++){
            //     if (card[i]){
            //         s[count] = to_string(i+1);
            //         count++;
            //     }else {
            //         s = new String[5];
            //         count = 0;
            //     }
            //     if (count == 4){
            //         for (int j=0; j<4; j++) System.out.print(s[j] + " ");
            //         System.out.println(s[4]);
            //         count = 0;
            //     }
            // }
        }
        input.close();
    }
    public static String to_string(int n){
        String s = "";
        if (n == 1 || n == 14) s = "A";
        else if (n == 13) s = "K";
        else if (n == 12) s = "Q";
        else if (n == 11) s = "J";
        else s = Integer.toString(n);
        return s;
    }
}

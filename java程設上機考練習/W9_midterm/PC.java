package W9_midterm;
import java.util.*;
public class PC {

    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for (int i=0; i<t; i++){
            input.nextLine();
            int co = input.nextInt();
            int ro = input.nextInt();
            input.nextLine();
            String[] lines = new String[ro];
            int[] score = new int[lines.length];
            for (int j=0; j<ro; j++){       //讀入字串
                lines[j] = input.next();
            }
            for (int l=0; l<lines.length; l++){      //計算各行分數
                String s = lines[l];
                for (int j=0; j<co; j++){
                    char c = s.charAt(j);
                    for (int k=j+1; k<co; k++){
                        if (c > s.charAt(k)) score[l]++;
                    }
                }
            }
            // for (int n : score){
            //     System.out.print(n + " ");
            // }
            // System.out.println();
            // int count = 0;
            for (int j=0; j<ro - 1; j++){      //按照分數排序
                for (int k=0; k<ro - j - 1; k++){
                    if (score[k] > score[k+1]){
                        int Ntemp = score[k];
                        score[k] = score[k+1];
                        score[k+1] = Ntemp;
                        String Stemp = lines[k];
                        lines[k] = lines[k+1];
                        lines[k+1] = Stemp;
                    }
                    // count++;
                }
            }
            // System.out.println(count);
            for (String line : lines){      //印出
                System.out.println(line);
            }
            System.out.println();
        }
        input.close();
    }
}

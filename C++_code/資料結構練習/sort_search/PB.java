package sort_search;

import java.util.*;

public class PB {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int m = input.nextInt();
            int n = m;
            n = input.nextInt();
            input.nextLine();
            String[] s = input.nextLine().split(" ");
            int len = s.length;
            int arr[] = new int[len];
            for (int i=0; i<len; i++) arr[i] = Integer.parseInt(s[i]);
            System.out.println(1);
            insert(arr.clone(), len, n);
            System.out.println(2);
            bubble(arr.clone(), len, n);
            System.out.println(3);
            selection(arr.clone(), len, n);
        }
        input.close();
    }
    public static void insert(int[] in, int len, int n){
        for (int i=0; i<n; i++){
            int key = in[i];
            int j = i-1;
            while (j >= 0 && in[j] < key){
                in[j+1] = in[j];
                j--;
            }
            in[j+1] = key;
            p(in);
        }
    }
    public static void bubble(int[] bub, int len, int n){
        for (int i=0; i<n; i++){
            for (int j=len-1; j>i; j--){
                if (bub[j] > bub[j-1]){
                    int temp = bub[j];
                    bub[j] = bub[j-1];
                    bub[j-1] = temp;
                }
            }
            p(bub);
        }
    }
    public static void selection(int[] se, int len, int n){
        for (int i=0; i<n; i++){
            int max =Integer.MIN_VALUE;
            int loc = -1;
            for (int j=i; j<len; j++){
                if (se[j] > max){
                    max = se[j];
                    loc = j;
                }
            }
            int temp = se[i];
            se[i] = max;
            se[loc] = temp;
            p(se);
        }
    }
    public static void p(int[] parr){
        System.out.print(parr[0]);
        for (int i=1; i<parr.length; i++){
            System.out.print(" " + parr[i]);
        }
        System.out.println();
    }
}

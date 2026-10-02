package Java_Code.ASM;

import java.util.*;

public class H2_Q1 {
    public static void main(String args[]){
        int[] arr = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
        for (int i=0; i<10; i++) arr[i] += i;
        for (int i=0; i<10; i++) System.out.print(arr[i] + " ");
        System.out.println();
    }
}

package sort_search;

import java.util.*;

public class PC{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int n = input.nextInt();
            if (n == 0) break;
            input.nextLine();
            String[] ss = input.nextLine().split(" ");
            long[] book = new long[ss.length];
            for (int i=0; i<ss.length; i++) book[i] = Integer.parseInt(ss[i]);
            Arrays.sort(book);
            int g = ss.length / 2;
            long[] gb = new long[g];
            for (int i=0; i<g; i++) gb[i] = book[i] + book[ss.length - 1 - i];
            System.out.println(g);
            System.out.print(gb[0]);
            for (int i=1; i<g; i++) System.out.print(" " + gb[i]);
            System.out.println();
        }
        input.close();
    }
}
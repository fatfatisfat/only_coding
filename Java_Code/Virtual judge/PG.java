import java.util.*;
public class PG{
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()) {
            long n1 = input.nextLong();
            long n2 = input.nextLong();
            if (n2 == 1 || n2 == 0 || n2 > n1){   //特殊情況
                System.out.println("Boring!");
                continue;
            }
            boolean boring = false;
            List<Long> row = new ArrayList<>();
            row.add(n1);
            while (n1 > 1){
                if (n1 % n2 != 0){
                    boring = true;
                    break;
                }
                n1 = n1 / n2;
                row.add(n1);
            }
            if (boring || row.get(row.size()-1) != 1){
                System.out.println("Boring!");
            }else {
                for (int i=0; i<row.size() - 1; i++){
                    System.out.print(row.get(i) + " ");
                }
                System.out.println(row.get(row.size()-1));
            }
        }
    input.close();
    }
}
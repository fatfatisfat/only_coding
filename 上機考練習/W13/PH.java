package W13;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            // String notuse = input.nextLine(); //執行前記得改回來
            String s = input.nextLine();
            Map<Character, Integer> arr = new HashMap<>();
            for (char c : s.toCharArray()){
                if (c == ' ') continue;
                arr.put(c, arr.getOrDefault(c, 0)+1);
            }
            List<Map.Entry<Character, Integer>> list = new ArrayList<>(arr.entrySet());
            list.sort((a1, a2) -> {
                int cmp = a2.getValue().compareTo(a1.getValue());
                if (cmp == 0) return a1.getKey().compareTo(a2.getKey());
                return cmp;
            });
            int count = 0;
            for (Map.Entry<Character, Integer> a : list){
                if (a.getValue() == 0) continue;
                System.out.print(a.getKey());
                count++;
                if (count == 3) break;
                System.out.print(" ");
            }
            System.out.println();
        }
        input.close();
    }
}

import java.util.*;
public class CPE_P16 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            String line = input.nextLine();
            Map<Integer, Integer> freq = new HashMap<>();
            for (char c : line.toCharArray()){
                int ascii = (int)c;
                freq.put(ascii, freq.getOrDefault(ascii, 0)+1);
            }
            List<Map.Entry<Integer, Integer>> gosort = new ArrayList<>(freq.entrySet());

            gosort.sort((a, b) -> {
                if (!a.getValue().equals(b.getValue())){
                    return a.getValue() - b.getValue();
                }else {
                    return b.getKey() - a.getKey();
                }
            });

            for (Map.Entry<Integer, Integer> e : gosort){
                System.out.println(e.getKey() + " " + e.getValue());
            }
        }
    input.close();
    }
}

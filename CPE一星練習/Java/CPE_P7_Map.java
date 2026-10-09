import java.util.*;
public class CPE_P7_Map {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        // List<String> lines = new ArrayList<>();
        Map<Character, Integer> m = new HashMap<>();
        for (int i=0; i<t; i++){
            // lines.add(input.nextLine().toLowerCase());
            String line = input.nextLine().toUpperCase();
            for (int j=0; j<line.length(); j++){
                char ch = line.charAt(j);
                if (ch >= 'A' && ch <= 'Z'){
                    m.put(ch, m.getOrDefault(ch, 0)+1);
                }
            }
            
        }
    input.close();
    }
}

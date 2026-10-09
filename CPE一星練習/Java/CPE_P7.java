import java.util.*;
public class CPE_P7 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        char[] letters = new char[26];
        int[] counts = new int[26];

        for (int i='A'; i<='Z'; i++){
            letters[i-'A'] = (char)i;
        }
        
        int t = input.nextInt();
        input.nextLine();
        for (int i=0; i<t; i++){
            String line = input.nextLine().toUpperCase();
            for (int j=0; j<line.length(); j++){
                char ch = line.charAt(j);
                if (ch >= 'A' && ch <= 'Z'){
                    counts[ch-'A']++;
                }
            }
        }

        for (int i=0; i<26-1; i++){
            for (int j=0; j<26-1-i; j++){
                if (counts[j] < counts[j+1]){
                    int n = counts[j];
                    counts[j] = counts[j+1];
                    counts[j+1] = n;
                    char line = letters[j];
                    letters[j] = letters[j+1];
                    letters[j+1] = line;
                }
            }
        }
        for (int i=0; i<26-1; i++){
            if (counts[i] == counts[i+1]){
                if (letters[i] > letters[i+1]){
                    char line = letters[i];
                    letters[i] = letters[i+1];
                    letters[i+1] = line;
                }
            }
        }

        for (int i=0; i<26; i++){
            if (counts[i] == 0) break;
            System.out.print((char)letters[i]);
            System.out.print(' ');
            System.out.println(counts[i]);
        }
    input.close();
    }
}

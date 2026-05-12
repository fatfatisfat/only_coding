package W5;
import java.util.*;
public class PH {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int num = input.nextInt();
            if (num == 0) break;
            char word = input.next().charAt(0);
            int asciiword = (int)word;
            int c = caesar(num, asciiword);
            char cword = (char)c;
            System.out.println(cword);
        }
    input.close();
    }
    public static int caesar(int num, int word){
        word = word + num;
        if (word > 122)word = 96 + (word % 122);
        if (word < 97) word = 123 - (97 - word);
        return word;
    }
}

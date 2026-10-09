import java.util.*;
public class CPE_P5 {
    public static void main(String args[]){
        Scanner input = new Scanner(System.in);
        List<String> lines = new ArrayList<>();

        while (input.hasNextLine()){   //接收句子
            String line = input.nextLine();
            if (line.equals("")) break;
            lines.add(line);
        }
        
        int maxlen = 0;  //找出最長的句子
        for (String line : lines){
            if (line.length() > maxlen){
                maxlen = line.length();
            }
        }

        for (int i=0; i<lines.size(); i++){   //補齊空白
            String sentence = lines.get(i);
            if (sentence.length() < maxlen){
                StringBuilder sb = new StringBuilder(sentence);
                while (sb.length() < maxlen){
                    sb.append(' ');
                }
                lines.set(i, sb.toString());
            }   
        }
        
        for (int i=0; i<maxlen; i++){   //翻轉後印出
            for (int j=lines.size()-1; j>=0; j--){
                System.out.print(lines.get(j).charAt(i));
            }
            System.out.println();
        }
    input.close();
    }
}

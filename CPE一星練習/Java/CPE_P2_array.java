import java.util.*;
public class CPE_P2_array {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        int y = input.nextInt();
        String[][] area = new String[x+1][y+1];
        char[] f = {'E', 'S', 'W', 'N'};
        while (input.hasNext()){
            int x1 = input.nextInt();
            int y1 = input.nextInt();
            char forward = input.next().charAt(0);
            int count = 0;
            boolean lost = false;
            for (int i=0; i<4; i++){
                if (forward == f[i]){
                    forward = f[i];
                    count = i;
                    break;
                }
            }

            String path = input.next();
            for (int i=0; i<path.length(); i++){
                char p = path.charAt(i);
                if (p == 'R'){
                    count = (count+1)%4;
                    forward = f[count];
                }else if (p == 'L'){
                    count = (count+3)%4;
                    forward = f[count];
                }else if (p == 'F'){
                    if ("LOST".equals(area[x1][y1]) && ((forward == 'N' && y1+1 > y)||(forward == 'S' && y1-1 < 0) ||(forward == 'E' && x1+1 > x) ||(forward == 'W' && x1-1 < 0))){
                        continue;
                    }else if (count == 0 && x1+1 <= x){
                        x1++;
                    }else if (count == 2 && x1-1 >= 0){
                        x1--;
                    }else if (count == 3 && y1+1 <= y){
                        y1++;
                    }else if (count == 1 && y1-1 >= 0){
                        y1--;
                    }else {
                        lost = true;
                        area[x1][y1] = "LOST";
                        break;
                    }
                }
            }
            if (lost == true){
                System.out.println(x1 +" " + y1 +" "+ forward +" LOST");
                lost = false;
            }else {
                System.out.println(x1 +" " + y1 +" "+ forward);
            }
        }
    input.close();
    }
}

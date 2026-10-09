import java.util.*;
public class CPE_P1 {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        while (input.hasNext()){
            int a = input.nextInt();
            int b = input.nextInt();
            int hs = round(a, b);
            System.out.println(a +" "+b+" "+hs);
        }
    input.close();
    }
    
    public static int round(int x, int y){
        int hscore = 0;
        if (x>y){
            int ch = x;
            x = y;
            y = ch;
        }
        for (int i=x; i<=y; i++){
            int n = i;
            int count = 1;
            while (n != 1){
                count++;
                if (n%2 == 1){
                    n = n*3+1;  
                }else{
                    n = n/2;
                }
            }
            if (count > hscore){
                hscore = count;
            }
        }
        return hscore;
    }
}
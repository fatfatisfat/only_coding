package Java_Code.ASM;  //確保在資料夾內可執行

import java.util.Arrays;

public class H2_Q5 {
    public static void main(String[] args) {
        int[] fibArray = new int[11];                   

        fibArray[0] = 1;                                
        fibArray[1] = 1;                                

        for (int i = 2; i < fibArray.length; i++) {     
            fibArray[i] = fibArray[i - 1] + fibArray[i - 2]; 
        }

        System.out.println("費氏數列前 11 個數值: " + Arrays.toString(fibArray)); 
    }
}

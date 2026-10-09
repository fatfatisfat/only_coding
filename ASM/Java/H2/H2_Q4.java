package Java_Code.ASM;  //確保在資料夾內可執行

import java.util.Arrays;

public class H2_Q4 {
    public static void main(String[] args) {

        int[] array1 = {10, 20, 30, 40, 50};            
        int[] array2 = {1, 2, 3, 4, 5};                 
        int[] array3 = new int[array1.length];          


        for (int i = 0; i < array1.length; i++) {
            array3[i] = array1[i] + array2[i];          
        }


        System.out.println("第三陣列內容 (向左旋轉前 Before): " + Arrays.toString(array3));


        int temp = array3[0];                           
        for (int i = 0; i < array3.length - 1; i++) {
            array3[i] = array3[i + 1];                  
        }
        array3[array3.length - 1] = temp;               

        System.out.println("第三陣列內容 (向左旋轉後 After):  " + Arrays.toString(array3));
    }
}

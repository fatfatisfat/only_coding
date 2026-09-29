package Java_Code.ASM;

import java.util.Arrays;

public class H2_Q4 {
    public static void main(String[] args) {

        int[] array1 = {10, 20, 30, 40, 50};            ; // 宣告第一個平行陣列
        int[] array2 = {1, 2, 3, 4, 5};                 ; // 宣告第二個平行陣列
        int[] array3 = new int[array1.length];          ; // 宣告第三個陣列，長度與平行陣列相同


        for (int i = 0; i < array1.length; i++) {
            array3[i] = array1[i] + array2[i];          ; // 對應索引元素相加並存入 array3
        }


        System.out.println("第三陣列內容 (向左旋轉前 Before): " + Arrays.toString(array3));


        int temp = array3[0];                           ; // 暫存第一個元素
        for (int i = 0; i < array3.length - 1; i++) {
            array3[i] = array3[i + 1];                  ; // 將後方的元素依序向左前移一位
        }
        array3[array3.length - 1] = temp;               ; // 將原本第一個元素放至最後一個位置

        System.out.println("第三陣列內容 (向左旋轉後 After):  " + Arrays.toString(array3));
    }
}

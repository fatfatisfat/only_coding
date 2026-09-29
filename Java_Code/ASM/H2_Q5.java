package Java_Code.ASM;

import java.util.Arrays;

public class H2_Q5 {
    public static void main(String[] args) {
        int[] fibArray = new int[11];                   ; // 宣告長度為 11 的整數陣列用於儲存費氏數列

        // --- 初始化前兩項 ---
        fibArray[0] = 1;                                ; // 設定第一項為 1
        fibArray[1] = 1;                                ; // 設定第二項為 1

        // --- 迴圈計算第 3 項至第 11 項 (Index 2 到 10) ---
        for (int i = 2; i < fibArray.length; i++) {     ; // 從 Index 2 開始遞增至 Index 10
            fibArray[i] = fibArray[i - 1] + fibArray[i - 2]; // 當前項等於前兩項之和 (F_n = F_n-1 + F_n-2)
        }

        // --- 印出結果陣列 ---
        System.out.println("費氏數列前 11 個數值: " + Arrays.toString(fibArray)); // 輸出陣列內容
    }
}

package ASM.Java.H4;

import java.util.Scanner; // 引入 Scanner

public class H4_Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // 建立輸入物件
        
        while (true) { // 外層迴圈：遊戲主控制
            System.out.print("輸入最小值 (輸入 0 或 -1 結束): ");
            int min = sc.nextInt();
            if (min == 0 || min == -1) break; // 輸入 0 或 -1 結束遊戲
            
            System.out.print("輸入最大值: ");
            int max = sc.nextInt();
            
            // 產生指定範圍內的隨機密碼
            int secret = min + (int)(Math.random() * (max - min + 1));
            int guesses = 0; // 初始化猜測次數
            
            while (true) { // 內層迴圈：猜測環節
                System.out.print("請猜數字 (" + min + "~" + max + "): ");
                int guess = sc.nextInt(); 
                if (guess == 0 || guess == -1) return; // 輸入 0 或 -1 中斷程式
                
                guesses++; // 猜測次數+1
                
                if (guess > secret) {
                    System.out.println("太大了！");    // 猜太大
                } else if (guess < secret) {
                    System.out.println("太小了！");    // 猜太小
                } else {
                    System.out.println("恭喜猜中！總共猜了 " + guesses + " 次。\n");
                    break; // 猜中，跳出內層迴圈以重新開始新遊戲
                }
            }
        }
        sc.close();
    }
}
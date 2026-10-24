package ASM.Java.H4;

import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class H4_Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("輸入姓名: ");
        String name = sc.nextLine();
        
        System.out.print("輸入最大數值範圍: ");
        int maxVal = sc.nextInt();
        
        System.out.print("輸入測驗題數: ");
        int totalQ = sc.nextInt();
        
        int score = 100;
        int deductPt = 100 / totalQ; // 計算每題扣除的分數
        
        // 用來紀錄答錯的題目
        List<String> wrongQuestions = new ArrayList<>();
        
        for (int i = 1; i <= totalQ; i++) {
            int op = (int)(Math.random() * 4); // 0:加, 1:減, 2:乘, 3:除
            int num1 = (int)(Math.random() * maxVal) + 1;
            int num2 = (int)(Math.random() * maxVal) + 1;
            
            int correctAns = 0;
            String qStr = "";
            
            switch(op) {
                case 0: // 加法
                    correctAns = num1 + num2;
                    qStr = num1 + " + " + num2;
                    break;
                case 1: // 減法 (不可以小減大)
                    if (num1 < num2) {
                        int temp = num1; num1 = num2; num2 = temp; // 交換
                    }
                    correctAns = num1 - num2;
                    qStr = num1 + " - " + num2;
                    break;
                case 2: // 乘法
                    correctAns = num1 * num2;
                    qStr = num1 + " * " + num2;
                    break;
                case 3: // 除法 (要能整除)
                    int tempDiv = num1 * num2; // 反向計算出一個絕對能被整除的「被除數」
                    num1 = tempDiv;
                    correctAns = num1 / num2;  // 商數其實就是原本的 num1
                    qStr = num1 + " / " + num2;
                    break;
            }
            
            System.out.print("[Q" + i + "] " + qStr + " = ");
            int userAns = sc.nextInt();
            
            if (userAns == correctAns) {
                System.out.println("-> 答對了！\n");
            } else {
                System.out.println("-> 答錯了！正確答案是 " + correctAns + "\n");
                score -= deductPt; // 扣分
                wrongQuestions.add("[Q" + i + "] " + qStr + " = " + correctAns + " (你的作答: " + userAns + ")");
            }
        }
        
        // --- 結算成績 ---
        System.out.println("=================================");
        System.out.println("--- " + name + " 的測驗結果 ---");
        System.out.println("分數: " + score);
        
        // 等第判斷
        if (score >= 90) {
            System.out.println("等第: 優 (Excellent)");
        } else if (score >= 80) {
            System.out.println("等第: 甲 (Good)");
        } else if (score >= 60) {
            System.out.println("等第: 及格 (Pass)");
        } else {
            System.out.println("等第: 不及格 (Fail)");
        }
        
        // 列印錯題回饋
        if (!wrongQuestions.isEmpty()) {
            System.out.println("\n【答錯題目列表】共錯了 " + wrongQuestions.size() + " 題:");
            for (String wq : wrongQuestions) {
                System.out.println("- " + wq);
            }
        } else {
            System.out.println("\n太棒了！全對無錯題！");
        }
        
        sc.close();
    }
}

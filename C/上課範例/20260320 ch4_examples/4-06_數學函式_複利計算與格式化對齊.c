// Fig. 4.6: fig04_06.c
// 計算複利（Compound interest）
#include <stdio.h>
#include <math.h>   

int main(void)
{
   double principal = 1000.0; // 起始本金
   double rate = .05; // 年利率

   // 輸出表格欄位標題
   printf("%4s%21s\n", "Year", "Amount on deposit");

   // 計算未來十年的存款金額
   for (unsigned int year = 1; year <= 10; ++year) {

      // 使用 pow 函式計算指定年份的新金額
      // 公式為：A = P(1 + r)^n
      double amount = principal * pow(1.0 + rate, year);

      // 輸出表格中的一行資料，金額顯示至小數點後兩位
      printf("%4u%21.2f\n", year, amount);   
   }
}
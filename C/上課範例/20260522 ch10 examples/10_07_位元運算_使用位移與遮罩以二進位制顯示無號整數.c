// 圖 10.7: fig10_07.c
// 以位元形式顯示無號整數
#include <stdio.h>

void displayBits(unsigned int value); // 函式原型宣告

int main(void)
{ 
   unsigned int x; // 儲存使用者輸入的變數

   printf("%s", "請輸入一個非負整數: ");
   scanf("%u", &x);

   displayBits(x);
} 

// 顯示一個無號整數 (unsigned int) 的二進位位元
void displayBits(unsigned int value)
{ 
   // 定義遮罩 (displayMask) 並將 1 向左位移 31 位元（設最高位元為 1）
   unsigned int displayMask = 1 << 31; 

   printf("%10u = ", value);

   // 依序檢查並輸出 32 個位元
   for (unsigned int c = 1; c <= 32; ++c) { 
      putchar(value & displayMask ? '1' : '0');
      value <<= 1; // 將數值向左位移 1 位元      

      if (c % 8 == 0) { // 每輸出 8 個位元就印出一個空格
         putchar(' ');
      } 
   } 

   putchar('\n');
}
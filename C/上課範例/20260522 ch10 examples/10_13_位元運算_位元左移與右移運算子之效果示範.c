// 圖 10.13: fig10_13.c
// 使用位元位移運算子 (Bitwise shift operators)
#include <stdio.h>

void displayBits(unsigned int value); // 函式原型宣告

int main(void)
{ 
   unsigned int number1 = 960; // 初始化 number1

   // 示範位元左移 (Bitwise left shift)
   puts("\n左移的結果：");
   displayBits(number1);
   puts("使用左移運算子 << 向左位移 8 個位元後的結果為：");
   displayBits(number1 << 8);

   // 示範位元右移 (Bitwise right shift)
   puts("\n右移的結果：");
   displayBits(number1);
   puts("使用右移運算子 >> 向右位移 8 個位元後的結果為：");
   displayBits(number1 >> 8);
} 

// 顯示一個無號整數 (unsigned int) 的二進位位元
void displayBits(unsigned int value)
{    
   // 宣告遮罩 (displayMask) 並將 1 向左位移 31 位元（設最高位元為 1）
   unsigned int displayMask = 1 << 31;

   printf("%7u = ", value);

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

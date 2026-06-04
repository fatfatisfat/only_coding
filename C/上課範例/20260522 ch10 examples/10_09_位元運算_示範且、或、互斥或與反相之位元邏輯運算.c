// 圖 10.9: fig10_09.c
// 使用位元 AND、位元 inclusion OR（選言）、
// 位元 exclusive OR（互斥或）以及位元反相運算子
#include <stdio.h>

void displayBits(unsigned int value); // 函式原型宣告

int main(void)
{ 
   // 示範位元 AND (&)
   unsigned int number1 = 65535;
   unsigned int mask = 1;
   puts("將下列數值進行結合：");
   displayBits(number1);
   displayBits(mask);
   puts("使用位元 AND 運算子 & 的結果為：");
   displayBits(number1 & mask);

   // 示範位元 inclusive OR (|)
   number1 = 15;
   unsigned int setBits = 241;
   puts("\n將下列數值進行結合：");
   displayBits(number1);
   displayBits(setBits);
   puts("使用位元 inclusive OR 運算子 | 的結果為：");
   displayBits(number1 | setBits);

   // 示範位元 exclusive OR (^)
   number1 = 139;
   unsigned int number2 = 199;
   puts("\n將下列數值進行結合：");
   displayBits(number1);
   displayBits(number2);
   puts("使用位元 exclusive OR 運算子 ^ 的結果為：");
   displayBits(number1 ^ number2);

   // 示範位元反相 (~)
   number1 = 21845;
   puts("\n下列數值的一補數（反相）：");
   displayBits(number1);
   puts("結果為：");
   displayBits(~number1);
} 

// 顯示一個無號整數 (unsigned int) 的二進位位元
void displayBits(unsigned int value)
{ 
   // 宣告遮罩 (displayMask) 並將 1 向左位移 31 位元（設最高位元為 1）
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
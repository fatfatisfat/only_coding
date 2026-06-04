// Fig. 4.5: fig04_05.c  
// 使用 for 迴圈進行累加運算
#include <stdio.h>

int main(void)
{
   unsigned int sum = 0; // 初始化總和變數

   // 從 2 開始，每次增加 2，直到數值達到 100
   for (unsigned int number = 2; number <= 100; number += 2) {
      sum += number; // 將當前的偶數累加到 sum
   }

   printf("Sum is %u\n", sum); 
}
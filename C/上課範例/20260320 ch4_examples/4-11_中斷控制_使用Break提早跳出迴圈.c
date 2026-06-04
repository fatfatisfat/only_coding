// Fig. 4.11: fig04_11.c
// 在 for 迴圈中使用 break 陳述式
#include <stdio.h>

int main(void)
{
   unsigned int x; // 在此宣告變數 x，以便在迴圈結束後仍能使用
   
   // 執行 10 次迴圈
   for (x = 1; x <= 10; ++x) {

      // 如果 x 等於 5，則終止迴圈
      if (x == 5) {
         break; // 只有在 x 為 5 時中斷迴圈
      } 

      printf("%u ", x); 
   } 
   
   printf("\nBroke out of loop at x == %u\n", x);
}
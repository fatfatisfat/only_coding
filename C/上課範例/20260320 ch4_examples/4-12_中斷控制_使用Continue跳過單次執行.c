// Fig. 4.12: fig04_12.c
// 在 for 迴圈中使用 continue 陳述式
#include <stdio.h>

int main(void)
{
   // 執行 10 次迴圈
   for (unsigned int x = 1; x <= 10; ++x) {

      // 如果 x 等於 5，則繼續執行迴圈的下一次疊代
      if (x == 5) {   
         continue; // 跳過迴圈主體中剩餘的程式碼
      }

      printf("%u ", x); // 顯示 x 的值
   } 
   
   puts("\nUsed continue to skip printing the value 5");
}
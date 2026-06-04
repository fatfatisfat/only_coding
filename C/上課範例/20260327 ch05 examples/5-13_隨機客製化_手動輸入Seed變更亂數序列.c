// Fig. 5.13: fig05_13.c
// 隨機化的擲骰子程式。
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
   unsigned int seed; // 用來設定隨機數產生器種子的數值
   
   printf("%s", "Enter seed: ");
   scanf("%u", &seed); // 注意：無號整數使用 %u

   srand(seed); // 設定隨機數產生器的種子（隨機化）
   
   // 執行 10 次迴圈
   for (unsigned int i = 1; i <= 10; ++i) {

      // 挑選一個 1 到 6 的隨機數並輸出
      printf("%10d", 1 + (rand() % 6));
      
      // 如果計數器可以被 5 整除，就輸出換行字元切換到新的一行
      if (i % 5 == 0) {
         puts("");
      } 
   } 
}
// Fig. 5.11: fig05_11.c
// 透過 1 + rand() % 6 產生的平移、縮放隨機整數。
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   // 執行 20 次迴圈
   for (unsigned int i = 1; i <= 20; ++i) {
  
      // 挑選一個 1 到 6 的隨機數並輸出
      printf("%10d", 1 + (rand() % 6));

      // 如果計數器可以被 5 整除，就輸出換行字元切換到新的一行
      if (i % 5 == 0) {
         puts("");
      } 
   } 
}
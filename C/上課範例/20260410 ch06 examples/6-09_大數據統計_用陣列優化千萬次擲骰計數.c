// Fig. 6.9: fig06_09.c
// 模擬擲六面骰子 60,000,000 次
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

// 主程式開始執行
int main(void)
{
   unsigned int frequency[SIZE] = {0}; // 將所有計數歸零    

   srand(time(NULL)); // 設定隨機數產生器的種子

   // 模擬擲骰子 60,000,000 次
   for (unsigned int roll = 1; roll <= 60000000; ++roll) {
      size_t face = 1 + rand() % 6;
      ++frequency[face]; // 取代了原本需要使用 switch 判斷點數的繁瑣寫法
   }                           

   printf("%s%17s\n", "Face", "Frequency");

   // 以表格格式輸出點數 1 到 6 的出現次數
   for (size_t face = 1; face < SIZE; ++face) {
      printf("%4d%17d\n", face, frequency[face]);
   } 
}
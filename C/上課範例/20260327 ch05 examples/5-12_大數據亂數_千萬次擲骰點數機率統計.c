// Fig. 5.12: fig05_12.c
// 模擬擲六面骰子 60,000,000 次。
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
   unsigned int frequency1 = 0; // 擲出 1 點的計數器
   unsigned int frequency2 = 0; // 擲出 2 點的計數器
   unsigned int frequency3 = 0; // 擲出 3 點的計數器
   unsigned int frequency4 = 0; // 擲出 4 點的計數器
   unsigned int frequency5 = 0; // 擲出 5 點的計數器
   unsigned int frequency6 = 0; // 擲出 6 點的計數器

   // 執行迴圈 60,000,000 次並統計結果
   for (unsigned int roll = 1; roll <= 60000000; ++roll) {
      int face = 1 + rand() % 6; // 隨機產生 1 到 6 的數值

      // 判斷點數並累加對應的計數器
      switch (face) {

         case 1: // 擲出 1 點
            ++frequency1;
            break;

         case 2: // 擲出 2 點
            ++frequency2;
            break;
       
         case 3: // 擲出 3 點
            ++frequency3;
            break;
         
         case 4: // 擲出 4 點
            ++frequency4;
            break;
         
         case 5: // 擲出 5 點
            ++frequency5;
            break;
         
         case 6: // 擲出 6 點
            ++frequency6;
            break; // 可選的
      } 
   } 
   
   // 以表格格式顯示統計結果
   printf("%s%13s\n", "Face", "Frequency");
   printf("   1%13u\n", frequency1);
   printf("   2%13u\n", frequency2);
   printf("   3%13u\n", frequency3);
   printf("   4%13u\n", frequency4);
   printf("   5%13u\n", frequency5);
   printf("   6%13u\n", frequency6);
}
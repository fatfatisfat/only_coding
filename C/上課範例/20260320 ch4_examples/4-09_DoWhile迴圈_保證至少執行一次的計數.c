// Fig. 4.9: fig04_09.c
// 使用 do...while 迭代敘述
#include <stdio.h>

int main(void)
{
   unsigned int counter = 1;
   
   // do...while 迴圈保證迴圈主體至少會執行一次
   do {                                               
      printf("%u  ", counter);    
   } while (++counter <= 10); // 先遞增 counter，再檢查條件是否小於或等於 10
}
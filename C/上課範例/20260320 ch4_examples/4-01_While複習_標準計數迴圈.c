// Fig. 4.1: fig04_01.c
// 計數器控制的迭代 (Counter-controlled iteration)
#include <stdio.h>

int main(void)
{
   unsigned int counter = 1; // 初始化計數器
   
   // 當 counter 小於等於 10 時持續執行迴圈
   while (counter <= 10) { // 迭代條件
      printf ("%u\n", counter); 
      ++counter; // 遞增計數器
   }
}
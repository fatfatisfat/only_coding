// Fig. 4.2: fig04_02.c
// 使用 for 語句進行計數器控制的迭代
#include <stdio.h>

int main(void)
{
   // 初始化、迭代條件以及遞增量，皆包含在 for 語句的標頭中。
   for (unsigned int counter = 1; counter <= 10; ++counter) {
      printf("%u\n", counter);
   } 
}
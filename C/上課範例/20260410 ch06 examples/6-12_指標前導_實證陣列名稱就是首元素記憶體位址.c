// Fig. 6.12: fig06_12.c
// 陣列名稱與陣列第一個元素的記憶體位址相同。
#include <stdio.h>

// 主程式開始執行
int main(void)
{
   char array[5]; // 定義一個大小為 5 的字元陣列

   printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
      array, &array[0], &array);                           
}
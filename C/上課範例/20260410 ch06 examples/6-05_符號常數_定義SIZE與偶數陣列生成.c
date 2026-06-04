// Fig. 6.5: fig06_05.c
// 將陣列 s 的元素初始化為 2 到 10 的偶數。
#include <stdio.h>
#define SIZE 5 // 陣列的最大大小

// 主程式開始執行
int main(void)
{   
   // 符號常數 SIZE 可用來指定陣列的大小
   int s[SIZE]; // 陣列 s 擁有 SIZE 個元素

   for (size_t j = 0; j < SIZE; ++j) { // 設定各元素的值
      s[j] = 2 + 2 * j;                                 
   }                                            

   printf("%s%13s\n", "Element", "Value");

   // 以表格格式輸出陣列 s 的內容
   for (size_t j = 0; j < SIZE; ++j) {   
      printf("%7u%13d\n", j, s[j]);
   } 
}
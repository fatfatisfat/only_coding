// Fig. 6.3: fig06_03.c
// 將陣列的元素全部初始化為零。
#include <stdio.h>

// 主程式開始執行
int main(void)
{
   int n[5]; // n 是一個包含 5 個整數的陣列
   
   // 使用迴圈將陣列 n 的元素設為 0          
   for (size_t i = 0; i < 5; ++i) {                               
      n[i] = 0; // 將索引 i 位置的元素設為 0
   }                                          
   
   printf("%s%13s\n", "Element", "Value");

   // 以表格格式輸出陣列 n 的內容
   for (size_t i = 0; i < 5; ++i) {                   
      printf("%7u%13d\n", i, n[i]);           
   }                                    
}
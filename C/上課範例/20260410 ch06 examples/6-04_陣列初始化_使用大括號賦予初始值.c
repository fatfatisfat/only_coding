// Fig. 6.4: fig06_04.c
// 使用初始化列表來初始化陣列的元素。
#include <stdio.h>

// 主程式開始執行
int main(void)
{
   // 使用初始化列表來初始化陣列 n           
   int n[5] = {32, 27, 64, 18, 95};
   
   printf("%s%13s\n", "Element", "Value");
   
   // 以表格格式輸出陣列的內容
   for (size_t i = 0; i < 5; ++i) {
      printf("%7u%13d\n", i, n[i]);
   } 
}
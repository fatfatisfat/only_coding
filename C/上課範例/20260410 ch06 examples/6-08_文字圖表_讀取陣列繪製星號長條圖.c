// Fig. 6.8: fig06_08.c
// 顯示直方圖。
#include <stdio.h>
#define SIZE 5

// 主程式開始執行
int main(void)
{
   // 使用初始化列表來初始化陣列 n
   int n[SIZE] = {19, 3, 15, 7, 11};

   printf("%s%13s%17s\n", "Element", "Value", "Histogram");

   // 針對陣列 n 的每個元素，輸出直方圖的圖條（星號長條）
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%7u%13d        ", i, n[i]) ;

      for (int j = 1; j <= n[i]; ++j) { // 印出單一圖條
         printf("%c", '*');                                  
      }                                     

      puts(""); // 在圖條末尾輸出換行字元
   } 
}
// Fig. 6.6: fig06_06.c
// 計算陣列元素的總和。
#include <stdio.h>
#define SIZE 12

// 主程式開始執行
int main(void)
{
   // 使用初始化列表來初始化陣列
   int a[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
   int total = 0; // 用來儲存陣列總和的變數
   
   // 累加陣列 a 的所有元素內容   
   for (size_t i = 0; i < SIZE; ++i) {    
      total += a[i];               
   }                     

   printf("Total of array element values is %d\n", total);
}
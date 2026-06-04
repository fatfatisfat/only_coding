// Fig. 6.11: fig06_11.c
// 靜態陣列若未明確初始化，會自動初始化為零。
#include <stdio.h>

void staticArrayInit(void); // 函式原型宣告
void automaticArrayInit(void); // 函式原型宣告

// 主程式開始執行
int main(void)
{
   puts("First call to each function:");
   staticArrayInit();   
   automaticArrayInit();

   puts("\n\nSecond call to each function:");
   staticArrayInit();   
   automaticArrayInit();
}
 
// 示範靜態本機陣列的函式
void staticArrayInit(void)
{
   // 在函式第一次被呼叫前，將元素初始化為 0，且在程式執行期間只初始化一次
   static int array1[3];

   puts("\nValues on entering staticArrayInit:");

   // 輸出 array1 的內容
   for (size_t i = 0; i <= 2; ++i) {
      printf("array1[%u] = %d  ", i, array1[i]);
   } 

   puts("\nValues on exiting staticArrayInit:");

   // 修改並輸出 array1 的內容
   for (size_t i = 0; i <= 2; ++i) {
      printf("array1[%u] = %d  ", i, array1[i] += 5);
   } 
} 

// 示範自動本機陣列的函式
void automaticArrayInit(void)
{
   // 每次呼叫函式時，都會重新將元素初始化
   int array2[3] = { 1, 2, 3 };

   puts("\n\nValues on entering automaticArrayInit:");

   // 輸出 array2 的內容
   for (size_t i = 0; i <= 2; ++i) {
      printf("array2[%u] = %d  ", i, array2[i]);
   } 

   puts("\nValues on exiting automaticArrayInit:");

   // 修改並輸出 array2 的內容
   for (size_t i = 0; i <= 2; ++i) {
      printf("array2[%u] = %d  ", i, array2[i] += 5);
   } 
}
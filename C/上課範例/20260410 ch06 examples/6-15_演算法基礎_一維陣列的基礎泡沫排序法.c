// Fig. 6.15: fig06_15.c
// 將陣列的值依升冪（由小到大）順序排序。
#include <stdio.h>
#define SIZE 10

// 主程式開始執行
int main(void) 
{   
   // 初始化陣列 a
   int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37}; 

   puts("Data items in original order");
   
   // 輸出原始陣列
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   // 氣泡排序                                         
   // 控制排序回合數的迴圈                    
   for (unsigned int pass = 1; pass < SIZE; ++pass) {                                                
                                                                             
      // 控制每回合比較次數的迴圈   
      for (size_t i = 0; i < SIZE - 1; ++i) {                                                     
                                                                             
         // 比較相鄰的元素，如果第一個元素大於第二個元素則進行交換           
         if (a[i] > a[i + 1]) {                        
            int hold = a[i];                                                   
            a[i] = a[i + 1];                             
            a[i + 1] = hold;                               
         }                                       
      }                                   
   }                                      

   puts("\nData items in ascending order");

   // 輸出排序後的陣列
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   puts("");
}
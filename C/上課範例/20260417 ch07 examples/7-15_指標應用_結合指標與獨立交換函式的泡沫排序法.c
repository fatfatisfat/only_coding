// Fig. 7.15: fig07_15.c
// 將數值存入陣列、將數值依遞增順序排序，並印出結果陣列。
#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, const size_t size); 

int main(void)
{
   // 初始化陣列 a
   int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   
   puts("原始順序的資料項目");

   // 巡訪陣列 a
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);
   } 

   bubbleSort(a, SIZE); // 排序陣列

   puts("\n遞增排序後的資料項目");
   
   // 巡訪陣列 a
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%4d", a[i]);   
   } 

   puts("");
} 

// 使用氣泡排序演算法對整數陣列進行排序
void bubbleSort(int * const array, const size_t size)
{
   void swap(int *element1Ptr, int *element2Ptr); // 函式原型宣告
   
   // 控制排序回合的迴圈
   for (unsigned int pass = 0; pass < size - 1; ++pass) {

      // 控制每回合比較次數的迴圈
      for (size_t j = 0; j < size - 1; ++j) {

         // 如果相鄰的元素順序不對（前大後小），就將它們交換
         if (array[j] > array[j + 1]) {
            swap(&array[j], &array[j + 1]);
         } 
      } 
   } 
}

// 交換 element1Ptr 和 element2Ptr 所指向之記憶體位置的值
void swap(int *element1Ptr, int *element2Ptr)            
{                                                              
   int hold = *element1Ptr;                                
   *element1Ptr = *element2Ptr;                            
   *element2Ptr = hold;                                    
}
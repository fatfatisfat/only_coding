// Fig. 7.26: fig07_26.c
// 使用函式指標的多功能排序程式。
#include <stdio.h>
#define SIZE 10

// 函式原型宣告
void bubble(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main(void)
{
   // 初始化未排序的陣列 a
   int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

   printf("%s", "輸入 1 依遞增順序排序，\n" 
                "輸入 2 依遞減順序排序: ");
   int order; // 1 表示遞增排序，2 表示遞減排序
   scanf("%d", &order);

   puts("\n原始順序的資料項目");
   
   // 輸出原始陣列
   for (size_t counter = 0; counter < SIZE; ++counter) {
      printf("%5d", a[counter]);
   } 

   // 依遞增順序排序陣列；傳遞 ascending 函式作為引數
   // 以指定遞增的排序規則
   if (order == 1) {
      bubble(a, SIZE, ascending);
      puts("\n遞增排序後的資料項目");
   }  
   else { // 傳遞 descending 函式
      bubble(a, SIZE, descending);
      puts("\n遞減排序後的資料項目");
   }

   // 輸出排序後的陣列
   for (size_t counter = 0; counter < SIZE; ++counter) {
      printf("%5d", a[counter]);   
   } 

   puts("\n");
} 

// 多功能氣泡排序；參數 compare 是一個指向
// 比較函式的指標，用來決定排序的順序
void bubble(int work[], size_t size, int (*compare)(int a, int b))
{
   void swap(int *element1Ptr, int *element2ptr); // 函式原型宣告

   // 控制排序回合的迴圈
   for (unsigned int pass = 1; pass < size; ++pass) {

      // 控制每回合比較次數的迴圈
      for (size_t count = 0; count < size - 1; ++count) {

         // 如果相鄰的元素順序不對，就將它們交換
         if ((*compare)(work[count], work[count + 1])) {
            swap(&work[count], &work[count + 1]);
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

// 判定遞增排序時，元素順序是否不正確
int ascending(int a, int b)                                  
{                                                              
   return b < a; // 如果 b 小於 a 則應該交換          
}

// 判定遞減排序時，元素順序是否不正確
int descending(int a, int b)                                 
{                                                              
   return b > a; // 如果 b 大於 a 則應該交換       
}
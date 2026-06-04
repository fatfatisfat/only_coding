// Fig. 6.18: fig06_18.c
// 陣列的線性搜尋。
#include <stdio.h>
#define SIZE 100

// 函式原型宣告
size_t linearSearch(const int array[], int key, size_t size); 

// 主程式開始執行
int main(void)
{   
   int a[SIZE]; // 建立陣列 a

   // 建立測試資料
   for (size_t x = 0; x < SIZE; ++x) { 
      a[x] = 2 * x;
   } 

   printf("Enter integer search key: ");
   int searchKey; // 準備在陣列 a 中尋找的值
   scanf("%d", &searchKey);

   // 嘗試在陣列 a 中尋找目標值（searchKey） 
   size_t index = linearSearch(a, searchKey, SIZE);

   // 顯示搜尋結果
   if (index != -1) {
      printf("Found value at index %d\n", index);
   } 
   else {
      puts("Value not found");
   } 
}

// 將目標值與陣列中的每個元素逐一比較，直到找到位置，
// 或是到達陣列末尾為止；如果找到目標值則回傳該元素的索引，
// 若找不到則回傳 -1。
size_t linearSearch(const int array[], int key, size_t size)      
{                                                                                                      
   // 走訪整個陣列                                                                          
   for (size_t n = 0; n < size; ++n) {                                                                    
                                                                                                       
      if (array[n] == key) {                                     
         return n; // 回傳目標值所在的位置（索引）                      
      }                                                                  
   }                                                                                    
                                                                                                       
   return -1; // 找不到目標值                                    
}
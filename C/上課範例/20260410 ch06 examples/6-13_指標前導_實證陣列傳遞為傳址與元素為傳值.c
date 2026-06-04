// Fig. 6.13: fig06_13.c
// 將陣列與單一陣列元素傳遞給函式。
#include <stdio.h>
#define SIZE 5

// 函式原型宣告
void modifyArray(int b[], size_t size);
void modifyElement(int e);               

// 主程式開始執行
int main(void)
{
   int a[SIZE] = { 0, 1, 2, 3, 4 }; // 初始化陣列 a

   puts("Effects of passing entire array by reference:\n\nThe "
      "values of the original array are:");

   // 輸出原始陣列
   for (size_t i = 0; i < SIZE; ++i) { 
      printf("%3d", a[i]);
   } 

   puts(""); // 輸出換行

   modifyArray(a, SIZE); // 以傳址（by reference）方式將陣列 a 傳遞給 modifyArray                         
   puts("The values of the modified array are:");

   // 輸出修改後的陣列
   for (size_t i = 0; i < SIZE; ++i) {
      printf("%3d", a[i]);
   } 

   // 輸出 a[3] 的值
   printf("\n\n\nEffects of passing array element "
      "by value:\n\nThe value of a[3] is %d\n", a[3]);
   
   modifyElement(a[3]); // 以傳值（by value）方式將陣列元素 a[3] 傳遞出去

   // 輸出 a[3] 的值
   printf("The value of a[3] is %d\n", a[3]);
}

// 在 modifyArray 函式中，「b」指向記憶體中原始的陣列「a」
void modifyArray(int b[], size_t size)                               
{                                                                                                     
   // 將每個陣列元素乘以 2                                        
   for (size_t j = 0; j < size; ++j) {                                                                
      b[j] *= 2; // 這會實際修改到呼叫端的原始陣列               
   }                                                                                
} 

// 在 modifyElement 函式中，「e」是從 main 傳遞進來的
// 陣列元素 a[3] 的本機複本（傳值呼叫）
void modifyElement(int e)                                       
{                                                                                                     
   // 將參數乘以 2並印出
   printf("Value in modifyElement is %d\n", e *= 2);            
}
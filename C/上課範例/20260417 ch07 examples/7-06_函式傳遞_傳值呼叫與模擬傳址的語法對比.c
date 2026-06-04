// Fig. 7.6: fig07_06.c
// 使用傳值呼叫（pass-by-value）來計算變數的三次方。
#include <stdio.h>

int cubeByValue(int n); // 函式原型宣告

int main(void)
{
   int number = 5; // 初始化 number

   printf("number 的原始值為 %d", number);
   
   // 將 number 的值複製一份傳遞給 cubeByValue，並將回傳結果重新賦值給 number
   number = cubeByValue(number);

   printf("\nnumber 的新值為 %d\n", number);
} 

// 計算並回傳整數引數的三次方
int cubeByValue(int n)                                                                                
{                                                                                                    
   return n * n * n; // 計算區域變數 n 的三次方並回傳結果
}
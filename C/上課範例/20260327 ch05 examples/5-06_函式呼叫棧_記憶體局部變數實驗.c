// Fig. 5.6: fig05_06.c
// 透過 square 函式展示函式呼叫堆疊（Function call stack）與堆疊框架（Stack frames）。
#include <stdio.h>

int square(int); // square 函式的原型宣告

int main()
{
   int a = 10; // 要計算平方的數值（main 函式中的區域自動變數）

   printf("%d squared: %d\n", a, square(a)); // 顯示 a 的平方值
} 

// 回傳一個整數的平方
int square(int x) // x 是一個區域變數
{
   return x * x; // 計算平方並回傳結果
}
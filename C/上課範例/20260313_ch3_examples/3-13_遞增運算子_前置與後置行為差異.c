// Fig. 3.13: fig03_13.c
// 前置遞增與後置遞增運算範例
#include <stdio.h>

// main 函式開始程式執行
int main( void )
{
   int c; // 定義變數
   
   // 展示後置遞增 (Postincrement)
   c = 5; // 將 5 指派給 c
   printf( "%d\n", c ); // 印出 5
   printf( "%d\n", c++ ); // 先印出 5，然後執行遞增
   printf( "%d\n\n", c ); // 印出遞增後的 6
   
   // 展示前置遞增 (Preincrement)
   c = 5; // 將 5 指派給 c
   printf( "%d\n", c ); // 印出 5
   printf( "%d\n", ++c ); // 先執行遞增，然後印出 6
   printf( "%d\n", c ); // 印出 6
} // main 函式結束
// Fig. 3.6: fig03_06.c
// 使用計數器控制迭代的班級平均成績程式
#include <stdio.h>

// main 函式開始程式執行
int main( void )
{
   unsigned int counter; // 下一個要輸入的成績編號
   int grade; // 成績數值
   int total; // 使用者輸入成績的總和
   int average; // 成績平均值
   
   // 初始化階段
   total = 0; // 初始化總和
   counter = 1; // 初始化迴圈計數器
   
   // 處理階段
   while ( counter <= 10 ) { // 迴圈執行 10 次
      printf( "%s", "Enter grade: " ); // 提示輸入
      scanf( "%d", &grade ); // 讀取使用者輸入的成績
      total = total + grade; // 將成績加入總和
      counter = counter + 1; // 累加計數器
   } // while 迴圈結束
   
   // 終止階段
   average = total / 10; // 整數除法

   printf( "Class average is %d\n", average ); // 顯示結果
} // main 函式結束
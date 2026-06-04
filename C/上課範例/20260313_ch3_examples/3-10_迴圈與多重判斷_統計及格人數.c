// Fig. 3.13: fig03_10.c
// 考試結果分析程式
#include <stdio.h>

// main 函式開始程式執行
int main( void )
{
   // 在定義時初始化變數
   unsigned int passes = 0;   // 及格人數
   unsigned int failures = 0; // 不及格人數
   unsigned int student = 1;  // 學生計數器
   int result;                // 單一考試結果

   // 使用計數器控制的迴圈來處理 10 位學生的資料
   while ( student <= 10 ) {

      // 提示使用者輸入並獲取數值
      printf( "%s", "Enter result ( 1=pass,2=fail ): " );
      scanf( "%d", &result );

      // 如果結果為 1，則增加及格人數
      if ( result == 1 ) {    
         passes = passes + 1;
      } // end if
      else { // 否則，增加不及格人數
         failures = failures + 1;
      } // end else

      student = student + 1; // 增加學生計數器
   } // end while

   // 終止階段：顯示及格與不及格的人數
   printf( "Passed %u\n", passes );
   printf( "Failed %u\n", failures );

   // 如果有超過 8 位學生及格，列印 "Bonus to instructor!"
   if ( passes > 8 ) {
      puts( "Bonus to instructor!" );
   } // end if
} // end function main
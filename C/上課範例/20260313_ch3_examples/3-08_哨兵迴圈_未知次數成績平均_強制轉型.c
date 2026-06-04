// Fig. 3.8: fig03_08.c
// 使用哨兵值控制迭代的班級平均成績程式
#include <stdio.h>

// main 函式開始程式執行
int main( void )
{
   unsigned int counter; // 已輸入成績的數量
   int grade; // 成績數值
   int total; // 成績總和

   float average; // 用於儲存平均值（帶有小數點）
   
   // 初始化階段
   total = 0; // 初始化總和
   counter = 0; // 初始化迴圈計數器
   
   // 處理階段
   // 從使用者獲取第一個成績
   printf( "%s", "Enter grade, -1 to end: " ); // 提示輸入
   scanf( "%d", &grade ); // 讀取使用者輸入的成績
   
   // 當輸入的值不是哨兵值時，執行迴圈
   while ( grade != -1 ) {
      total = total + grade; // 將成績加入總和
      counter = counter + 1; // 累加計數器
      
      // 從使用者獲取下一個成績
      printf( "%s", "Enter grade, -1 to end: " ); // 提示輸入
      scanf("%d", &grade); // 讀取下一個成績               
   } // while 迴圈結束

   // 終止階段
   // 如果使用者至少輸入了一個成績
   if ( counter != 0 ) {

      // 計算所有輸入成績的平均值
      average = ( float ) total / counter; // 強制轉型以避免整數除法造成的截斷誤差

      // 顯示平均值，並設定精確度至小數點後兩位
      printf( "Class average is %.2f\n", average );   
   } // if 判斷結束
   else { // 如果沒有輸入任何成績，輸出提示訊息
      puts( "No grades were entered" );
   } // else 結束
} // main 函式結束
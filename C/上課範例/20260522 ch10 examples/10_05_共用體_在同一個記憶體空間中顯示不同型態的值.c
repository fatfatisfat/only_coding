// 圖 10.5: fig10_05.c
// 以兩種成員資料型態顯示共用體 (union) 的值
#include <stdio.h>

// 定義共用體 number
union number {               
   int x;                    
   double y;                 
}; 

int main(void)
{ 
   union number value; // 宣告共用體變數
   
   value.x = 100; // 將整數放入共用體中
   printf("%s\n%s\n%s\n  %d\n\n%s\n  %f\n\n\n",
      "將 100 存入整數成員 (int member)", 
      "並印出兩個成員的值。",
      "整數 (int):", value.x, 
      "倍精確度浮點數 (double):", value.y);
   
   value.y = 100.0; // 將 double 浮點數放入同一個共用體中
   printf("%s\n%s\n%s\n  %d\n\n%s\n  %f\n",
      "將 100.0 存入浮點數成員 (floating member)",
      "並印出兩個成員的值。",
      "整數 (int):", value.x, 
      "倍精確度浮點數 (double):", value.y);
}
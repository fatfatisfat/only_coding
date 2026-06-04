// 圖 9.13: fig09_13.c
// 使用空格旗標 (space flag)
// 且該數值前面不帶有 + 或 - 符號
#include <stdio.h>

int main(void)
{ 
   // 正數 547 前方會自動留一個空格，以便與負數的負號 '-' 對齊
   printf("% d\n% d\n", 547, -547);
}
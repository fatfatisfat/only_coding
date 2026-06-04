// 圖 9.23: fig09_23.c
// 輸入具有欄位寬度的資料
#include <stdio.h>

int main(void)
{ 
   int x;
   int y;
   
   printf("%s", "請輸入一個六位數的整數: ");
   scanf_s("%2d%d", &x, &y); // %2d 會讀取前 2 個數位存入 x，剩下的存入 y

   printf("輸入的整數分別為 %d 與 %d\n", x, y);
}
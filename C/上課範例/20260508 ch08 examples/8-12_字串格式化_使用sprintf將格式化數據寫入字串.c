// 圖 8.12: fig08_12.c
// 使用 sprintf 函式
#include <stdio.h>
#define SIZE 80

int main(void)
{ 
   int x; // 用來儲存輸入的整數值 x
   double y; // 用來儲存輸入的倍精度浮點數值 y

   puts("請輸入一個整數和一個雙精度浮點數：");
   scanf("%d%lf", &x, &y);

   char s[SIZE]; // 建立字元陣列
   // 將格式化後的資料寫入字元陣列 s 中
   sprintf(s, "整數:%6d\n浮點數:%7.2f", x, y);
   
   printf("%s\n%s\n", "儲存於陣列 s 中的格式化輸出為：", s);
}
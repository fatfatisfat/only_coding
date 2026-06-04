// 圖 9.18: fig09_18.c
// 使用整數格式指定字讀取輸入資料
#include <stdio.h>

int main(void)
{ 
   int a; 
   int b; 
   int c; 
   int d; 
   int e; 
   int f; 
   int g; 

   puts("請輸入七個整數：");
   scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);

   puts("\n以十進位整數顯示的輸入結果為：");
   printf("%d %d %d %d %d %d %d\n", a, b, c, d, e, f, g);
}
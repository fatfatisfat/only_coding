// 圖 9.20: fig09_20.c
// 讀取字元與字串
#include <stdio.h>

int main(void)
{ 
   char x;      
   char y[9]; 
   
   printf("%s", "請輸入一個字串: ");
   scanf("%c%8s", &x, y); // 讀取第一個字元存入 x，隨後的連續字串存入 y

   puts("輸入的結果為：");
   printf("字元為 \"%c\" 且字串為 \"%s\"\n", x, y);
}
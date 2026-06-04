// 圖 9.21: fig09_21.c
// 使用掃描字元集 (scan set)
#include <stdio.h>

// 主函式 main 開始執行程式
int main(void)
{ 
   char z[9]; // 宣告字元陣列 z
   
   printf("%s", "請輸入一個字串: ");
   scanf("%8[aeiou]", z); // 搜尋並讀取指定的字元集合（僅接受 a, e, i, o, u）

   printf("輸入的字串為 \"%s\"\n", z);
}
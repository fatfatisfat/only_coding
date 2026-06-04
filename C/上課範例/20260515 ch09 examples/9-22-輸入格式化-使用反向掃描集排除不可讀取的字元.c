// 圖 9.22: fig09_22.c
// 使用反向掃描字元集 (inverted scan set)
#include <stdio.h>

int main(void)
{ 
   char z[9]; 

   printf("%s", "請輸入一個字串: ");
   scanf("%8[^aeiou]", z); // 反向掃描字元集（遇到 a, e, i, o, u 其中的任一母音即停止讀取）

   printf("輸入的字串為 \"%s\"\n", z);
}
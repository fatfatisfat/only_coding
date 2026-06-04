// 圖 8.29: fig08_29.c
// 使用 memmove 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   char x[] = "Home Sweet Home"; // 初始化字元陣列 x
   
   printf("%s%s\n", "執行 memmove 前，陣列 x 中的字串為：", x); 
   printf("%s%s\n", "執行 memmove 後，陣列 x 中的字串為：", 
      (char *) memmove(x, &x[5], 10)); // 將從 x[5] 開始的 10 個位元組安全地複製到 x 的開頭
}
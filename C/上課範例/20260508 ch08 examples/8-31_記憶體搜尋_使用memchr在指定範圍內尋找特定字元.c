// 圖 8.31: fig08_31.c
// 使用 memchr 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   const char *s = "This is a string"; // 初始化字元指標

   // 在 s 的前 16 個位元組內搜尋字元 'r'，並印出找到該字元後的剩餘字串
   printf("%s\'%c\'%s\"%s\"\n", 
      "在字串 s 中找到字元 ", 'r', 
      " 之後的剩餘部分為 ", (char *) memchr(s, 'r', 16));
}
// 圖 8.35: fig08_35.c
// 使用 strlen 函式
#include <stdio.h>
#include <string.h>

int main(void)
{
   // 初始化 3 個字元指標
   const char *string1 = "abcdefghijklmnopqrstuvwxyz";
   const char *string2 = "four";
   const char *string3 = "Boston";
   
   printf("%s\"%s\"%s%u\n%s\"%s\"%s%u\n%s\"%s\"%s%u\n",
      "字串 ", string1, " 的長度為 ", strlen(string1),
      "字串 ", string2, " 的長度為 ", strlen(string2),
      "字串 ", string3, " 的長度為 ", strlen(string3));
}
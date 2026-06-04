// 圖 8.21: fig08_21.c
// 使用 strcspn 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   // 初始化 2 個字元指標
   const char *string1 = "The value is 3.14159";
   const char *string2 = "1234567890";
   
   printf("%s%s\n%s%s\n\n%s\n%s%u\n",
      "string1 = ", string1, "string2 = ", string2,
      "string1 的開頭片段中，",
      "完全不包含 string2 內任一字元的長度 = ",
      strcspn(string1, string2));
}
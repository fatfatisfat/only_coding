// 圖 8.24: fig08_24.c
// 使用 strspn 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   // 初始化 2 個字元指標
   const char *string1 = "The value is 3.14159";
   const char *string2 = "aehi lsTuv";
   
   printf("%s%s\n%s%s\n\n%s\n%s%u\n",
      "string1 = ", string1, "string2 = ", string2,
      "string1 的開頭片段中，",
      "完全只包含 string2 內字元的長度 = ",
      strspn(string1, string2)); 
}
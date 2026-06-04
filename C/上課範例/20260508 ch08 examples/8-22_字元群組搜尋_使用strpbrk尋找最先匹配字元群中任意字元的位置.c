// 圖 8.22: fig08_22.c
// 使用 strpbrk 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   const char *string1 = "This is a test"; // 初始化字元指標
   const char *string2 = "beware"; // 初始化字元指標
   
   // 尋找 string2 中的字元在 string1 中最先出現者（此處為 'e'）
   printf("%s\"%s\"\n'%c'%s\n\"%s\"\n", 
      "在這些字元當中：", string2,
      *strpbrk(string1, string2),
      " 最早出現於字串：", string1);
}
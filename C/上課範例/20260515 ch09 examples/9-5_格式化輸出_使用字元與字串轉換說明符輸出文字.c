// 圖 9.5: fig09_05.c
// 使用字元與字串格式指定字
#include <stdio.h>

int main(void)
{ 
   char character = 'A'; // 初始化字元
   printf("%c\n", character);

   printf("%s\n", "這是一個字串常數");

   char string[] = "這是一個字元陣列字串"; // 初始化字元陣列
   printf("%s\n", string);

   const char *stringPtr = "這也是一個指標字串"; // 初始化字元指標
   printf("%s\n", stringPtr);
}
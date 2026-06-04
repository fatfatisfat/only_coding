// 圖 8.6: fig08_06.c
// 使用 strtod 函式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{ 
   const char *string = "51.2% are admitted"; // 初始化字串
   char *stringPtr; // 建立字元指標，用來指向轉換後剩餘的字串
   
   // 將字串轉換為雙精度浮點數
   double d = strtod(string, &stringPtr);
   
   printf("字串 \"%s\" 已被轉換為\n", string);
   printf("雙精度浮點數值 %.2f 以及字串 \"%s\"\n", d, stringPtr);
}
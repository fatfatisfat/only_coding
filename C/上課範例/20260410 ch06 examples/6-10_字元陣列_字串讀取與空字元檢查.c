// Fig. 6.10: fig06_10.c
// 將字元陣列視為字串處理。
#include <stdio.h>
#define SIZE 20

// 主程式開始執行
int main(void)
{
   char string1[SIZE]; // 配置 20 個字元的空間
   char string2[] = "string literal"; // 配置 15 個字元的空間（包含空字元 \0）

   // 從使用者端讀取字串並存入陣列 string1
   printf("%s", "Enter a string (no longer than 19 characters): ");
   scanf("%19s", string1); // 最多讀取 19 個字元（留一個空間給 \0）

   // 輸出字串
   printf("string1 is: %s\nstring2 is: %s\n"                  
          "string1 with spaces between characters is:\n",     
          string1, string2);                                    

   // 逐一輸出字元，直到遇到空字元（null character）為止  
   for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i) {
      printf("%c ", string1[i]);                     
   }                                           

   puts("");
}
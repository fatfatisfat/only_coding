// Fig. 7.10: fig07_10.c
// 使用指向非常數資料的非常數指標將字串轉換為大寫。
#include <stdio.h>
#include <ctype.h>

void convertToUppercase(char *sPtr); // 函式原型宣告

int main(void)
{
   char string[] = "cHaRaCters and $32.98"; // 初始化字元陣列

   printf("轉換前的字串為: %s", string);
   convertToUppercase(string);
   printf("\n轉換後的字串為: %s\n", string); 
} 

// 將字串轉換為大寫字母
void convertToUppercase(char *sPtr)
{
   while (*sPtr != '\0') { // 當前字元不是字串結束符號 '\0' 
      *sPtr = toupper(*sPtr); // 轉換為大寫
      ++sPtr; // 讓 sPtr 指向洗一個字元
   } 
}
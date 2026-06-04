// Fig. 7.11: fig07_11.c
// 使用指向常數資料的非常數指標，一次印出字串的一個字元。

#include <stdio.h>

void printCharacters(const char *sPtr);

int main(void)
{
   // 初始化字元陣列
   char string[] = "print characters of a string"; 

   puts("字串內容為：");
   printCharacters(string);
   puts("");
} 

// sPtr 不能用來修改它所指向的字元，
// 也就是說，sPtr 是一個「唯讀」指標
void printCharacters(const char *sPtr)
{
   // 巡訪整個字串                                      
   for (; *sPtr != '\0'; ++sPtr) { // 無初始設定式   
      printf("%c", *sPtr);                                   
   }                                                     
}
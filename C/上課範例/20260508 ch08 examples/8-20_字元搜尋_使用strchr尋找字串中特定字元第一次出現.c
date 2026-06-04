// 圖 8.20: fig08_20.c
// 使用 strchr 函式
#include <stdio.h>
#include <string.h>

int main(void)
{
   const char *string = "This is a test"; // 初始化字元指標 
   char character1 = 'a'; // 初始化 character1
   char character2 = 'z'; // 初始化 character2
   
   // 如果在字串中找到 character1
   if (strchr(string, character1) != NULL) {
      printf("在 \"%s\" 中找到了 '%c'。\n", 
         string, character1);
   } 
   else { // 如果找不到 character1
      printf("在 \"%s\" 中找不到 '%c'。\n", 
         string, character1);
   } 

   // 如果在字串中找到 character2
   if (strchr(string, character2) != NULL) {
      printf("在 \"%s\" 中找到了 '%c'。\n", 
         string, character2);
   } 
   else { // 如果找不到 character2
      printf("在 \"%s\" 中找不到 '%c'。\n", 
         string, character2);
   } 
}
// 圖 8.26: fig08_26.c
// 使用 strtok 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   // 初始化字串陣列
   char string[] = "This is a sentence with 7 tokens";
   
   printf("%s\n%s\n\n%s\n",
      "準備進行分割的字串為：", string, 
      "分割後的標記 (tokens) 為：");
      
   char *tokenPtr = strtok(string, " "); // 開始切分字串（以空格作為分隔符號）

   // 持續切分字串，直到 tokenPtr 變成 NULL 為止
   while (tokenPtr != NULL) { 
      printf("%s\n", tokenPtr);
      tokenPtr = strtok(NULL, " "); // 取得下一個標記（傳入 NULL 代表沿用原字串）
   } 
}
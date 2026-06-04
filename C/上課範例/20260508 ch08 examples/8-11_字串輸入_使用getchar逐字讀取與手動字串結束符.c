// 圖 8.11: fig08_11.c
// 使用 getchar 函式
#include <stdio.h>
#define SIZE 80

int main(void)
{ 
   int c; // 用來儲存使用者輸入字元的變數（使用 int 以便處理 EOF）
   char sentence[SIZE]; // 建立字元陣列
   int i = 0; // 初始化計數器 i

   // 提示使用者輸入一行文字
   puts("請輸入一行文字："); 

   // 使用 getchar 逐一讀取每個字元，直到遇到換行符號或陣列容量達到上限                  
   while ((i < SIZE - 1) && (c = getchar()) != '\n') {
      sentence[i++] = c;                               
   }                                        

   sentence[i] = '\0'; // 手動加上字串結束符號
   
   // 使用 puts 顯示剛才輸入的整行字串
   puts("\n剛才輸入的文字為："); 
   puts(sentence);
}
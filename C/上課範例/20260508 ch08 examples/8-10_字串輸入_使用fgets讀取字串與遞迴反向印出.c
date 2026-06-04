// 圖 8.10: fig08_10.c
// 使用 fgets 和 putchar 函式
#include <stdio.h>
#define SIZE 80

void reverse(const char * const sPtr); // 函式原型
   
int main(void)
{  
   char sentence[SIZE]; // 建立字元陣列

   puts("請輸入一行文字：");

   // 使用 fgets 從標準輸入 (stdin) 讀取一行文字   
   fgets(sentence, SIZE, stdin);    

   printf("\n%s", "反向印出的文字為：");
   reverse(sentence);
} 

// 以遞迴方式倒序輸出字串中的字元
void reverse(const char * const sPtr)
{  
   // 如果到達字串的末尾（基本狀況 base case）
   if ('\0' == sPtr[0]) { 
      return; 
   }  
   else { // 如果還沒到字串末尾 
      reverse(&sPtr[1]); // 遞迴步驟：傳入下一個字元的位址                 
      putchar(sPtr[0]); // 當遞迴開始回溯時，使用 putchar 顯示字元
   } 
}
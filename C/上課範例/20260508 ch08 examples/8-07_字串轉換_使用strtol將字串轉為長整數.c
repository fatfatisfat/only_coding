// 圖 8.7: fig08_07.c
// 使用 strtol 函式
#include <stdio.h>
#include <stdlib.h>

int main(void)
{                  
   const char *string = "-1234567abc"; // 初始化字串指標  
   char *remainderPtr; // 建立字元指標，用來指向轉換後剩餘的字串
   
   // 將字串轉換為 long，進位制參數設為 0 代表自動判斷
   long x = strtol(string, &remainderPtr, 0);

   printf("%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld\n",
      "原始字串為：", string,
      "轉換後的數值為：", x,
      "原始字串剩餘的部分為：", remainderPtr,
      "轉換後的數值加上 567 為：", x + 567);
}
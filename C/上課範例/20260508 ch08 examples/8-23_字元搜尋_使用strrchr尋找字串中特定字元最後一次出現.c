// 圖 8.23: fig08_23.c
// 使用 strrchr 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   // 初始化字元指標
   const char *string1 = "A zoo has many animals including zebras";
          
   int c = 'z'; // 要搜尋的字元
   
   // 尋找字元 'z' 最後一次出現的位置（即 zebras 的 z），並印出其後的剩餘字串
   printf("%s\n%s'%c'%s\"%s\"\n",
      "從最後一次出現該字元的位置開始，string1 的剩餘部分為：",
      "最後一次出現字元 ", c,
      " 的位置是：", strrchr(string1, c));
}
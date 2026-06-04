// 圖 8.25: fig08_25.c
// 使用 strstr 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   const char *string1 = "abcdefabcdef"; // 被搜尋的主字串
   const char *string2 = "def"; // 要尋找的子字串

   printf("%s%s\n%s%s\n\n%s\n%s%s\n",
      "string1 = ", string1, "string2 = ", string2,
      "從第一次出現 string2 的位置開始，",
      "string1 的剩餘部分為：", 
      strstr(string1, string2)); // 尋找 "def" 第一次出現的位置並印出其後字串
}
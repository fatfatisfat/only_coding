// 圖 8.32: fig08_32.c
// 使用 memset 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   char string1[15] = "BBBBBBBBBBBBBB"; // 初始化 string1
   
   printf("string1 = %s\n", string1);
   printf("執行 memset 之後的 string1 = %s\n", 
      (char *) memset(string1, 'b', 7)); // 將 string1 的前 7 個位元組填入 'b'
}
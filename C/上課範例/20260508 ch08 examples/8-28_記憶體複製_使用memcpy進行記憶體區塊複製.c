// 圖 8.28: fig08_28.c
// 使用 memcpy 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   char s1[17]; // 建立字元陣列 s1
   char s2[] = "Copy this string"; // 初始化字元陣列 s2

   // 將 s2 的 17 個位元組（包含結尾空字元 '\0'）複製到 s1 中
   memcpy(s1, s2, 17); 
   printf("%s\n%s\"%s\"\n", 
      "當使用 memcpy 將 s2 複製到 s1 之後，",
      "s1 的內容為 ", s1);
}
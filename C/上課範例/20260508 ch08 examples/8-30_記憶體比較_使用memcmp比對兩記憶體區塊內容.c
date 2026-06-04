// 圖 8.30: fig08_30.c
// 使用 memcmp 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   char s1[] = "ABCDEFG"; // 初始化字元陣列 s1
   char s2[] = "ABCDXYZ"; // 初始化字元陣列 s2
        
   printf("%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n",
      "s1 = ", s1, "s2 = ", s2,
      "memcmp(s1, s2, 4) = ", memcmp(s1, s2, 4),  // 前 4 個位元組皆為 "ABCD"，相同故回傳 0
      "memcmp(s1, s2, 7) = ", memcmp(s1, s2, 7),  // 比較 7 個位元組，'E' 的 ASCII 碼小於 'X'，回傳負值
      "memcmp(s2, s1, 7) = ", memcmp(s2, s1, 7)); // 比較 7 個位元組，'X' 的 ASCII 碼大於 'E'，回傳正值
}
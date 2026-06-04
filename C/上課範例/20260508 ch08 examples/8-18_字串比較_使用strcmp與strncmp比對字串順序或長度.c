// 圖 8.18: fig08_18.c
// 使用 strcmp 和 strncmp 函式
#include <stdio.h>
#include <string.h>

int main(void)
{
   const char *s1 = "Happy New Year"; // 初始化字元指標
   const char *s2 = "Happy New Year"; // 初始化字元指標
   const char *s3 = "Happy Holidays"; // 初始化字元指標
 
   printf("%s%s\n%s%s\n%s%s\n\n%s%2d\n%s%2d\n%s%2d\n\n",
      "s1 = ", s1, "s2 = ", s2, "s3 = ", s3,
      "strcmp(s1, s2) = ", strcmp(s1, s2),  // 完全相同，回傳 0
      "strcmp(s1, s3) = ", strcmp(s1, s3),  // 'N' 的 ASCII 碼大於 'H'，回傳正值
      "strcmp(s3, s1) = ", strcmp(s3, s1)); // 'H' 的 ASCII 碼小於 'N'，回傳負值

   printf("%s%2d\n%s%2d\n%s%2d\n",
      "strncmp(s1, s3, 6) = ", strncmp(s1, s3, 6),  // 前 6 個字元皆為 "Happy "，相同故回傳 0
      "strncmp(s1, s3, 7) = ", strncmp(s1, s3, 7),  // 比較 7 個字元，"Happy N" 大於 "Happy H"，回傳正值
      "strncmp(s3, s1, 7) = ", strncmp(s3, s1, 7)); // 比較 7 個字元，"Happy H" 小於 "Happy N"，回傳負值
}
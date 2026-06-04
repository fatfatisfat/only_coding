// 圖 8.16: fig08_16.c
// 使用 strcat 和 strncat 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   char s1[20] = "Happy "; // 初始化字元陣列 s1
   char s2[] = "New Year "; // 初始化字元陣列 s2
   char s3[40] = ""; // 初始化字元陣列 s3 為空字串
   
   printf("s1 = %s\ns2 = %s\n", s1, s2);

   // 將 s2 連接到 s1 的尾端
   printf("strcat(s1, s2) = %s\n", strcat(s1, s2));

   // 將 s1 的前 6 個字元連接到 s3，並在最後一個字元後加上 '\0'
   printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));

   // 將完整的 s1 連接到 s3 的尾端
   printf("strcat(s3, s1) = %s\n", strcat(s3, s1));
}
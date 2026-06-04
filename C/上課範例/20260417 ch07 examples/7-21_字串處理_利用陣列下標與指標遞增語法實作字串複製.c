// Fig. 7.21: fig07_21.c
// 使用陣列記法與指標記法複製字串。
#include <stdio.h>
#define SIZE 10

void copy1(char * const s1, const char * const s2); // 函式原型宣告
void copy2(char *s1, const char *s2); // 函式原型宣告

int main(void)
{
   char string1[SIZE]; // 建立字元陣列 string1
   char *string2 = "Hello"; // 建立一個指向字串常數的指標 string2

   copy1(string1, string2);
   printf("string1 = %s\n", string1);

   char string3[SIZE]; // 建立字元陣列 string3
   char string4[] = "Good Bye"; // 建立一個包含字串的字元陣列 string4

   copy2(string3, string4);
   printf("string3 = %s\n", string3);
} 

// 使用陣列記法將 s2 複製到 s1
void copy1(char * const s1, const char * const s2)
{
   // 巡訪字串
   for (size_t i = 0; (s1[i] = s2[i]) != '\0'; ++i) {
      ; // 迴圈主體不執行任何事
   }                                     
}

// 使用指標記法將 s2 複製到 s1
void copy2(char *s1, const char *s2)
{
   // 巡訪字串
   for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
      ; // 迴圈主體不執行任何事
   }                               
}
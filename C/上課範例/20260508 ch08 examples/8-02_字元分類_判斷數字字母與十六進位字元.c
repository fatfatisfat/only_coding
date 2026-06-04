// 圖 8.2: fig08_02.c
// 使用 isdigit、isalpha、isalnum 和 isxdigit 函式
#include <stdio.h>
#include <ctype.h>
 
int main(void)
{ 
   printf("%s\n%s%s\n%s%s\n\n", "根據 isdigit 的檢查結果：",
      isdigit('8') ? "8 是一個 " : "8 不是一個 ", "數字",
      isdigit('#') ? "# 是一個 " : "# 不是一個 ", "數字");

   printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n", 
      "根據 isalpha 的檢查結果：",
      isalpha('A') ? "A 是一個 " : "A 不是一個 ", "字母",
      isalpha('b') ? "b 是一個 " : "b 不是一個 ", "字母",
      isalpha('&') ? "& 是一個 " : "& 不是一個 ", "字母",
      isalpha('4') ? "4 是一個 " : "4 不是一個 ", "字母");

   printf("%s\n%s%s\n%s%s\n%s%s\n\n", 
      "根據 isalnum 的檢查結果：",
      isalnum('A') ? "A 是一個 " : "A 不是一個 ", 
      "數字或字母",
      isalnum('8') ? "8 是一個 " : "8 不是一個 ", 
      "數字或字母",
      isalnum('#') ? "# 是一個 " : "# 不是一個 ", 
      "數字或字母");

   printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n%s%s\n", 
      "根據 isxdigit 的檢查結果：",
      isxdigit('F') ? "F 是一個 " : "F 不是一個 ", 
      "十六進位數字",
      isxdigit('J') ? "J 是一個 " : "J 不是一個 ", 
      "十六進位數字",
      isxdigit('7') ? "7 是一個 " : "7 不是一個 ", 
      "十六進位數字",
      isxdigit('$') ? "$ 是一個 " : "$ 不是一個 ", 
      "十六進位數字",
      isxdigit('f') ? "f 是一個 " : "f 不是一個 ", 
      "十六進位數字");
}
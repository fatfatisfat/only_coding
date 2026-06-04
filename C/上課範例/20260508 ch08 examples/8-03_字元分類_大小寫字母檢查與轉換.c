// 圖 8.3: fig08_03.c
// 使用 islower、isupper、tolower、toupper 函式
#include <stdio.h>
#include <ctype.h>

int main(void)
{ 
   printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
      "根據 islower 的檢查結果：",
      islower('p') ? "p 是一個 " : "p 不是一個 ",
      "小寫字母",
      islower('P') ? "P 是一個 " : "P 不是一個 ",
      "小寫字母",
      islower('5') ? "5 是一個 " : "5 不是一個 ",
      "小寫字母",
      islower('!') ? "! 是一個 " : "! 不是一個 ",
      "小寫字母");

   printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n\n",
      "根據 isupper 的檢查結果：",
      isupper('D') ? "D 是一個 " : "D 不是一個 ",
      "大寫字母",
      isupper('d') ? "d 是一個 " : "d 不是一個 ",
      "大寫字母",
      isupper('8') ? "8 是一個 " : "8 不是一個 ",
      "大寫字母",
      isupper('$') ? "$ 是一個 " : "$ 不是一個 ",
      "大寫字母");

   printf("%s%c\n%s%c\n%s%c\n%s%c\n",
      " 'u' 轉換為大寫後為：", toupper('u'),
      " '7' 轉換為大寫後為：", toupper('7'),
      " '$' 轉換為大寫後為：", toupper('$'),
      " 'L' 轉換為小寫後為：", tolower('L'));
}
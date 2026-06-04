// 圖 8.34: fig08_34.c
// 使用 strerror 函式
#include <stdio.h>
#include <string.h>

int main(void)
{ 
   // 印出錯誤碼 2 所對應的系統錯誤訊息
   printf("%s\n", strerror(2)); 
}
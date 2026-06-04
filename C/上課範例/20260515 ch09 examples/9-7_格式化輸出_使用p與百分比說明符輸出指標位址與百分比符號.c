// 圖 9.7: fig09_07.c
// 使用 p 和 % 格式指定字
#include <stdio.h>

int main(void)
{ 
   int x = 12345; // 初始化整數 x
   int * ptr = &x; // 將 x 的記憶體位址指定給指標 ptr

   printf("ptr 的值為 %p\n", ptr);
   printf("x 的位址為 %p\n\n", &x);

   printf("在格式控制字串中列印出一個 %%\n");
}
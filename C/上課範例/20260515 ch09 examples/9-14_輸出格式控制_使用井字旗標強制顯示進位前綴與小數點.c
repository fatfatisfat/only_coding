// 圖 9.14: fig09_14.c
// 在格式指定字 o, x, X 以及任何浮點數指定字
// 中使用 # 旗標
#include <stdio.h>

int main(void)
{ 
   int c = 1427; // 初始化 c   
   printf("%#o\n", c); // 強制加上八進位前綴 0
   printf("%#x\n", c); // 強制加上十六進位前綴 0x
   printf("%#X\n", c); // 強制加上十六進位前綴 0X

   double p = 1427.0; // 初始化 p
   printf("\n%g\n", p);   // 一般輸出（會自動省略結尾的小數點與零）
   printf("%#g\n", p);  // 強制保留小數點與後續的零
}
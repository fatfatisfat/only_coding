// 圖 8.13: fig08_13.c
// 使用 sscanf 函式
#include <stdio.h>

int main(void)
{ 
   char s[] = "31298 87.375"; // 初始化字串陣列 s
   int x; // 用來儲存輸入的整數值 x
   double y; // 用來儲存輸入的倍精度浮點數值 y

   // 從字串 s 中讀取資料，並將其格式化解析為整數與浮點數
   sscanf(s, "%d%lf", &x, &y); 
   printf("%s\n%s%6d\n%s%8.3f\n",                          
      "儲存於字元陣列 s 中的數值為：",
      "整數：", x, "雙精度浮點數：", y);                     
}
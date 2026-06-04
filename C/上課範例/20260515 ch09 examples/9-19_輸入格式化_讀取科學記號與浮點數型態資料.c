// 圖 9.19: fig09_19.c
// 使用浮點數格式指定字讀取輸入資料
#include <stdio.h>

// 主函式 main 開始執行程式
int main(void)
{ 
   double a;
   double b;
   double c;

   puts("請輸入三個浮點數：");
   scanf("%le%lf%lg", &a, &b, &c);

   printf("\n以下是依據一般浮點數記數法");
   puts("所印出的輸入數值：");
   printf("%f\n%f\n%f\n", a, b, c);
}
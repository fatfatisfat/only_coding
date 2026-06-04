// 圖 9.24: fig09_24.c
// 從輸入串流中讀取並忽略特定字元
#include <stdio.h>

int main(void)
{ 
   int month = 0; 
   int day = 0;   
   int year = 0;  
   printf("%s", "請輸入 mm-dd-yyyy 格式的日期: ");
   scanf_s("%d%*c%d%*c%d", &month, &day, &year); // %*c 會讀取但不儲存其中的分隔符號
   printf("month = %d  day = %d  year = %d\n\n", month, day, year);
   
   printf("%s", "請輸入 mm/dd/yyyy 格式的日期: ");
   scanf_s("%d%*c%d%*c%d", &month, &day, &year); // %*c 同樣會忽略斜線
   printf("month = %d  day = %d  year = %d\n", month, day, year);
}
// 圖 9.8: fig09_08.c
// 在欄位中將整數靠右對齊
#include <stdio.h>

int main(void)
{ 
   // 指定欄位寬度為 4，預設靠右對齊
   printf("%4d\n", 1);
   printf("%4d\n", 12);
   printf("%4d\n", 123);
   printf("%4d\n", 1234);
   printf("%4d\n\n", 12345); // 位數超過寬度 4，欄位會自動擴展以完整顯示

   // 負號也會佔用一個欄位寬度
   printf("%4d\n", -1);
   printf("%4d\n", -12);
   printf("%4d\n", -123);
   printf("%4d\n", -1234);
   printf("%4d\n", -12345); // 位數超過寬度 4，同樣會自動擴展
}
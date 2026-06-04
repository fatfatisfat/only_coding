// 圖 10.18: fig10_18.c
// 使用列舉型態 (Enumeration)
#include <stdio.h>

// 列舉常數代表一年中的月份                  
enum months {                                                                    
   JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
}; 

int main(void)
{ 
   // 初始化一個指標陣列（字串陣列）
   // 陣列第一個元素（索引 0）放空字串 ""，是為了讓月份數字（1 到 12）能完美對應到陣列索引（1 到 12）
   const char *monthName[] = { "", "January", "February", "March", 
      "April", "May", "June", "July", "August", "September", "October",
      "November", "December" };
   
   // 使用 for 迴圈走訪所有月份
   // 迴圈控制變數 month 的型態為 enum months，從 JAN (1) 開始，一路遞增到 DEC (12)
   for (enum months month = JAN; month <= DEC; ++month) {
      // month 在內部本質上就是整數，可以直接以 %2d 印出數字
      // 同時利用 month 的數值當作陣列索引，抓取 monthName 裡對應的月份英文名稱
      printf("%2d%11s\n", month, monthName[month]);
   } 
}
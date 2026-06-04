// 圖 8.15: fig08_15.c
// 使用 strcpy 和 strncpy 函式
#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15

int main(void)
{ 
   char x[] = "Happy Birthday to You"; // 初始化字元陣列 x
   char y[SIZE1]; // 建立字元陣列 y
   char z[SIZE2]; // 建立字元陣列 z
   
   // 將 x 的內容完整複製到 y 中
   printf("%s%s\n%s%s\n", 
      "陣列 x 中的字串為：", x,
      "陣列 y 中的字串為：", strcpy(y, x));

   // 複製 x 的前 14 個字元到 z 中。這不會自動複製空字元 '\0'
   strncpy(z, x, SIZE2 - 1);                                    
                                                                    
   z[SIZE2 - 1] = '\0'; // 手動加上字串結束符號 '\0' 以確保安全          
   printf("陣列 z 中的字串為：%s\n", z);
}
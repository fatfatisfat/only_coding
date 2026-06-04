// 圖 9.9: fig09_09.c
// 使用精確度 (precision) 來列印整數、浮點數與字串
#include <stdio.h>

int main(void)
{
   puts("對整數使用精確度（設定最少輸出位數，不足則補 0）");
   int i = 873; // 初始化整數 i
   printf("\t%.4d\n\t%.9d\n\n", i, i);
   
   puts("對浮點數使用精確度（控制小數位數或有效位數）");
   double f = 123.94536; // 初始化倍精確度浮點數 f
   printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);
   
   puts("對字串使用精確度（控制最大輸出字元數）");
   char s[] = "Happy Birthday"; // 初始化字元陣列 s
   printf("\t%.11s\n", s);
}
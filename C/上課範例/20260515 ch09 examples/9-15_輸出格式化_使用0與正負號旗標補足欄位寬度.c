// 圖 9.15: fig09_15.c
// 使用 0 (補零) 旗標
#include <stdio.h>

int main(void)
{ 
   printf("%+09d\n", 452); // 總寬度 9，靠右對齊，強制顯示正負號，前方補 0
   printf("%09d\n", 452);  // 總寬度 9，靠右對齊，前方補 0
}
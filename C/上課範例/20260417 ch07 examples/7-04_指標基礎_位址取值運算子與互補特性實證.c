// Fig. 7.4: fig07_04.c
// 使用指標運算子 & 與 *。
#include <stdio.h>

int main(void)
{
   int a = 7;
   int *aPtr = &a; // 將 aPtr 設定為 a 的記憶體位址

   printf("a 的記憶體位址為 %p"
          "\naPtr 的值為 %p", &a, aPtr);

   printf("\n\na 的值為 %d"   
          "\n*aPtr 的值為 %d", a, *aPtr);

   // 證明 * 與 & 運算子具有互相抵消（互補）的特性
   printf("\n\n證實 * 與 & 互為互補運算子\n&*aPtr = %p"   
          "\n*&aPtr = %p\n", &*aPtr, *&aPtr);
}
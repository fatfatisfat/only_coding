// Fig. 7.7: fig07_07.c
// 使用指標引數進行傳址呼叫（pass-by-reference）來計算變數的三次方。

#include <stdio.h>

void cubeByReference(int *nPtr); // 函式原型宣告

int main(void)
{
   int number = 5; // 初始化 number

   printf("number 的原始值為 %d", number);
 
   // 將 number 的記憶體位址傳遞給 cubeByReference
   cubeByReference(&number);

   printf("\nnumber 的新值為 %d\n", number);
} 

// 計算 *nPtr 的三次方；此操作實際上會修改 main 函式中的 number 變數值
void cubeByReference(int *nPtr)                              
{                                                              
   *nPtr = *nPtr * *nPtr * *nPtr; // 計算 *nPtr 的三次方            
}
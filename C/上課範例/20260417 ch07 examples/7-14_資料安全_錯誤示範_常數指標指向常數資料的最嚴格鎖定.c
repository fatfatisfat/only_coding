// Fig. 7.14: fig07_14.c
// 嘗試修改指向常數資料的常數指標。
#include <stdio.h>

int main(void)
{
   int x = 5; // 初始化 x
   int y; // 宣告 y

   // ptr 是一個指向常數整數的常數指標。ptr 永遠只能
   // 指向同一個記憶體位置，且該位置上的整數內容
   // 也無法被修改
   const int *const ptr = &x; // 初始化是正確的
                                  
   printf("%d\n", *ptr);
   *ptr = 7; // 錯誤：*ptr 是常數，無法賦予新數值
   ptr = &y; // 錯誤：ptr 是常數，無法賦予新位址
}
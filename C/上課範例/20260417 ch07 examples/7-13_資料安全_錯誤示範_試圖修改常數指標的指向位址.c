// Fig. 7.13: fig07_13.c
// 嘗試修改指向非常數資料的常數指標。
#include <stdio.h>

int main(void)
{
   int x; // 宣告 x
   int y; // 宣告 y

   // ptr 是一個常數指標，指向一個可以被修改的整數。
   // 我們可以透過 ptr 修改該整數的值，但 ptr 永遠只能指向同一個記憶體位置
   int * const ptr = &x;                                               

   *ptr = 7; // 允許：*ptr 不是常數
   ptr = &y; // 錯誤：ptr 是常數，無法賦予新位址
}
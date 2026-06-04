// Fig. 7.12: fig07_12.c
// 嘗試透過指向常數資料的非常數指標來修改資料。
#include <stdio.h>
void f(const int *xPtr); // 函式原型宣告

int main(void)
{
   int y; // 宣告 y

   f(&y); // f 嘗試進行非法的修改
} 

// xPtr 不能用來修改它所指向的變數的值
void f(const int *xPtr)
{
   *xPtr = 100; // 錯誤：不能修改常數物件（const object）
}
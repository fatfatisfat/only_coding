// Fig. 6.14: fig06_14.c
// 對陣列使用 const 型別限定詞。
#include <stdio.h>

void tryToModifyArray(const int b[]); // 函式原型宣告

// 主程式開始執行
int main(void)
{
   int a[] = { 10, 20, 30 }; // 初始化陣列 a

   tryToModifyArray(a);

   printf("%d %d %d\n", a[0], a[1], a[2]);
}

// 在 tryToModifyArray 函式中，陣列 b 被宣告為 const，
// 因此它不能被用來修改呼叫端（主程式）中的引數陣列。
void tryToModifyArray(const int b[])                                
{                                                                                
   b[0] /= 2; // 錯誤（編譯失敗）                                    
   b[1] /= 2; // 錯誤（編譯失敗）                                    
   b[2] /= 2; // 錯誤（編譯失敗）                                    
}
// Fig. 5.3: fig05_03.c
// 建立與使用程式設計師自訂的函式。
#include <stdio.h> 

int square(int y); // 函式原型宣告

int main(void)
{
    // 執行 10 次迴圈，每次計算並輸出 x 的平方值
    for (int x = 1; x <= 10; ++x) {
        printf("%d  ", square(x)); // 呼叫函式
    }

    puts("");
}

// square 函式的定義，回傳參數的平方值
int square(int y) // y 是傳入該函式之引數的副本
{
    return y * y; // 以整型（int）回傳 y 的平方值              
}
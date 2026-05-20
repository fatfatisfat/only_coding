#include <stdio.h>

int func(int n) {
    if (n <= 1) return n; // 終止條件應放在前面
    return func(n - 1) + func(n - 2);
}

int main() {
    printf("%d", func(5)); // 測試範例
    return 0;
}
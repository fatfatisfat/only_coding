#include <stdio.h>

int main() {
    char str[] = "abcdef";
    char *p = str + 2;
    p[2] = '\0'; // 原文誤植為 '10'
    printf("%s", str);
    return 0;
}
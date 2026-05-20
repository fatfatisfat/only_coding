#include <stdio.h>

int main() {
    char *s = "hello";
    printf("%c", 3[s]); // 註：3[s] 等同於 s[3]
    return 0;
}
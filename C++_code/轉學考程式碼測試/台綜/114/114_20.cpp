#include <stdio.h>

int main() {
    char s[] = "hello";
    char *p = s;
    *(p + 1) = 'a';
    printf("%s", s);
    return 0;
}
#include <stdio.h>

int main() {
    char s[] = "abc";
    char *p = s;
    while (*p) {
        (*p)++; 
        p++;
    }
    printf("%s", s);
    return 0;
}
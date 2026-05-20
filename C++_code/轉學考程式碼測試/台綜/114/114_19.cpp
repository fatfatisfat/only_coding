#include <stdio.h>

int main() {
    char *s = "abcde";
    printf("%c", *(s + *(s + 1) - 'a'));
    return 0;
}
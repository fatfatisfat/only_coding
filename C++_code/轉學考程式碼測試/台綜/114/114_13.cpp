#include <stdio.h>

int main() {
    int a[] = {10, 20, 30};
    int *p = a;
    printf("%d", *(p + *(p + 1) / 10));
    return 0;
}
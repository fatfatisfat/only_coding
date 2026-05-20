#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;
    printf("%d", **pp + *p);
    return 0;
}
#include <stdio.h>

void foo(int n) {
    if (n > 0) {
        foo(n - 1);
        printf("%d", n);
        foo(n - 1);
    }
}

int main() {
    foo(3);
    return 0;
}
#include <stdio.h>

int main(){
    int num = 0;
    int *ptr = &num;
    *ptr = 10;
    printf("%d\n%d", ptr, *ptr);
}
#include <stdio.h>

int main(){
    int num = 0;
    int *ptr = &num;
    *ptr = 10;
    printf("%d\n%d\n", ptr, *ptr);
    printf("%d\n%d\n", num, &num);
}
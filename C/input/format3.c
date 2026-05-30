#include<stdio.h>

int main(){
    int n;
    while (scanf("%d", &n)){
        if (n == 0) break;
        printf("%d is the input number\n", n);
    }
    return 0;
}
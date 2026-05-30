#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &m);
        printf("%d is the input number\n", m);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &m);
        for (int j=0; j<m; j++){
            printf("Hello World\n");
        }
        printf("\n");
    }
}
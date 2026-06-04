#include <stdio.h>

int main(){
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL){
        printf("沒有這個檔案\n");
        return 1;
    }

    fprintf(fp, "3\n");
    fprintf(fp, "5 3\n");
    fprintf(fp, "1 1 E\n");
    fprintf(fp, "RFRFRFRF\n");
    fprintf(fp, "3 2 N\n");
    fprintf(fp, "FRRFLLFFRRFLL\n");
    fprintf(fp, "0 3 W\n");
    fprintf(fp, "LLFFFLFLFL\n");
    printf("the end");

    fclose(fp);
}
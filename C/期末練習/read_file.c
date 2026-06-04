#include <stdio.h>

int main(){
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, -1, 0, 1};
    char face[] = "ESWN";

    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL){
        printf("np such file");
        return 1;
    }

    int n, max_x, max_y, x, y;
    char forward;
    fscanf(fp, "%d%d%d", &n, &max_x, &max_y);
    char arr[101];
    int lost[105][105] = {0};
    while (n--){
        fscanf(fp, "%d %d %c", &x, &y, &forward);
        fscanf(fp, "%s", arr); 
        int f;
        if (forward == 'E') f = 0;
        else if (forward == 'S') f = 1;
        else if (forward == 'W') f = 2;
        else if (forward == 'N') f = 3;
        int fall = 0;
        for (int i=0; arr[i] != '\0'; i++){
            if (arr[i] == 'F'){
                int next_x = x, next_y = y;
                next_x += dx[f];
                next_y += dy[f];
                if (next_x > max_x || next_x < 0 || next_y > max_y || next_y < 0){
                    if (lost[x][y] == 0){
                        lost[x][y] = 1;
                        fall = 1;
                        break;
                    } else continue;
                }else {
                    x = next_x;
                    y = next_y;
                }
            }else {
                if (arr[i] == 'L'){
                    f = (f + 3) % 4;
                }else if (arr[i] == 'R'){
                    f = (f + 1) % 4;
                }
            }
        }
        if (fall){
            printf("%d %d %c LOST\n", x, y, face[f]);
        }else {
            printf("%d %d %c\n", x, y, face[f]);
        }
    }
    fclose(fp);
}
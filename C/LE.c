#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 定義客戶資料結構體 (clientData)         
struct clientData {
    int num;        // 編號
    char name[15];  // 姓名     
    double work;    // 工作績效   
    double appear;  // 出勤績效            
};

int enterChoice(void)
{
    // 輸出選單項目
    printf("%s", "\nEnter your choice\n"
        "1. 輸入員工績效\n"
        "2. 顯示所有員工績效\n"
        "3. 顯示平均績效\n"
        "4. 顯示工作高於平均績效員工\n"
        "5. 顯示出勤高於平均績效員工\n"
        "0. 離開系統\n"
        "請選擇: ");

    int menuChoice; // 儲存使用者輸入的變數
    if (scanf("%d", &menuChoice) != 1) {
        // 防止使用者輸入非數字導致死迴圈
        while (getchar() != '\n');
        return -1;
    }
    return menuChoice;
}

int main() {
    puts("=======================================================");
    puts("            員工工作與出勤績效管理系統");
    puts("=======================================================");

    int choice;
    char file_name[20];
    FILE* cfptr;

    int num;
    char name[15];
    double work;
    double appear;

    while ((choice = enterChoice()) != 0) {
        if (choice == -1) {
            puts("無效的輸入，請輸入數字！");
            continue;
        }

        if (choice == 1) {
            printf("輸入績效檔案名稱: ");
            scanf("%19s", file_name);
            printf("\n");

            if ((cfptr = fopen(file_name, "w")) == NULL) {
                puts("無法開啟或建立檔案");
            }
            else {
                char c = 'y';
                while (c == 'y' || c == 'Y') {
                    struct clientData member;

                    printf("輸入員工編號: ");
                    scanf("%d", &member.num);
                    printf("輸入員工姓名: ");
                    scanf("%14s", member.name);
                    printf("輸入工作績效: ");
                    scanf("%lf", &member.work);
                    printf("輸入出席績效: ");
                    scanf("%lf", &member.appear);

                    fprintf(cfptr, "%d %s %.2f %.2f\n", member.num, member.name, member.work, member.appear);

                    printf("是否繼續輸入(y/n): ");
                    scanf(" %c", &c);
                    printf("\n");
                }
                fclose(cfptr);
            }
        }
        else if (choice == 2) {
            printf("輸入績效檔案名稱: ");
            scanf("%19s", file_name);
            printf("\n");

            if ((cfptr = fopen(file_name, "r")) == NULL) {
                puts("找不到檔案");
            }
            else {
                puts("=======================================================");
                puts("編號      姓名       工作績效       出席績效");
                puts("=======================================================");

                while (fscanf(cfptr, "%d %14s %lf %lf", &num, name, &work, &appear) != EOF) {
                    printf("%-9d%-11s%-15.2f%.2f\n", num, name, work, appear);
                }
                fclose(cfptr);
            }
        }
        else if (choice == 3) {
            printf("輸入績效檔案名稱: ");
            scanf("%19s", file_name);
            printf("\n");

            if ((cfptr = fopen(file_name, "r")) == NULL) {
                puts("找不到檔案");
            }
            else {
                double total_work = 0, total_appear = 0;
                int count = 0;

                while (fscanf(cfptr, "%d %14s %lf %lf", &num, name, &work, &appear) != EOF) {
                    total_work += work;
                    total_appear += appear;
                    count++;
                }

                if (count > 0) {
                    printf("平均工作績效: %.2f\n", total_work / count);
                    printf("平均出席績效: %.2f\n", total_appear / count);
                }
                else {
                    puts("檔案內無員工資料。");
                }
                fclose(cfptr);
            }
        }
        else if (choice == 4) {
            printf("輸入績效檔案名稱: ");
            scanf("%19s", file_name);
            printf("\n");

            if ((cfptr = fopen(file_name, "r")) == NULL) {
                puts("找不到檔案");
            }
            else {
                double total_work = 0, avg_work = 0;
                int count = 0;

                while (fscanf(cfptr, "%d %14s %lf %lf", &num, name, &work, &appear) != EOF) {
                    total_work += work;
                    count++;
                }

                if (count > 0) {
                    avg_work = total_work / count;

                    rewind(cfptr);

                    puts("=================工作高於平均績效員工==================");
                    puts("編號      姓名       工作績效       出席績效");

                    while (fscanf(cfptr, "%d %14s %lf %lf", &num, name, &work, &appear) != EOF) {
                        if (work > avg_work) {
                            printf("%-9d%-11s%-15.2f%.2f\n", num, name, work, appear);
                        }
                    }
                }
                else {
                    puts("檔案內無員工資料。");
                }
                fclose(cfptr);
            }
        }
        else if (choice == 5) {
            printf("輸入績效檔案名稱: ");
            scanf("%19s", file_name);
            printf("\n");

            if ((cfptr = fopen(file_name, "r")) == NULL) {
                puts("找不到檔案");
            }
            else {
                double total_appear = 0, avg_appear = 0;
                int count = 0;

                while (fscanf(cfptr, "%d %14s %lf %lf", &num, name, &work, &appear) != EOF) {
                    total_appear += appear;
                    count++;
                }

                if (count > 0) {
                    avg_appear = total_appear / count;

                    rewind(cfptr);

                    puts("=================出勤高於平均績效員工==================");
                    puts("編號      姓名       工作績效       出席績效");

                    while (fscanf(cfptr, "%d %14s %lf %lf", &num, name, &work, &appear) != EOF) {
                        if (appear > avg_appear) {
                            printf("%-9d%-11s%-15.2f%.2f\n", num, name, work, appear);
                        }
                    }
                }
                else {
                    puts("檔案內無員工資料。");
                }
                fclose(cfptr);
            }
        }
    }

    puts("程式結束\n");
    return 0;
}

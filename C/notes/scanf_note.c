#include <stdio.h>
#include <string.h>

int main() {
    int age;
    char name[20];
    char ch;

    // --- 1. 常見錯誤：讀取數字後的換行符殘留 ---
    printf("請輸入年齡: ");
    scanf("%d", &age); 
    
    // 解決方式：在 %c 前面加一個空格，讓 scanf 跳過換行符
    printf("請輸入一個字元: ");
    scanf(" %c", &ch); 

    // --- 2. 處理錯誤輸入 (檢查 scanf 回傳值) ---
    printf("請再次輸入一個數字: ");
    if (scanf("%d", &age) != 1) {
        printf("輸入錯誤！請輸入有效的數字。\n");
        // 清除緩衝區殘留的錯誤輸入，防止無窮迴圈
        while (getchar() != '\n'); 
    }

    // --- 3. 安全讀取字串 (解決 scanf %s 的溢位與空格問題) ---
    // 建議：盡量不要用 scanf("%s")，改用 fgets()
    printf("請輸入您的全名 (包含空格): ");
    
    // 清除前面的換行符，確保 fgets 能正確運作
    while (getchar() != '\n'); 

    // fgets 會讀取整行，包含空格，且限制長度以防溢位
    if (fgets(name, sizeof(name), stdin)) {
        // fgets 會把換行符 '\n' 也讀進去，通常需要手動移除
        name[strcspn(name, "\n")] = 0; 
        printf("你好, %s!\n", name);
    }

    return 0;
}
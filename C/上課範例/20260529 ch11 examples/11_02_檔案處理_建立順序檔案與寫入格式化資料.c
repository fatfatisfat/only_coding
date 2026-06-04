// 圖 11.2: fig11_02.c
// 建立一個循序檔案 (Sequential File)
#include <stdio.h>

int main(void)
{ 
   FILE *cfPtr; // cfPtr = clients.txt 的檔案指標   

   // fopen 以寫入模式 ("w") 開啟檔案；若無法建立或開啟檔案則結束程式
   // "w" 模式的特點：若檔案不存在會自動建立；若檔案已存在，則會直接抹除舊內容，從頭開始寫入
   if ((cfPtr = fopen("clients.txt", "w")) == NULL) {
      puts("File could not be opened");
   } 
   else { 
      puts("Enter the account, name, and balance.");
      puts("Enter EOF to end input.");
      printf("%s", "? ");

      unsigned int account; // 帳號
      char name[30]; // 帳戶姓名
      double balance; // 帳戶餘額

      // 【第一次讀取】先從鍵盤（標準輸入）讀取第一筆資料
      // %29s 限制最長讀取 29 個字元，保留 1 個空間給字串結束符號 '\0'，防止緩衝區溢位
      scanf("%d%29s%lf", &account, name, &balance);

      // 當使用者尚未輸入 EOF（檔案結尾訊號）時，持續執行迴圈
      // 注意：這裡檢查的是標準輸入鍵盤的狀態 (stdin)，而不是檔案指標 (cfPtr)
      while (!feof(stdin)) { 
         // 使用 fprintf 將剛才輸入的資料格式化寫入到 clients.txt 檔案中
         fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
         
         printf("%s", "? ");
         // 【後續讀取】在迴圈底部繼續等待使用者輸入下一筆客戶資料
         scanf("%d%29s%lf", &account, name, &balance);
      } 
      
      fclose(cfPtr); // fclose 關閉檔案，確保所有在緩衝區的資料都確實寫入硬碟
   } 
}
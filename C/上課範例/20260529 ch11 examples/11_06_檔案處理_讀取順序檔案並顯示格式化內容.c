// 圖 11.6: fig11_06.c
// 讀取並印出循序檔案的內容
#include <stdio.h>

int main(void)
{ 
   FILE *cfPtr; // cfPtr = clients.txt 的檔案指標

   // fopen 以唯讀模式 ("r") 開啟文字檔；若檔案無法開啟（例如檔案不存在）則印出錯誤訊息
   if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
      puts("File could not be opened");
   } 
   else { // 成功開啟檔案，準備從檔案中讀取帳號、姓名與餘額
      unsigned int account; // 帳號
      char name[30]; // 帳戶姓名
      double balance; // 帳戶餘額

      // 印出標頭列，並設定好欄位寬度與對齊方式（- 代表靠左對齊，預設為靠右對齊）
      printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
      
      // 【第一次讀取】先嘗試從檔案中讀取第一筆資料
      // %29s 限制最長讀取 29 個字元，保留 1 個空間給字串結束符號 '\0'，防止緩衝區溢位
      fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);

      // 當尚未抵達檔案結尾 (EOF) 時，持續執行迴圈
      while (!feof(cfPtr)) { 
         // 將剛剛讀取到的資料格式化輸出到螢幕上
         // %7.2f 代表總欄寬至少 7 格（含小數點），且精確到小數點後第 2 位
         printf("%-10d%-13s%7.2f\n", account, name, balance);
         
         // 【後續讀取】在迴圈底部繼續讀取下一筆資料
         fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
      } 

      fclose(cfPtr); // fclose 關閉檔案，釋放作業系統控制該檔案的資源   
   } 
}
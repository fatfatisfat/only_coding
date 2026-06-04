// 圖 11.7: fig11_07.c
// 信用查詢程式
#include <stdio.h>

// 主程式開始執行
int main(void)
{ 
   FILE *cfPtr; // clients.txt 檔案指標

   // fopen 以唯讀模式 ("r") 開啟文字檔；若檔案無法開啟（例如不存在）則結束程式
   if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
      puts("File could not be opened");
   } 
   else {
      // 顯示使用者的請求選項選單
      printf("%s", "Enter request\n"
         " 1 - List accounts with zero balances\n"
         " 2 - List accounts with credit balances\n"
         " 3 - List accounts with debit balances\n"
         " 4 - End of run\n? ");
      unsigned int request; // 儲存請求編號的變數
      scanf("%u", &request);

      // 當使用者選擇不是 4 時，持續處理請求
      while (request != 4) { 
         unsigned int account; // 帳號
         double balance; // 帳戶餘額
         char name[30]; // 客戶姓名

         // 先從文字檔中讀取第一筆資料（包含帳號、姓名、餘額）            
         fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);

         switch (request) { 
            // 選項 1：列出所有餘額為零 (0) 的帳戶
            case 1:
               puts("\nAccounts with zero balances:");

               // 循序讀取檔案內容，直到抵達檔案結尾 (EOF)
               while (!feof(cfPtr)) { 
                  // 只有當餘額等於 0 時才印出資料
                  if (balance == 0) {
                     printf("%-10d%-13s%7.2f\n", 
                        account, name, balance);
                  } 

                  // 繼續讀取下一筆客戶資料
                  fscanf(cfPtr, "%d%29s%lf",                    
                     &account, name, &balance);                
               } 

               break;
               
            // 選項 2：列出所有貸方餘額（Credit balances，即餘額 < 0，代表銀行欠客戶錢或客戶溢繳）
            case 2:
               puts("\nAccounts with credit balances:\n");

               // 循序讀取檔案內容，直到抵達檔案結尾 (EOF)
               while (!feof(cfPtr)) { 
                  // 只有當餘額小於 0 時才印出資料
                  if (balance < 0) {
                     printf("%-10d%-13s%7.2f\n", 
                        account, name, balance);
                  } 

                  // 繼續讀取下一筆客戶資料
                  fscanf(cfPtr, "%d%29s%lf",                    
                     &account, name, &balance);                
               } 

               break;
               
            // 選項 3：列出所有借方餘額（Debit balances，即餘額 > 0，代表客戶欠銀行錢）
            case 3:
               puts("\nAccounts with debit balances:\n");

               // 循序讀取檔案內容，直到抵達檔案結尾 (EOF)
               while (!feof(cfPtr)) { 
                  // 只有當餘額大於 0 時才印出資料
                  if (balance > 0) {
                     printf("%-10d%-13s%7.2f\n", 
                        account, name, balance);
                  } 

                  // 繼續讀取下一筆客戶資料
                  fscanf(cfPtr, "%d%29s%lf",                    
                     &account, name, &balance);                
               } 

               break;           
         }  

         // 【核心關鍵】使用 rewind 將檔案位置指標重新移回檔案的最開頭
         // 因為上面的 while 迴圈已經把整個檔案讀完了（指標停在 EOF），
         // 如果不重設指標，下一次迴圈進來就無法再次從頭搜尋檔案
         rewind(cfPtr); 

         // 提示使用者輸入下一個查詢請求
         printf("%s", "\n? ");
         scanf("%d", &request);
      } 

      puts("End of run.");
      fclose(cfPtr); // 關閉檔案
   } 
}
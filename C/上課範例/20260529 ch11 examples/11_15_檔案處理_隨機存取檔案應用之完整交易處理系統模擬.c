// Fig. 11.15: fig11_15.c
// 交易處理程式：循序讀取隨機存取檔案、更新已存在的檔案資料、
// 新增檔案資料，以及刪除先前已存在的檔案資料。
#include <stdio.h>

// 定義客戶資料結構體 (clientData)              
struct clientData {                                              
   unsigned int acctNum; // 帳號
   char lastName[15]; // 姓氏     
   char firstName[10]; // 名字   
   double balance; // 帳戶餘額            
}; 

// 函式原型宣告
unsigned int enterChoice(void) {
    return 0;
}
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);

int main(void)
{ 
   FILE *cfPtr; // accounts.dat 檔案指標

   // fopen 以二進位讀寫模式 ("rb+") 開啟檔案；若無法開啟則結束程式
   // "rb+" 模式允許我們在不破壞檔案原有結構的情況下，隨時讀取或寫入
   if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL) {
      puts("File could not be opened.");
   } 
   else { 
      unsigned int choice; // 儲存使用者的功能選擇

      // 讓使用者指定要執行的操作，直到選擇 5 結束程式
      while ((choice = enterChoice()) != 5) { 
         switch (choice) { 
            // 情況 1：將二進位紀錄檔案匯出為可列印的純文字檔
            case 1:
               textFile(cfPtr);
               break;
            // 情況 2：更新特定帳戶的餘額
            case 2:
               updateRecord(cfPtr);
               break;
            // 情況 3：建立新帳戶紀錄
            case 3:
               newRecord(cfPtr);
               break;
            // 情況 4：刪除現有的帳戶紀錄
            case 4:
               deleteRecord(cfPtr);
               break;
            // 如果使用者輸入了選單以外的數字，顯示錯誤訊息
            default:
               puts("Incorrect choice");
               break;
         } 
      } 

      fclose(cfPtr); // fclose 關閉檔案，確保資料安全寫入硬碟
   } 
} 

// 建立格式化的文字檔案以利輸出與列印
void textFile(FILE *readPtr)
{ 
   FILE *writePtr; // accounts.txt 檔案指標

   // 以寫入模式 ("w") 開啟或建立文字檔；若無法開啟則顯示錯誤
   if ((writePtr = fopen("accounts.txt", "w")) == NULL) {
      puts("File could not be opened.");
   } 
   else { 
      rewind(readPtr); // 將隨機存取檔案的指標重設回檔案最開頭 (0 的位置)
      fprintf(writePtr, "%-6s%-16s%-11s%10s\n", 
         "Acct", "Last Name", "First Name","Balance");

      // 循序走訪並複製隨機存取檔案中的所有有效紀錄到文字檔中
      while (!feof(readPtr)) { 
         // 建立一個預設空白的 clientData 結構體
         struct clientData client = {0, "", "", 0.0};
         
         // 從檔案讀取一筆結構體大小的資料
         int result = 
            fread(&client, sizeof(struct clientData), 1, readPtr);

         // 如果成功讀取，且該帳號不為 0（代表不是空白紀錄），則寫入文字檔
         if (result != 0 && client.acctNum != 0) {
            fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n",
               client.acctNum, client.lastName,         
               client.firstName, client.balance);      
         } 
      } 

      fclose(writePtr); // 關閉文字檔
   } 
}

// 更新帳戶紀錄中的餘額
void updateRecord(FILE *fPtr)
{ 
   // 取得使用者想要更新的帳號
   printf("%s", "Enter account to update (1 - 100): ");
   unsigned int account; // 帳號變數
   scanf("%d", &account);

   // 使用 fseek 將檔案指標移動到正確的紀錄位置 (Offset 定位)
   // 公式：(帳號 - 1) * 結構體大小。SEEK_SET 代表從檔案開頭算起
   fseek(fPtr, (account - 1) * sizeof(struct clientData), 
      SEEK_SET);                                               

   // 建立一個空白的結構體用來接收資料
   struct clientData client = {0, "", "", 0.0};

   // 從剛才定位好的位置讀取該筆紀錄
   fread(&client, sizeof(struct clientData), 1, fPtr);

   // 如果讀出來的帳號是 0，代表該位置目前沒有任何客戶資料
   if (client.acctNum == 0) {
      printf("Account #%d has no information.\n", account);
   } 
   else { // 開始更新紀錄
      printf("%-6d%-16s%-11s%10.2f\n\n", 
         client.acctNum, client.lastName, 
         client.firstName, client.balance);
      
      // 請求使用者輸入交易金額（正數代表簽帳、負數代表付款）
      printf("%s", "Enter charge (+) or payment (-): ");
      double transaction; // 交易金額
      scanf("%lf", &transaction);
      client.balance += transaction; // 更新結構體中的帳戶餘額
      
      printf("%-6d%-16s%-11s%10.2f\n", 
         client.acctNum, client.lastName, 
         client.firstName, client.balance);
      
      // 【關鍵步驟】剛才讀取 (fread) 時檔案指標已經往下移了，
      // 必須重新使用 fseek 定位回原本這筆紀錄的開頭位置
      fseek(fPtr, (account - 1) * sizeof(struct clientData), 
         SEEK_SET);                                               

      // 將更新後的結構體資料覆寫回檔案的原位置中
      fwrite(&client, sizeof(struct clientData), 1, fPtr);
   } 
}

// 刪除現有的帳戶紀錄
void deleteRecord(FILE *fPtr)
{ 
   // 取得使用者想要刪除的帳號
   printf("%s", "Enter account number to delete (1 - 100): ");
   unsigned int accountNum; // 帳號變數
   scanf("%d", &accountNum);

   // 定位到目標紀錄在檔案中的位置 
   fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), 
      SEEK_SET);                                                 

   struct clientData client; // 用來儲存從檔案讀出來的紀錄

   // 讀取該位置的資料 
   fread(&client, sizeof(struct clientData), 1, fPtr);

   // 如果帳號是 0，表示該帳戶原本就不存在
   if (client.acctNum == 0) {
      printf("Account %d does not exist.\n", accountNum);
   } 
   else { // 執行刪除操作
      // 【關鍵步驟】重新定位回該筆紀錄的開頭位置
      fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), 
         SEEK_SET);                                                 

      // 建立一個完全空白的結構體（帳號為 0，字串為空）
      struct clientData blankClient = { 0, "", "", 0 }; 

      // 藉由寫入空白紀錄來覆蓋掉原本的資料，即完成「刪除」
      fwrite(&blankClient,                                 
         sizeof(struct clientData), 1, fPtr);     
   } 
} 

// 新增並插入一筆帳戶紀錄
void newRecord(FILE *fPtr)
{ 
   // 取得使用者想要建立的新帳號
   printf("%s", "Enter new account number (1 - 100): ");
   unsigned int accountNum; // 帳號變數
   scanf("%d", &accountNum);

   // 定位到對應的檔案位置 
   fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), 
      SEEK_SET);                                                 

   // 建立空白結構體用來做衝突檢查
   struct clientData client = { 0, "", "", 0.0 };

   // 讀取該位置是否已有資料 
   fread(&client, sizeof(struct clientData), 1, fPtr);

   // 如果讀出來的帳號不為 0，代表這個位置已經被別人佔用了
   if (client.acctNum != 0) {
      printf("Account #%d already contains information.\n",
         client.acctNum);
   } 
   else { // 開始建立新紀錄
      // 請求使用者輸入姓氏、名字與初始餘額
      printf("%s", "Enter lastname, firstname, balance\n? ");
      // 使用格式限制（如 %14s）防止陣列輸入溢位
      scanf("%14s%9s%lf", &client.lastName, &client.firstName, 
         &client.balance);

      client.acctNum = accountNum; // 填入帳號
      
      // 【關鍵步驟】將檔案指標重新定位回該帳號對應的位置 
      fseek(fPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);      

      // 將填寫完畢的新資料正式寫入檔案中 
      fwrite(&client,                               
         sizeof(struct clientData), 1, fPtr);     
   } 
} 

// 顯示功能功能選單並接收使用者輸入
unsigned int enterChoice(void)
{ 
   // 輸出選單項目
   printf("%s", "\nEnter your choice\n"
      "1 - store a formatted text file of accounts called\n"
      "    \"accounts.txt\" for printing\n"
      "2 - update an account\n"
      "3 - add a new account\n"
      "4 - delete an account\n"
      "5 - end program\n? ");

   unsigned int menuChoice; // 儲存使用者輸入的變數
   scanf("%u", &menuChoice); // 接收使用者的數字
   return menuChoice;
}


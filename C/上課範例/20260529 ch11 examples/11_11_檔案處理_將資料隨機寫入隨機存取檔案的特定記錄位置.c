// Fig. 11.11: fig11_11.c
// 隨機寫入資料至隨機存取檔案
#include <stdio.h>

// 定義客戶資料結構體 (clientData)              
struct clientData {                                              
   unsigned int acctNum; // 帳號
   char lastName[15]; // 姓氏    
   char firstName[10]; // 名字   
   double balance; // 帳戶餘額   
};             
 
int main(void) 
{ 
   FILE *cfPtr; // accounts.dat 檔案指標

   // fopen 以二進位讀寫模式 ("rb+") 開啟檔案；若檔案不存在或無法開啟則結束程式
   // 注意：若 "accounts.dat" 尚未建立，必須先用 "wb" 模式建立並初始化 100 筆空白資料，才能用 "rb+" 進行隨機讀寫
   if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL) {
      puts("File could not be opened.");
   } 
   else { 
      // 建立一個預設空白的 clientData 結構體
      struct clientData client = {0, "", "", 0.0};

      // 要求使用者輸入想要的帳號（作為隨機寫入的位置依據）
      printf("%s", "Enter account number"
         " (1 to 100, 0 to end input): ");
      scanf("%d", &client.acctNum);

      // 當使用者輸入的帳號不為 0 時，持續執行迴圈進行寫入
      while (client.acctNum != 0) { 
         // 提示使用者輸入該帳號的姓氏、名字與帳戶餘額
         printf("%s", "Enter lastname, firstname, balance: ");
         
         // 從標準輸入 (stdin，即鍵盤) 讀取資料並寫入 client 結構體中
         // %14s 與 %9s 用於限制輸入字串長度，保留最後一個空間給字串結束符號 '\0'，防止緩衝區溢位
         fscanf(stdin, "%14s%9s%lf", client.lastName, 
            client.firstName, &client.balance);

         // 【核心步驟】利用 fseek 將檔案指標移動到使用者指定帳號的精確位置
         // 計算公式：(帳號 - 1) * 每筆結構體的大小。SEEK_SET 表示由檔案最開頭算起
         // 例如：輸入帳號 10，指標就會跳過前 9 筆資料的空間，精確對準第 10 筆紀錄的起點
         fseek(cfPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);         

         // 將結構體 client 內的資料，直接以二進位格式寫入到剛剛定位好的檔案位置中
         fwrite(&client, sizeof(struct clientData), 1, cfPtr);

         // 提示使用者輸入下一個帳號，以便進行下一筆隨機寫入（或是輸入 0 結束）
         printf("%s", "Enter account number: ");
         scanf("%d", &client.acctNum);
      } 

      fclose(cfPtr); // fclose 關閉檔案，確保緩衝區資料完全寫入硬碟並釋放資源
   } 
}



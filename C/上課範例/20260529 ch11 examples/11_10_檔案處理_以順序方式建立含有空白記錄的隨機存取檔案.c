// 圖 11.10: fig11_10.c
// 循序建立一個隨機存取檔案（初始化空白檔案）
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

   // fopen 以二進位寫入模式 ("wb") 開啟檔案；若無法開啟則結束程式
   // "wb" 模式非常霸道：如果檔案不存在，它會自動建立新檔；如果檔案已經存在，它會直接「清空」檔案內容
   if ((cfPtr = fopen("accounts.dat", "wb")) == NULL) {
      puts("File could not be opened.");
   } 
   else { 
      // 建立一個預設空白（初始化）的 clientData 結構體
      // 帳號為 0、名字姓氏為空字串、餘額為 0.0
      struct clientData blankClient = {0, "", "", 0.0}; 
   
      // 【核心邏輯】在檔案中連續寫入 100 筆完全空白的紀錄
      // 這個動作就像是在硬碟上進行「預分配空間」與「整地」的工程
      for (unsigned int i = 1; i <= 100; ++i) {                                    
         fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr);
      }                                                                           

      fclose(cfPtr); // fclose 關閉檔案，確保這 100 筆資料完整寫入磁碟並釋放資源
   } 
}
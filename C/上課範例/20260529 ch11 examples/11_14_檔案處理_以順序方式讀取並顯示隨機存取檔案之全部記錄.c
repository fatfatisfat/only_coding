// Fig. 11.14: fig11_14.c
// 循序讀取隨機存取檔案
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

   // fopen 以二進位唯讀模式 ("rb") 開啟檔案；若檔案不存在或無法開啟則結束程式
   if ((cfPtr = fopen("accounts.dat", "rb")) == NULL) {
      puts("File could not be opened.");
   } 
   else { 
      // 印出標題列，調整好欄位寬度與左右對齊（- 代表靠左對齊）
      printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name",
         "First Name", "Balance");

      // 循序讀取檔案中的所有紀錄，直到抵達檔案結尾 (EOF, End of File)
      while (!feof(cfPtr)) { 
         // 每次迴圈開始時，建立一個預設空白（初始化）的 clientData 結構體
         struct clientData client = {0, "", "", 0.0};

         // 從檔案中讀取一筆結構體大小的資料，並存入 client 變數中
         // fread 的回傳值（result）代表「成功讀取到的完整資料筆數」
         int result = fread(&client, sizeof(struct clientData), 1, cfPtr);

         // 顯示資料的過濾條件：
         // 1. result != 0 : 確保真的有成功讀到資料（避免讀到檔案最末端的換行或殘留字元）
         // 2. client.acctNum != 0 : 排除掉初始化的空白紀錄（只印出真正有開戶的客戶）
         if (result != 0 && client.acctNum != 0) {
            printf("%-6d%-16s%-11s%10.2f\n", 
               client.acctNum, client.lastName, 
               client.firstName, client.balance);
         } 
      } 

      fclose(cfPtr); // fclose 關閉檔案，釋放系統資源
   } 
}



/**************************************************************************
 * (C) Copyright 1992-2015 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/

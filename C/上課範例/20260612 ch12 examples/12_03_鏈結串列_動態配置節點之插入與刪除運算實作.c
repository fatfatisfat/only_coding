// Fig. 12.3: fig12_03.c
// 插入與刪除鏈結串列（Linked List）中的節點
#include <stdio.h>
#include <stdlib.h>

// 自我參照結構體 (Self-referential structure)                      
struct listNode {                                      
   char data; // 每個 listNode 包含一個字元資料
   struct listNode *nextPtr; // 指向下一節點的指標
}; 

typedef struct listNode ListNode; // 將 struct listNode 定義別名為 ListNode
typedef ListNode *ListNodePtr; // 將 ListNode* 定義別名為 ListNodePtr (節點指標)

// 函式原型宣告
void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{ 
   ListNodePtr startPtr = NULL; // 初始狀態：串列為空，沒有任何節點
   char item; // 儲存使用者輸入的字元

   instructions(); // 顯示功能選單
   printf("%s", "? ");
   unsigned int choice; // 使用者的選擇
   
   // 注意：微軟的 MSVC 編譯器建議使用 scanf_s，若在其他平台（如 Linux GCC）編譯，可改回一般的 scanf
   scanf_s("%u", &choice);

   // 當使用者選擇不是 3 時，持續執行迴圈
   while (choice != 3) { 

      switch (choice) { 
         case 1: // 插入元素
            printf("%s", "Enter a character: ");
            scanf("\n%c", &item); // \n 用於跳過緩衝區中的換行符號
            
            // 傳入 startPtr 的記憶體地址（雙重指標），這樣才能在函式內部修改 main 裡的串列開頭
            insert(&startPtr, item); 
            printList(startPtr);
            break;
            
         case 2: // 刪除元素
            // 檢查串列是否為空
            if (!isEmpty(startPtr)) { 
               printf("%s", "Enter character to be deleted: ");
               scanf("\n%c", &item);

               // 如果找到並成功刪除該字元
               if (delete(&startPtr, item)) { 
                  printf("%c deleted.\n", item);
                  printList(startPtr);
               } 
               else {
                  printf("%c not found.\n\n", item);
               } 
            } 
            else {
               puts("List is empty.\n");
            } 

            break;
            
         default:
            puts("Invalid choice.\n");
            instructions();
            break;
      } // 結束 switch

      printf("%s", "? ");
      // 注意：此處原程式碼為 scanf，若上方使用 scanf_s，此處維持一致較佳
      scanf("%u", &choice);
   } 

   puts("End of run.");
} 

// 顯示程式操作指令給使用者看
void instructions(void)
{ 
   puts("Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.");
} 

// 將新值依「字典順序/大小順序」插入到串列的正確位置中
void insert(ListNodePtr *sPtr, char value)
{ 
   // 動態配置記憶體給新節點
   ListNodePtr newPtr = malloc(sizeof(ListNode)); 

   if (newPtr != NULL) { // 檢查系統是否還有足夠的記憶體空間
      newPtr->data = value; // 將資料存入新節點
      newPtr->nextPtr = NULL; // 新節點的下一個指標暫時設為空

      ListNodePtr previousPtr = NULL; // 紀錄前一個節點的位置
      ListNodePtr currentPtr = *sPtr; // 紀錄當前走訪的節點位置（由串列開頭開始）

      // 迴圈走訪串列，尋找正確的插入位置（依字元大小排序）     
      while (currentPtr != NULL && value > currentPtr->data) {
         previousPtr = currentPtr; // 往下移：前驅指標指向目前節點             
         currentPtr = currentPtr->nextPtr; // 往下移：目前指標指向下一節點
      }                                          

      // 情況 A：新節點要插入在串列的最開頭 (此時 previousPtr 依然是 NULL)
      if (previousPtr == NULL) { 
         newPtr->nextPtr = *sPtr; // 新節點指向原本的開頭
         *sPtr = newPtr;          // 將串列開頭（startPtr）更新為新節點
      } 
      // 情況 B：新節點要插入在 previousPtr 與 currentPtr 之間，或是串列尾端
      else { 
         previousPtr->nextPtr = newPtr; // 前一個節點指向新節點
         newPtr->nextPtr = currentPtr;  // 新節點指向下一個節點
      } 
   } 
   else {
      printf("%c not inserted. No memory available.\n", value);
   } 
} 

// 刪除串列中的指定元素
char delete(ListNodePtr *sPtr, char value)
{ 
   // 情況 A：若要刪除的目標恰好是「第一個節點」
   if (value == (*sPtr)->data) { 
      ListNodePtr tempPtr = *sPtr; // 暫存要被刪除的節點，等一下釋放記憶體用
      *sPtr = (*sPtr)->nextPtr;    // 斷開鏈結：將串列開頭指向第二個節點
      free(tempPtr);               // 釋放記憶體，防止記憶體流失 (Memory Leak)
      return value;
   } 
   // 情況 B：要刪除的目標在串列的其他位置
   else { 
      ListNodePtr previousPtr = *sPtr;
      ListNodePtr currentPtr = (*sPtr)->nextPtr;

      // 迴圈尋找符合資料的節點
      while (currentPtr != NULL && currentPtr->data != value) { 
         previousPtr = currentPtr; // 往下移：前驅指標指向目前節點
         currentPtr = currentPtr->nextPtr; // 往下移：目前指標指向下一節點 
      } 

      // 程式執行到這，若 currentPtr 不為 NULL，代表找到了目標節點
      if (currentPtr != NULL) { 
         ListNodePtr tempPtr = currentPtr; // 暫存目標節點
         previousPtr->nextPtr = currentPtr->nextPtr; // 斷開鏈結：前驅節點直接連到目標的下一節點
         free(tempPtr); // 釋放記憶體
         return value;
      } 
   } 

   return '\0'; // 若走訪完串列都沒找到，回傳空字元
} 

// 檢查串列是否為空（若開頭指標為 NULL 則回傳 1，否則回傳 0）
int isEmpty(ListNodePtr sPtr)
{ 
   return sPtr == NULL;
} 

// 印出整個串列的內容
void printList(ListNodePtr currentPtr)
{ 
   // 如果串列是空的
   if (isEmpty(currentPtr)) {
      puts("List is empty.\n");
   } 
   else { 
      puts("The list is:");

      // 走訪串列直到末端 (NULL)
      while (currentPtr != NULL) { 
         printf("%c --> ", currentPtr->data); // 印出當前節點資料
         currentPtr = currentPtr->nextPtr;   // 移動到下一個節點
      } 

      puts("NULL\n");
   } 
}



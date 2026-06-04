// 佇列（Queue）的操作與維護
#include <stdio.h>
#include <stdlib.h>

// 自我參照結構體 (Self-referential structure)                     
struct queueNode {                                                   
   char data; // 定義資料欄位為字元 (char)            
   struct queueNode *nextPtr; // 指向下一節點的指標 (queueNode 指標)
}; 

typedef struct queueNode QueueNode; // 將 struct queueNode 定義別名為 QueueNode
typedef QueueNode *QueueNodePtr; // 將 QueueNode* 定義別名為 QueueNodePtr (節點指標)

// 函式原型宣告
void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void instructions(void);

// 主程式開始執行
int main(void)
{ 
   QueueNodePtr headPtr = NULL; // 初始化前端指標（指向第一個節點）
   QueueNodePtr tailPtr = NULL; // 初始化後端指標（指向最後一個節點）
   char item; // 儲存使用者輸入的字元

   instructions(); // 顯示功能選單
   printf("%s", "? ");
   unsigned int choice; // 使用者的選單選擇
   scanf("%u", &choice);

   // 當使用者選擇不是 3 時，持續執行迴圈
   while (choice != 3) { 

      switch(choice) { 
         // 情況 1：將資料排入佇列 (Enqueue)
         case 1:
            printf("%s", "Enter a character: ");
            scanf("\n%c", &item); // \n 用於跳過緩衝區中的換行符號
            enqueue(&headPtr, &tailPtr, item); // 傳入頭尾指標的地址以利修改
            printQueue(headPtr);
            break;
            
         // 情況 2：將資料移出佇列 (Dequeue)
         case 2:
            // 檢查佇列是否不為空
            if (!isEmpty(headPtr)) { 
               item = dequeue(&headPtr, &tailPtr);
               printf("%c has been dequeued.\n", item);
            } 

            printQueue(headPtr);
            break;
            
         default:
            puts("Invalid choice.\n");
            instructions();
            break;
      } // 結束 switch

      printf("%s", "? ");
      scanf("%u", &choice);
   } 

   puts("End of run.");
} 

// 顯示程式操作指令給使用者看
void instructions(void)
{ 
   printf ("Enter your choice:\n"
           "   1 to add an item to the queue\n"
           "   2 to remove an item from the queue\n"
           "   3 to end\n");
} 

// 在佇列的「尾端」新增一個節點 (Enqueue)
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{ 
   QueueNodePtr newPtr = malloc(sizeof(QueueNode)); // 動態配置記憶體給新節點

   if (newPtr != NULL) { // 檢查系統是否還有足夠的記憶體空間
      newPtr->data = value; // 將資料存入新節點
      newPtr->nextPtr = NULL; // 新節點一定是最後一個，所以下一個指標設為 NULL

      // 情況 A：若佇列目前是空的
      if (isEmpty(*headPtr)) {
         *headPtr = newPtr; // 第一個節點同時也是前端節點 (head)
      } 
      // 情況 B：若佇列目前已有其他節點
      else {
         (*tailPtr)->nextPtr = newPtr; // 讓原本的尾端節點指向這個新節點
      } 

      *tailPtr = newPtr; // 更新尾端指標 (tail)，使其指向最新加入的節點
   } 
   else {
      printf("%c not inserted. No memory available.\n", value);
   } 
} 

// 從佇列的「前端」移除一個節點 (Dequeue)
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{ 
   char value = (*headPtr)->data; // 暫存目前前端節點的資料，以便回傳     
   QueueNodePtr tempPtr = *headPtr; // 暫存目前前端節點的記憶體地址，等一下釋放用             
   *headPtr = (*headPtr)->nextPtr; // 斷開鏈結：將前端指標 (head) 移向下一節點

   // 特殊情況：如果移除該節點後，整個佇列變空了
   if (*headPtr == NULL) {
      *tailPtr = NULL; // 尾端指標 (tail) 也必須一併同步重設為 NULL
   } 

   free(tempPtr); // 釋放已斷開節點的記憶體，防止記憶體流失 (Memory Leak)
   return value; // 回傳被移除的資料
} 

// 檢查佇列是否為空（若前端指標為 NULL 則回傳 1，否則回傳 0）
int isEmpty(QueueNodePtr headPtr)
{ 
   return headPtr == NULL;
} 

// 印出目前佇列的所有內容
void printQueue(QueueNodePtr currentPtr)
{ 
   // 如果佇列是空的
   if (currentPtr == NULL) {
      puts("Queue is empty.\n");
   } 
   else { 
      puts("The queue is:");

      // 走訪整個佇列直到末端 (NULL)
      while (currentPtr != NULL) { 
         printf("%c --> ", currentPtr->data); // 印出當前節點資料
         currentPtr = currentPtr->nextPtr; // 移動到下一個節點
      } 

      puts("NULL\n");
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

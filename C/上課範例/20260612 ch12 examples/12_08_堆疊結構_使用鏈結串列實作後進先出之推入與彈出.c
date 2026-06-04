// Fig. 12.8: fig12_08.c
// 一個簡單的堆疊（Stack）程式
#include <stdio.h>
#include <stdlib.h>

// 自我參照結構體 (Self-referential structure)                     
struct stackNode {                                                   
   int data; // 定義資料欄位為整數 (int)             
   struct stackNode *nextPtr; // 指向下一節點的指標 (stackNode 指標)
};

typedef struct stackNode StackNode; // 將 struct stackNode 定義別名為 StackNode
typedef StackNode *StackNodePtr; // 將 StackNode* 定義別名為 StackNodePtr (節點指標)

// 函式原型宣告
void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

// 主程式開始執行
int main(void)
{ 
   StackNodePtr stackPtr = NULL; // 初始狀態：堆疊為空，頂端指標指向 NULL
   int value; // 儲存使用者輸入的整數
 
   instructions(); // 顯示功能選單
   printf("%s", "? ");
   unsigned int choice; // 使用者的選單選擇
   scanf("%u", &choice);

   // 當使用者選擇不是 3 時，持續執行迴圈
   while (choice != 3) { 

      switch (choice) { 
         // 情況 1：將數值推入堆疊 (Push)
         case 1:      
            printf("%s", "Enter an integer: ");
            scanf("%d", &value);
            push(&stackPtr, value); // 傳入頂端指標的地址（雙重指標）以利修改
            printStack(stackPtr);
            break;
            
         // 情況 2：將數值彈出堆疊 (Pop)
         case 2:      
            // 檢查堆疊是否不為空
            if (!isEmpty(stackPtr)) {
               printf("The popped value is %d.\n", pop(&stackPtr));
            } 

            printStack(stackPtr);
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
   puts("Enter choice:\n"
      "1 to push a value on the stack\n"
      "2 to pop a value off the stack\n"
      "3 to end program");
} 

// 在堆疊的「頂端」置入一個新節點 (Push)
void push(StackNodePtr *topPtr, int info)
{ 
   StackNodePtr newPtr = malloc(sizeof(StackNode)); // 動態配置記憶體給新節點

   // 將新節點插入堆疊頂端
   if (newPtr != NULL) { // 檢查系統是否還有足夠的記憶體空間         
      newPtr->data = info; // 將資料存入新節點         
      newPtr->nextPtr = *topPtr; // 新節點的下一步指向原本的頂端節點    
      *topPtr = newPtr; // 將頂端指標更新為這個新節點             
   }                     
   else { // 沒有足夠的記憶體空間
      printf("%d not inserted. No memory available.\n", info);
   } 
} 

// 從堆疊的「頂端」移除一個節點並回傳其數值 (Pop)
int pop(StackNodePtr *topPtr)
{ 
   StackNodePtr tempPtr = *topPtr; // 暫存目前頂端節點的記憶體地址，等一下釋放用            
   int popValue = (*topPtr)->data; // 暫存目前頂端節點的資料，以便回傳
   *topPtr = (*topPtr)->nextPtr; // 斷開鏈結：將頂端指標移向下一個節點
   free(tempPtr); // 釋放舊頂端節點的記憶體，防止記憶體流失 (Memory Leak)             
   return popValue; // 回傳被彈出的資料
} 

// 印出目前堆疊的所有內容（從頂端一路往下印）
void printStack(StackNodePtr currentPtr)
{ 
   // 如果堆疊是空的
   if (currentPtr == NULL) {
      puts("The stack is empty.\n");
   } 
   else { 
      puts("The stack is:");

      // 走訪整個堆疊直到末端 (NULL)
      while (currentPtr != NULL) { 
         printf("%d --> ", currentPtr->data); // 印出當前節點資料
         currentPtr = currentPtr->nextPtr; // 移動到下一個節點
      } 

      puts("NULL\n");
   } 
} 

// 檢查堆疊是否為空（若頂端指標為 NULL 則回傳 1，否則回傳 0）
int isEmpty(StackNodePtr topPtr)
{ 
   return topPtr == NULL;
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

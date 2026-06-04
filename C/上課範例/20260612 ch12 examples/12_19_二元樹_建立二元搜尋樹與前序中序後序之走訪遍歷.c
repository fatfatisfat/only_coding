// Fig. 12.19: fig12_19.c
// 建立與走訪二元樹
// 前序走訪 (preorder)、中序走訪 (inorder) 與 後序走訪 (postorder)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 自我參照結構體 (Self-referential structure)                            
struct treeNode {                                           
   struct treeNode *leftPtr; // 指向左子樹的指標 
   int data; // 節點儲存的數值                                        
   struct treeNode *rightPtr; // 指向右子樹的指標
}; 

typedef struct treeNode TreeNode; // 將 struct treeNode 定義別名為 TreeNode
typedef TreeNode *TreeNodePtr; // 將 TreeNode* 定義別名為 TreeNodePtr (節點指標)

// 函式原型宣告
void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

// 主程式開始執行
int main(void)
{ 
   TreeNodePtr rootPtr = NULL; // 初始狀態：樹為空，根節點為 NULL

   srand(time(NULL)); // 初始化隨機數種子
   puts("The numbers being placed in the tree are:");

   // 隨機產生 10 個介於 0 到 14 之間的整數並插入二元樹中
   for (unsigned int i = 1; i <= 10; ++i) { 
      int item = rand() % 15;
      printf("%3d", item);
      // 傳入 rootPtr 的記憶體地址（雙重指標），以便在函式內修改根節點的指向
      insertNode(&rootPtr, item);
   } 

   // 前序走訪樹 (順序：根節點 -> 左子樹 -> 右子樹)
   puts("\n\nThe preOrder traversal is:");
   preOrder(rootPtr);

   // 中序走訪樹 (順序：左子樹 -> 根節點 -> 右子樹)
   // 注意：在二元搜尋樹中，中序走訪的輸出結果一定會是「由小到大」排序好的
   puts("\n\nThe inOrder traversal is:");
   inOrder(rootPtr);

   // 後序走訪樹 (順序：左子樹 -> 右子樹 -> 根節點)
   puts("\n\nThe postOrder traversal is:");
   postOrder(rootPtr);
} 

// 將新節點插入二元樹中（符合二元搜尋樹 BST 規則）
void insertNode(TreeNodePtr *treePtr, int value)
{ 
   // 情況 A：如果目前位置是空的（找到合適的插入點或樹原本就是空的）
   if (*treePtr == NULL) {   
      *treePtr = malloc(sizeof(TreeNode)); // 動態配置記憶體給新節點

      // 如果記憶體配置成功，則開始初始化資料
      if (*treePtr != NULL) { 
         (*treePtr)->data = value;
         (*treePtr)->leftPtr = NULL;  // 新節點暫時沒有左子樹
         (*treePtr)->rightPtr = NULL; // 新節點暫時沒有右子樹
      } 
      else {
         printf("%d not inserted. No memory available.\n", value);
      } 
   } 
   // 情況 B：如果目前位置已經有節點了，則依大小決定往左或往右走
   else { 
      // 規則 1：若輸入的值「小於」目前節點的值，則往「左子樹」遞迴尋找插入位置
      if (value < (*treePtr)->data) {                   
         insertNode(&((*treePtr)->leftPtr), value);   
      }                                                 

      // 規則 2：若輸入的值「大於」目前節點的值，則往「右子樹」遞迴尋找插入位置
      else if (value > (*treePtr)->data) {                 
         insertNode(&((*treePtr)->rightPtr), value);     
      }                                                 
      // 規則 3：若數值重複（等於目前節點的值），在此程式中選擇忽略不處理
      else { 
         printf("%s", "dup"); // 印出 dup 表示重複 (duplicate)
      } 
   } 
} 

// 開始進行中序走訪 (In-order Traversal)
void inOrder(TreeNodePtr treePtr)
{ 
   // 遞迴終止條件：當節點為 NULL 時停止
   if (treePtr != NULL) {                
      inOrder(treePtr->leftPtr);         // 1. 先走訪左子樹
      printf("%3d", treePtr->data);      // 2. 再處理/印出目前節點
      inOrder(treePtr->rightPtr);        // 3. 最後走訪右子樹
   }                             
} 

// 開始進行前序走訪 (Pre-order Traversal)
void preOrder(TreeNodePtr treePtr)
{ 
   // 遞迴終止條件：當節點為 NULL 時停止
   if (treePtr != NULL) {                
      printf("%3d", treePtr->data);      // 1. 先處理/印出目前節點
      preOrder(treePtr->leftPtr);        // 2. 再走訪左子樹
      preOrder(treePtr->rightPtr);       // 3. 最後走訪右子樹
   }                             
} 

// 開始進行後序走訪 (Post-order Traversal)
void postOrder(TreeNodePtr treePtr)
{ 
   // 遞迴終止條件：當節點為 NULL 時停止
   if (treePtr != NULL) {                
      postOrder(treePtr->leftPtr);       // 1. 先走訪左子樹
      postOrder(treePtr->rightPtr);      // 2. 再走訪右子樹
      printf("%3d", treePtr->data);      // 3. 最後處理/印出目前節點
   }                             
}



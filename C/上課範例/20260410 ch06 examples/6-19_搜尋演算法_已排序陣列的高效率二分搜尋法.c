// Fig. 6.19: fig06_19.c
// 已排序陣列的二元搜尋。
#include <stdio.h>
#define SIZE 15

// 函式原型宣告
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
void printHeader(void);
void printRow(const int b[], size_t low, size_t mid, size_t high);

// 主程式開始執行
int main(void)
{
   int a[SIZE]; // 建立陣列 a

   // 建立測試資料
   for (size_t i = 0; i < SIZE; ++i) {
      a[i] = 2 * i;
   } 

   printf("%s", "Enter a number between 0 and 28: ");
   int key; // 準備在陣列 a 中尋找的值
   scanf("%d", &key);

   printHeader();

   // 在陣列 a 中搜尋目標值（key）
   size_t result = binarySearch(a, key, 0, SIZE - 1);

   // 顯示搜尋結果
   if (result != -1) {
      printf("\n%d found at index %d\n", key, result);
   } 
   else {
      printf("\n%d not found\n", key);
   } 
}

// 執行陣列二元搜尋的函式
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
   // 當低索引小於或等於高索引時持續循環
   while (low <= high) {

      // 計算目前搜尋子陣列的中間元素索引
      size_t middle = (low + high) / 2;

      // 顯示本次循環疊代所處理的子陣列
      printRow(b, low, middle, high);

      // 如果目標值與中間元素相符，回傳中間索引
      if (searchKey == b[middle]) {                                       
         return middle;                                                                      
      }                                                                   

      // 如果目標值小於中間元素，調整新的高索引
      else if (searchKey < b[middle]) {                    
         high = middle - 1; // 搜尋陣列的後半段（較小的一端）      
      }                                     

      // 如果目標值大於中間元素，調整新的低索引
      else {                                                                                   
         low = middle + 1; // 搜尋陣列的前半段（較大的一端）        
      }                                                                            
   } // end while

   return -1; // 找不到目標值
} 

// 印出輸出結果的標頭
void printHeader(void)
{
   puts("\nSubscripts:");

   // 輸出欄位索引標頭
   for (unsigned int i = 0; i < SIZE; ++i) {
      printf("%3u ", i);
   } 

   puts(""); // 換行

   // 輸出分隔線（由 - 字元組成）
   for (unsigned int i = 1; i <= 4 * SIZE; ++i) {
      printf("%s", "-");
   } 

   puts(""); // 換行
} 

// 印出一列輸出，顯示目前正在處理的陣列範圍
void printRow(const int b[], size_t low, size_t mid, size_t high)
{
   // 走訪整個陣列
   for (size_t i = 0; i < SIZE; ++i) {

      // 如果在當前子陣列範圍之外，顯示空白
      if (i < low || i > high) {
         printf("%s", "    ");
      }  
      else if (i == mid) { // 顯示中間元素
         printf("%3d*", b[i]); // 標記中間值
      } 
      else { // 顯示子陣列中的其他元素
         printf("%3d ", b[i]);
      } 
   } 

   puts(""); // 換行
}
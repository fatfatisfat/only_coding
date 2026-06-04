// Fig. 6.23: fig06_23.c
// 在 C99 中使用變長陣列（VLA）
#include <stdio.h>

// 函式原型宣告
void print1DArray(size_t size, int array[size]);
void print2DArray(size_t row, size_t col, int array[row][col]);

int main(void)
{
   printf("%s", "輸入一維陣列的大小: ");
   int arraySize; // 一維陣列的大小
   scanf("%d", &arraySize);

   int array[arraySize]; // 宣告一維變長陣列      

   printf("%s", "輸入二維陣列的列數（row）與行數（column）: ");
   int row1, col1; // 二維陣列的列數與行數
   scanf("%d %d", &row1, &col1);

   int array2D1[row1][col1]; // 宣告二維變長陣列

   printf("%s", 
      "輸入另一個二維陣列的列數與行數: ");
   int row2, col2; // 另一個二維陣列的列數與行數
   scanf("%d %d", &row2, &col2);

   int array2D2[row2][col2]; // 宣告二維變長陣列

   // 測試 sizeof 運算子用於變長陣列（VLA）的表現
   // 這裡會在執行期根據輸入的大小動態計算出位元組數
   printf("\nsizeof(array) 產生的陣列大小為 %d 位元組\n",
      sizeof(array));                                     

   // 為一維變長陣列的元素賦值
   for (size_t i = 0; i < arraySize; ++i) {
      array[i] = i * i;
   } 

   // 為第一個二維變長陣列的元素賦值
   for (size_t i = 0; i < row1; ++i) {
      for (size_t j = 0; j < col1; ++j) {
         array2D1[i][j] = i + j;
      } 
   } 

   // 為第二個二維變長陣列的元素賦值
   for (size_t i = 0; i < row2; ++i) {
      for (size_t j = 0; j < col2; ++j) {
         array2D2[i][j] = i + j;
      } 
   } 

   puts("\n一維陣列：");
   print1DArray(arraySize, array); // 將一維變長陣列傳遞給函式

   puts("\n第一個二維陣列：");
   print2DArray(row1, col1, array2D1); // 將二維變長陣列傳遞給函式

   puts("\n第二個二維陣列：");
   print2DArray(row2, col2, array2D2); // 將另一個二維變長陣列傳遞給函式
}

void print1DArray(size_t size, int array[size])
{
   // 輸出陣列內容
   for (size_t i = 0; i < size; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   } 
} 

void print2DArray(size_t row, size_t col, int array[row][col])
{
   // 輸出陣列內容
   for (size_t i = 0; i < row; ++i) {
      for (size_t j = 0; j < col; ++j) {
         printf("%5d", array[i][j]);
      } 

      puts("");
   } 
}
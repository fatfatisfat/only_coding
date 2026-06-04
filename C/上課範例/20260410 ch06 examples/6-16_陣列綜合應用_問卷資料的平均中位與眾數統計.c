// Fig. 6.16: fig06_16.c
// 使用陣列分析問卷資料；
// 計算資料的平均數（mean）、中位數（median）與眾數（mode）。
#include <stdio.h>
#define SIZE 99

// 函式原型宣告
void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], const unsigned int answer[]) ;
void bubbleSort(unsigned int a[]);
void printArray(const unsigned int a[]);

// 主程式開始執行
int main(void)
{
   unsigned int frequency[10] = {0}; // 初始化次數分配陣列
   
   // 初始化問卷回覆陣列
   unsigned int response[SIZE] =             
      {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
       7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
       6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
       7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
       6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
       7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
       5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
       7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
       7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
       4, 5, 6, 1, 6, 5, 7, 8, 7};

   // 處理問卷回覆資料
   mean(response);
   median(response);
   mode(frequency, response);
}

// 計算所有回覆數值的平均數
void mean(const unsigned int answer[])
{
   printf("%s\n%s\n%s\n", "********", "  Mean", "********");

   unsigned int total = 0; // 用來儲存陣列元素總和的變數

   // 加總所有回覆值
   for (size_t j = 0; j < SIZE; ++j) {
      total += answer[j];
   } 

   printf("The mean is the average value of the data\n"
          "items. The mean is equal to the total of\n"
          "all the data items divided by the number\n"
          "of data items (%u). The mean value for\n"
          "this run is: %u / %u = %.4f\n\n",
          SIZE, total, SIZE, (double) total / SIZE);
} 

// 將陣列排序並找出中位數的值
void median(unsigned int answer[])
{
   printf("\n%s\n%s\n%s\n%s", 
          "********", " Median", "********", 
          "The unsorted array of responses is");

   printArray(answer); // 輸出未排序的陣列

   bubbleSort(answer); // 將陣列排序

   printf("%s", "\n\nThe sorted array is");
   printArray(answer); // 輸出排序後的陣列

   // 顯示中位數元素
   printf("\n\nThe median is element %u of\n"
          "the sorted %u element array.\n"
          "For this run the median is %u\n\n",
          SIZE / 2, SIZE, answer[SIZE / 2]);
} 

// 找出出現次數最頻繁的回覆（眾數）
void mode(unsigned int freq[], const unsigned int answer[])
{
   printf("\n%s\n%s\n%s\n", "********", "  Mode", "********");

   // 初始化各分數的出現次數為 0
   for (size_t rating = 1; rating <= 9; ++rating) {
      freq[rating] = 0;
   } 

   // 統計各分數出現的次數
   for (size_t j = 0; j < SIZE; ++j) {
      ++freq[answer[j]];
   } 

   // 輸出結果欄位的標頭
   printf("%s%11s%19s\n\n%54s\n%54s\n\n",
          "Response", "Frequency", "Histogram",
          "1    1    2    2", "5    0    5    0    5");

   // 輸出統計結果
   unsigned int largest = 0; // 代表最高出現次數
   unsigned int modeValue = 0; // 代表眾數的值

   for (size_t rating = 1; rating <= 9; ++rating) {
      printf("%8u%11u          ", rating, freq[rating]);

      // 追蹤眾數的值與最高出現次數
      if (freq[rating] > largest) {                                 
         largest = freq[rating];                                                              
         modeValue = rating;                                                                    
      }                                                                   

      // 輸出代表出現次數的直方圖圖條（星號）
      for (unsigned int h = 1; h <= freq[rating]; ++h) {
         printf("%s", "*");
      } 

      puts(""); // 換行以輸出下一列
   } 

   // 顯示眾數結果
   printf("\nThe mode is the most frequent value.\n"
          "For this run the mode is %u which occurred"
          " %u times.\n", modeValue, largest);
} 

// 使用氣泡排序演算法將陣列排序的函式
void bubbleSort(unsigned int a[])
{
   // 控制排序回合數的迴圈
   for (unsigned int pass = 1; pass < SIZE; ++pass) {

      // 控制每回合比較次數的迴圈
      for (size_t j = 0; j < SIZE - 1; ++j) {

         // 如果順序不對（前大後小）則交換元素
         if (a[j] > a[j + 1]) {
            unsigned int hold = a[j];
            a[j] = a[j + 1];
            a[j + 1] = hold;
         } 
      } 
   } 
} 

// 輸出陣列內容（每列顯示 20 個數值）
void printArray(const unsigned int a[])
{
   // 走訪並輸出陣列內容
   for (size_t j = 0; j < SIZE; ++j) {

      if (j % 20 == 0) { // 每輸出 20 個數值就進行換行
         puts("");
      } 

      printf("%2u", a[j]);
   } 
}
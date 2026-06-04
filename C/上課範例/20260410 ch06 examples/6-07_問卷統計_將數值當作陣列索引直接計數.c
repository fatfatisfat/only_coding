// Fig. 6.7: fig06_07.c
// 分析學生問卷調查資料。
#include <stdio.h>
#define RESPONSES_SIZE 40 // 定義問卷回覆陣列的大小
#define FREQUENCY_SIZE 11 // 定義次數分配陣列的大小

// 主程式開始執行
int main(void)
{   
   // 初始化次數分配的計數器全部為 0
   int frequency[FREQUENCY_SIZE] = {0};
   
   // 將問卷調查的調查結果填入 responses 陣列中
   int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

   // 針對每一則回覆，取出 responses 陣列中的數值，
   // 並將該數值直接當作 frequency 陣列的索引，
   // 來決定哪一個評分元素的計數要累加。
   for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
      ++frequency[responses[answer]];
   } 

   // 顯示統計結果
   printf("%s%17s\n", "Rating", "Frequency");

   // 以表格格式輸出各評分（1 到 10）出現的次數
   for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
      printf("%6d%17d\n", rating, frequency[rating]);
   } 
}
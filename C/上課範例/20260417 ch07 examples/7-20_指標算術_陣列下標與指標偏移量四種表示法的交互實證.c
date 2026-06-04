// Fig. 7.20: fig07_20.cpp
// 對陣列使用索引記法與指標記法。
#include <stdio.h>
#define ARRAY_SIZE 4

int main(void)
{
   int b[] = {10, 20, 30, 40}; // 建立並初始化陣列 b
   int *bPtr = b; // 建立指標 bPtr 並將其指向陣列 b

   // 使用陣列索引記法輸出陣列 b
   puts("輸出陣列 b，使用：\n陣列索引記法");

   // 巡訪陣列 b
   for (size_t i = 0; i < ARRAY_SIZE; ++i) {
      printf("b[%u] = %d\n", i, b[i]);
   } 

   // 使用陣列名稱與指標/偏移量記法輸出陣列 b
   puts("\n指標/偏移量記法，其中\n"
        "指標即為陣列名稱");

   // 巡訪陣列 b
   for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
      printf("*(b + %u) = %d\n", offset, *(b + offset));  
   } 

   // 使用 bPtr 與陣列索引記法輸出陣列 b
   puts("\n指標索引記法");

   // 巡訪陣列 b
   for (size_t i = 0; i < ARRAY_SIZE; ++i) {
      printf("bPtr[%u] = %d\n", i, bPtr[i]);
   } 

   // 使用 bPtr 與指標/偏移量記法輸出陣列 b
   puts("\n指標/偏移量記法");

   // 巡訪陣列 b
   for (size_t offset = 0; offset < ARRAY_SIZE; ++offset) {
      printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));   
   } 
}
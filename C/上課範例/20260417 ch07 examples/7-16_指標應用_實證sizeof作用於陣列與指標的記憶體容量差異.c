// Fig. 7.16: fig07_16.c
// 對陣列名稱使用 sizeof 會返回該陣列所佔用的位元組總數。
#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr); // 函式原型宣告

int main(void)
{
   float array[SIZE]; // 建立陣列

   printf("陣列所佔用的位元組總數為 %u"            
          "\ngetSize 函式返回的位元組總數為 %u\n",
          sizeof(array), getSize(array));                
} 

// 返回指標變數 ptr 的大小
size_t getSize(float *ptr)
{
   return sizeof(ptr);
}
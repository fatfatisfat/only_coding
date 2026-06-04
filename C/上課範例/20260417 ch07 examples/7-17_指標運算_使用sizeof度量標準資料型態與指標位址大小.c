// Fig. 7.17: fig07_17.c
// 使用 sizeof 運算子來決定標準資料型態的大小。
#include <stdio.h>

int main(void)
{ 
   char c;           
   short s;         
   int i;       
   long l;         
   long long ll;         
   float f;        
   double d;         
   long double ld;   
   int array[20]; // 建立一個包含 20 個 int 元素的陣列
   int *ptr = array; // 建立一個指向該陣列的指標

   printf("     sizeof c = %u\tsizeof(char)  = %u"   
          "\n     sizeof s = %u\tsizeof(short) = %u"   
          "\n     sizeof i = %u\tsizeof(int) = %u"   
          "\n     sizeof l = %u\tsizeof(long) = %u"   
          "\n    sizeof ll = %u\tsizeof(long long) = %u"   
          "\n     sizeof f = %u\tsizeof(float) = %u"   
          "\n     sizeof d = %u\tsizeof(double) = %u"   
          "\n    sizeof ld = %u\tsizeof(long double) = %u"   
          "\n sizeof array = %u"   
          "\n   sizeof ptr = %u\n",    
          sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i,
          sizeof(int), sizeof l, sizeof(long), sizeof ll,           
          sizeof(long long), sizeof f, sizeof(float), sizeof d,     
          sizeof(double), sizeof ld, sizeof(long double),           
          sizeof array, sizeof ptr);                                  
}
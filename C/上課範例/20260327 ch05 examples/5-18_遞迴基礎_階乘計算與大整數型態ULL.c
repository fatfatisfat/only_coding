// Fig. 5.18: fig05_18.c
// 遞迴階乘函式。
#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void)
{
   // 在每次迴圈疊代中，計算
   // factorial(i) 並顯示結果
   for (unsigned int i = 0; i <= 21; ++i) {
      printf("%u! = %llu\n", i, factorial(i));
   } 
} 

// 階乘函式的遞迴定義  
unsigned long long int factorial(unsigned int number)
{                                                                     
   // 基本情況（終止條件）                                                                
   if (number <= 1) {                                                
      return 1;                                                        
   }                                                                  
   else { // 遞迴步驟                                   
      return (number * factorial(number - 1));     
   }                                                                
}
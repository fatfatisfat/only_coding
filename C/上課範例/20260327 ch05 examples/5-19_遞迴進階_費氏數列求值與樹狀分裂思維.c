// Fig. 5.19: fig05_19.c
// 遞迴費氏數列函式
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n); // 函式原型宣告

int main(void)
{
   unsigned int number; // 使用者輸入的數值

   // 從使用者端取得一個整數
   printf("%s", "Enter an integer: ");
   scanf("%u", &number);

   // 計算使用者輸入數值的費氏數列值
   unsigned long long int result = fibonacci(number);

   // 顯示結果
   printf("Fibonacci(%u) = %llu\n", number, result);
} 

// 費氏數列函式的遞迴定義              
unsigned long long int fibonacci(unsigned int n)      
{                                                                        
   // 基本情況（終止條件）                                                                  
   if (0 == n || 1 == n) {                                               
      return n;                                                            
   }                                            
   else { // 遞迴步驟                                   
      return fibonacci(n - 1) + fibonacci(n - 2);        
   }                                         
}
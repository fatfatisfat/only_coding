// Fig. 5.4: fig05_04.c
// 找出三個整數中的最大值。
#include <stdio.h>

int maximum(int x, int y, int z); // 函式原型宣告

int main(void)
{
   int number1; // 使用者輸入的第一個整數
   int number2; // 使用者輸入的第二個整數
   int number3; // 使用者輸入的第三個整數

   printf("%s", "Enter three integers: ");
   scanf("%d%d%d", &number1, &number2, &number3);
   
   // number1、number2 和 number3 是呼叫 maximum 函式時傳入的引數（Arguments）
   printf("Maximum is: %d\n", maximum(number1, number2, number3));
} 

// maximum 函式的定義                                      
// x、y 和 z 是接收數值的參數（Parameters）                                           
int maximum(int x, int y, int z)                                       
{                                                                         
   int max = x; // 先假設 x 是最大的數值                            
                                                                          
   if (y > max) { // 如果 y 比目前的 max 還大，         
      max = y; // 就把 y 賦值給 max                           
   }                                                           
                                                                          
   if (z > max) { // 如果 z 比目前的 max 還大，        
      max = z; // 就把 z 賦值給 max                      
   }                                                         
                                                                          
   return max; // 回傳最大值                            
}
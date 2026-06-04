// Fig. 5.16: fig05_16.c
// 變數作用域（Scoping）範例。
#include <stdio.h>

void useLocal(void); // 函式原型宣告
void useStaticLocal(void); // 函式原型宣告
void useGlobal(void); // 函式原型宣告

int x = 1; // 全域變數（Global variable）

int main(void)
{
   int x = 5; // main 函式的區域變數（Local variable）

   printf("local x in outer scope of main is %d\n", x);

   { // 開始新的作用域（區塊作用域）                                     
      int x = 7; // 此新作用域的區域變數（隱藏了外層的 x）               
                                                                                                 
      printf("local x in inner scope of main is %d\n", x);     
   } // 結束新作用域                                          

   printf("local x in outer scope of main is %d\n", x);

   useLocal(); // useLocal 擁有自動區域變數 x
   useStaticLocal(); // useStaticLocal 擁有靜態區域變數 x
   useGlobal(); // useGlobal 使用全域變數 x
   useLocal(); // useLocal 會重新初始化自動區域變數 x
   useStaticLocal(); // 靜態區域變數 x 會保留上一次呼叫後的值
   useGlobal(); // 全域變數 x 也會保留它的值

   printf("\nlocal x in main is %d\n", x);
} 

// useLocal 函式在每次被呼叫時，都會重新初始化區域變數 x
void useLocal(void)
{
   int x = 25; // 每次呼叫 useLocal 時都會被初始化

   printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
   ++x;
   printf("local x in useLocal is %d before exiting useLocal\n", x);
} 

// useStaticLocal 函式只在第一次被呼叫時初始化靜態區域變數 x；
// 在多次呼叫此函式的過程中，x 的值會被保留。
void useStaticLocal(void)
{
   // 只會被初始化一次
   static int x = 50;                        

   printf("\nlocal static x is %d on entering useStaticLocal\n", x);
   ++x;
   printf("local static x is %d on exiting useStaticLocal\n", x);
}

// useGlobal 函式在每次被呼叫時都會修改全域變數 x 的值
void useGlobal(void)
{
   printf("\nglobal x is %d on entering useGlobal\n", x);
   x *= 10;
   printf("global x is %d on exiting useGlobal\n", x);
}
// Fig. 6.21: fig06_21.c
// 初始化多維陣列。
#include <stdio.h>

void printArray(int a[][3]); // 函式原型宣告

// 主程式開始執行
int main(void)
{
   int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
   puts("Values in array1 by row are:");
   printArray(array1);

   int array2[2][3] = { 1, 2, 3, 4, 5 };           
   puts("Values in array2 by row are:");
   printArray(array2);

   int array3[2][3] = { { 1, 2 }, { 4 } };         
   puts("Values in array3 by row are:");
   printArray(array3);
}

// 輸出兩列三行陣列內容的函式
void printArray(int a[][3])                                 
{                                                                                             
   // 邏輯走訪每一列                                    
   for (size_t i = 0; i <= 1; ++i) {                                                               
                                                                                              
      // 輸出該列中的每一行（行值）                              
      for (size_t j = 0; j <= 2; ++j) {                            
         printf("%d ", a[i][j]);                        
      }                                    
                                                                                              
      printf("\n"); // 換行以輸出下一列          
   }                                       
}
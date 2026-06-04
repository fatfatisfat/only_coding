// Fig. 4.7: fig04_07.c
// 使用 switch 語句統計字母成績
#include <stdio.h>

int main(void)
{
   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0;
   unsigned int fCount = 0; 

   puts("Enter the letter grades.");
   puts("Enter the EOF character to end input.");
   int grade; // 存放單一成績

   // 迴圈直到使用者輸入檔案結束符號 (EOF)
   while ((grade = getchar()) != EOF) {
      
      // 判斷輸入的是哪一個成績
      switch (grade) { // switch 巢狀於 while 迴圈中

         case 'A': // 成績是大寫 A
         case 'a': // 或是小寫 a
            ++aCount; 
            break; // 必須使用 break 以跳出 switch

         case 'B': // 成績是大寫 B
         case 'b': // 或是小寫 b
            ++bCount;
            break;

         case 'C': // 成績是大寫 C
         case 'c': // 或是小寫 c
            ++cCount; 
            break;

         case 'D': // 成績是大寫 D
         case 'd': // 或是小寫 d
            ++dCount; 
            break;

         case 'F': // 成績是大寫 F
         case 'f': // 或是小寫 f
            ++fCount;
            break; 

         case '\n': // 忽略輸入中的換行符號、
         case '\t': // Tab 符號、
         case ' ':  // 以及空白字元
            break; 

         default: // 捕捉所有其他字元
            printf("%s", "Incorrect letter grade entered."); 
            puts(" Enter a new grade."); 
            break; 
      } 
   } // end while

   // 輸出統計結果總結
   puts("\nTotals for each letter grade are:");
   printf("A: %u\n", aCount);
   printf("B: %u\n", bCount); 
   printf("C: %u\n", cCount); 
   printf("D: %u\n", dCount); 
   printf("F: %u\n", fCount); 
}
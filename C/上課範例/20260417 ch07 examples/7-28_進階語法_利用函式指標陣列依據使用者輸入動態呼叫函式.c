// 圖 7.28: fig07_28.c
// 示範函式指標陣列的使用
#include <stdio.h>

// 函式原型宣告
void function1(int a);
void function2(int b);
void function3(int c);

int main(void)
{
   // 初始化一個包含 3 個函式指標的陣列，
   // 每個函式都接收一個 int 參數且回傳值為 void                               
   void (*f[3])(int) = {function1, function2, function3};    

   printf("%s", "請輸入一個 0 到 2 之間的數字，輸入 3 結束：");
   size_t choice; // 用來儲存使用者選擇的變數
   scanf("%u", &choice);

   // 處理使用者輸入的選擇
   while (choice >= 0 && choice < 3) {

      // 呼叫陣列 f 中索引值為 choice 的函式，並將 choice 作為參數傳入                                
      (*f[choice])(choice);                                

      printf("%s", "請輸入一個 0 到 2 之間的數字，輸入 3 結束：");
      scanf("%u", &choice);
   } 

   puts("程式執行完畢。");
} 

void function1(int a)
{
   printf("您輸入了 %d，因此呼叫了 function1\n\n", a);
}

void function2(int b)
{
   printf("您輸入了 %d，因此呼叫了 function2\n\n", b);
}

void function3(int c)
{
   printf("您輸入了 %d，因此呼叫了 function3\n\n", c);  
}
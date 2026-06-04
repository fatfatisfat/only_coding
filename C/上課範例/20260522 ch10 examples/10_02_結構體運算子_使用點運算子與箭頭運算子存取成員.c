// 圖 10.2: fig10_02.c
// 結構成員運算子（.）與
// 結構指標運算子（->）
#include <stdio.h>

// 定義撲克牌結構 (card structure)            
struct card {                           
   char *face; // 定義點數指標（如 Ace）   
   char *suit; // 定義花色指標（如 Spades）   
}; 

int main(void)
{ 
   struct card aCard; // 宣告一個 struct card 型態的變數   

   // 將字串常數賦值給 aCard 的成員
   aCard.face = "Ace";   
   aCard.suit = "Spades";

   struct card *cardPtr = &aCard; // 將 aCard 的記憶體地址指定給指標 cardPtr

   // 分別使用：結構變數、指標運算子、以及對指標取值後的變數來印出內容
   printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit,
      cardPtr->face, " of ", cardPtr->suit,                                   
      (*cardPtr).face, " of ", (*cardPtr).suit);                 
}
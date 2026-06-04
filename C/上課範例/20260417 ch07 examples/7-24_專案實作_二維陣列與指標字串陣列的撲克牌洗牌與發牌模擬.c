// Fig. 7.24: fig07_24.c
// 撲克牌洗牌與發牌。
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// 函式原型宣告
void shuffle(unsigned int wDeck[][FACES]); // 洗牌會修改 wDeck 的內容
void deal(unsigned int wDeck[][FACES], const char *wFace[], 
   const char *wSuit[]); // 發牌不會修改陣列內容

int main(void)
{
   // 初始化牌組陣列，全部填 0
   unsigned int deck[SUITS][FACES] = { 0 };

   srand(time(NULL)); // 設定隨機數產生器的種子

   shuffle(deck); // 洗牌

   // 初始化花色陣列                     
   const char *suit[SUITS] =            
      {"Hearts", "Diamonds", "Clubs", "Spades"};
   
   // 初始化點數陣列                   
   const char *face[FACES] =
      {"Ace", "Deuce", "Three", "Four",         
       "Five", "Six", "Seven", "Eight",         
       "Nine", "Ten", "Jack", "Queen", "King"};

   deal(deck, face, suit); // 發牌
} 

// 洗牌函式
void shuffle(unsigned int wDeck[][FACES])
{
   // 依序為 52 張牌的每一張牌，隨機選擇牌組中的空位
   for (size_t card = 1; card <= CARDS; ++card) {
      size_t row; // 列索引（代表花色）
      size_t column; // 行索引（代表點數）

      // 重複選擇新的隨機位置，直到找到尚未被佔用的位置為止
      do {                                                                        
         row = rand() % SUITS;                                   
         column = rand() % FACES;                             
      } while(wDeck[row][column] != 0); // do...while 結束

      // 將牌的編號放入牌組中選定的位置
      wDeck[row][column] = card;
   } 
}

// 發牌函式
void deal(unsigned int wDeck[][FACES], const char *wFace[],
   const char *wSuit[])
{
   // 依序發出每一張牌（從第 1 張到第 52 張）
   for (size_t card = 1; card <= CARDS; ++card) {
      // 巡訪 wDeck 的每一列
      for (size_t row = 0; row < SUITS; ++row) {
         // 巡訪當前列中的每一行
         for (size_t column = 0; column < FACES; ++column) {
            // 如果該位置的數字等於目前的牌號，就顯示這張牌
            if (wDeck[row][column] == card) {
               printf("%5s of %-8s%c", wFace[column], wSuit[row],
                  card % 2 == 0 ? '\n' : '\t'); // 以雙欄格式輸出
            } 
         } 
      } 
   } 
}
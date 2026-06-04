// 圖 10.3: fig10_03.c
// 使用結構 (structures) 的撲克牌洗牌與發牌程式
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// 定義撲克牌結構 (card structure)                  
struct card {                                 
   const char *face; // 定義點數指標（如 Ace, Deuce 等）   
   const char *suit; // 定義花色指標（如 Hearts, Diamonds 等）   
}; 

typedef struct card Card; // 為 struct card 定義新的型態名稱 Card   

// 函式原型宣告
void fillDeck(Card * const wDeck, const char * wFace[], 
   const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void)
{ 
   Card deck[CARDS]; // 宣告 Card 型態的陣列（一副牌）

   // 初始化點數指標陣列
   const char *face[] = { "Ace", "Deuce", "Three", "Four", "Five",
      "Six", "Seven", "Eight", "Nine", "Ten",
      "Jack", "Queen", "King"};

   // 初始化花色指標陣列
   const char *suit[] = { "Hearts", "Diamonds", "Clubs", "Spades"};

   srand(time(NULL)); // 設定隨機種子

   fillDeck(deck, face, suit); // 將撲克牌填入牌組中
   shuffle(deck); // 將撲克牌隨機洗牌
   deal(deck); // 發放全部 52 張牌
} 

// 將字串填入 Card 結構中（初始化整副牌）
void fillDeck(Card * const wDeck, const char * wFace[], 
   const char * wSuit[])
{ 
   // 巡覽整個牌組 (wDeck)
   for (size_t i = 0; i < CARDS; ++i) { 
      wDeck[i].face = wFace[i % FACES];
      wDeck[i].suit = wSuit[i / FACES];
   } 
} 

// 洗牌函式
void shuffle(Card * const wDeck)
{ 
   // 巡覽牌組並隨機交換撲克牌位置
   for (size_t i = 0; i < CARDS; ++i) { 
      size_t j = rand() % CARDS;
      Card temp = wDeck[i];      
      wDeck[i] = wDeck[j];
      wDeck[j] = temp;      
   } 
} 

// 發牌函式
void deal(const Card * const wDeck)
{ 
   // 巡覽整副牌並印出結果
   for (size_t i = 0; i < CARDS; ++i) {
      printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit,
         (i + 1) % 4 ? "  " : "\n");
   } 
}
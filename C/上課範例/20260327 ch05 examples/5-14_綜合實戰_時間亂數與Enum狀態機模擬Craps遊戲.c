// Fig. 5.14: fig05_14.c
// 模擬 Craps（雙骰子）遊戲。
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // 包含 time 函式的原型宣告

// 使用列舉常數代表遊戲狀態
enum Status { CONTINUE, WON, LOST };

int rollDice(void); // 函式原型宣告

int main(void)
{ 
   // 使用目前時間作為隨機數產生器的種子（隨機化）
   srand(time(NULL));

   int myPoint; // 玩家必須再次擲出這個點數（點數要相同）才能獲勝
   enum Status gameStatus; // 可包含 CONTINUE、WON 或 LOST
   int sum = rollDice(); // 第一次擲骰子

   // 根據第一次擲出的點數總和決定遊戲狀態
   switch(sum) {

      // 第一回合直接獲勝
      case 7: // 7 點獲勝
      case 11: // 11 點獲勝          
         gameStatus = WON; 
         break;

      // 第一回合直接輸掉
      case 2: // 2 點輸
      case 3: // 3 點輸
      case 12: // 12 點輸
         gameStatus = LOST; 
         break;

      // 記住點數，進入後續回合
      default:                  
         gameStatus = CONTINUE; // 玩家必須繼續擲骰子
         myPoint = sum; // 記住這個點數（成為設定點數）
         printf("Point is %d\n", myPoint);
         break; // 可選的（編譯良好習慣）
   } 

   // 當遊戲尚未結束時
   while (CONTINUE == gameStatus) { // 玩家必須繼續擲骰子
      sum = rollDice(); // 再次擲骰子

      // 判斷遊戲狀態
      if (sum == myPoint) { // 擲出與設定點數相同的點數，獲勝
         gameStatus = WON; 
      } 
      else {
         if (7 == sum) { // 在擲出設定點數前先擲出 7 點，判定落敗
            gameStatus = LOST; 
         } 
      } 
   }

   // 顯示獲勝或落敗的訊息
   if (WON == gameStatus) { // 玩家贏了嗎？
      puts("Player wins");
   } 
   else { // 玩家輸了
      puts("Player loses");
   } 
} 

// 模擬擲骰子、計算總和並顯示結果的函式
int rollDice(void)
{
   int die1 = 1 + (rand() % 6); // 隨機取得第一顆骰子點數（1-6）
   int die2 = 1 + (rand() % 6); // 隨機取得第二顆骰子點數（1-6）

   // 顯示這一回合擲骰子的結果
   printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
   return die1 + die2; // 回傳兩顆骰子的點數總和
}
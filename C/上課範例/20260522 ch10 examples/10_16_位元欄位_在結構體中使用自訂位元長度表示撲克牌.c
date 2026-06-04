// 圖 10.16: fig10_16.c
// 在結構體中使用位元欄位（Bit Fields）來表示撲克牌
#include <stdio.h>
#define CARDS 52 // 定義一副牌有 52 張

// 使用位元欄位定義的 bitCard 結構體
// 語法「欄位名 : 位元數」可以精確控制該變數在記憶體中只佔用幾個 Bit
struct bitCard {
    unsigned int face : 4;  // 點數：佔用 4 個位元，可表示 0-15 的範圍（足夠表達 0-12 點）      
    unsigned int suit : 2;  // 花色：佔用 2 個位元，可表示 0-3 的範圍（剛好表達 4 種花色）       
    unsigned int color : 1; // 顏色：佔用 1 個位元，可表示 0-1 的範圍（剛好表達 紅/黑 2 種顏色）         
};

typedef struct bitCard Card; // 將 struct bitCard 定義別名為 Card   

void fillDeck(Card * const wDeck); // 函式原型宣告：初始化整副牌
void deal(const Card * const wDeck); // 函式原型宣告：發牌與列印

int main(void)
{
    Card deck[CARDS]; // 宣告一個包含 52 張牌的 Card 陣列

    fillDeck(deck); // 洗牌/填入初始數值

    // 印出數值對應說明
    puts("Card values 0-12 correspond to Ace through King");
    puts("Suit values 0-3 correspond Hearts, Diamonds, Clubs and Spades");
    puts("Color values 0-1 correspond to red and black\n");
    
    deal(deck); // 執行發牌，將結果輸出到螢幕上
}

// 初始化整副撲克牌的數值
void fillDeck(Card * const wDeck)
{
    // 循序走訪 wDeck 陣列中 52 張牌的位置
    for (size_t i = 0; i < CARDS; ++i) {
        wDeck[i].face = i % (CARDS / 4);  // i % 13，得到 0 到 12 的點數 (Ace 到 King)
        wDeck[i].suit = i / (CARDS / 4);  // i / 13，得到 0 到 3 的花色 (紅心、方塊、梅花、黑桃)
        wDeck[i].color = i / (CARDS / 2); // i / 26，得到 0 到 1 的顏色 (前 26 張紅色、後 26 張黑色)
    }
}

// 以雙欄（Two-column）格式輸出撲克牌內容
// 左半邊欄位（k1）處理 0-25 張牌；右半邊欄位（k2）同步處理 26-51 張牌
void deal(const Card * const wDeck)
{
    // 印出雙欄表格的標頭
    printf("%-6s%-6s%-15s%-6s%-6s%s\n", "Card", "Suit", "Color",
        "Card", "Suit", "Color");

    // 迴圈同步推進：k1 從 0 開始，k2 從 26 開始，直到前 26 張牌走訪完畢
    for (size_t k1 = 0, k2 = k1 + 26; k1 < CARDS / 2; ++k1, ++k2) {
        // 印出左半邊第 k1 張牌的資訊
        printf("%-6d%-6d%-15d",
            wDeck[k1].face, wDeck[k1].suit, wDeck[k1].color);
        // 印出右半邊第 k2 張牌的資訊並換行
        printf("%-6d%-6d%d\n",
            wDeck[k2].face, wDeck[k2].suit, wDeck[k2].color);
    }
}
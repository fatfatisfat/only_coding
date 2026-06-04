// 圖 9.2: fig09_02.c
// 使用整數格式指定字
#include <stdio.h>

int main(void)
{ 
   printf("%d\n", 455);
   printf("%i\n", 455); // 在 printf 中 i 與 d 的功能相同（但在 scanf 中不同）
   printf("%d\n", +455); // 預設情況下正號不會被印出
   printf("%d\n", -455); // 負號會被印出
   printf("%hd\n", 32000); // h 修飾詞表示以 short 型態輸出
   printf("%ld\n", 2000000000L); // l 修飾詞表示以 long 型態輸出，L 後綴代表長整數字面常數
   printf("%o\n", 455); // 以八進位 (octal) 形式輸出
   printf("%u\n", 455); // 以無號十進位 (unsigned decimal) 形式輸出
   printf("%u\n", -455); // 負數以無號形式輸出時，會轉換為對應的補數數值
   printf("%x\n", 455); // 以小寫字母的十六進位 (hexadecimal) 形式輸出
   printf("%X\n", 455); // 以大寫字母的十六進位 (hexadecimal) 形式輸出
}
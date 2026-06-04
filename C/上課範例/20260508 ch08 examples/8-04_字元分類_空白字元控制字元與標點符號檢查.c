// 圖 8.4: fig08_04.c
// 使用 isspace、iscntrl、ispunct、isprint、isgraph 函式
#include <stdio.h>
#include <ctype.h>

int main(void)
{
   printf("%s\n%s%s%s\n%s%s%s\n%s%s\n\n", 
       "根據 isspace 的檢查結果：", 
       "換行符號 (Newline)", isspace('\n') ? " 是一個 " : " 不是一個 ",
       "空白字元", "水平縮排 (Horizontal tab)",
       isspace('\t') ? " 是一個 " : " 不是一個 ", 
       "空白字元",
       isspace('%') ? "% 是一個 " : "% 不是一個 ",
       "空白字元");

   printf("%s\n%s%s%s\n%s%s\n\n", "根據 iscntrl 的檢查結果：", 
       "換行符號 (Newline)", iscntrl('\n') ? " 是一個 " : " 不是一個 ",
       "控制字元", iscntrl('$') ? "$ 是一個 " : 
       "$ 不是一個 ", "控制字元");

   printf("%s\n%s%s\n%s%s\n%s%s\n\n", 
       "根據 ispunct 的檢查結果：",
       ispunct(';') ? "; 是一個 " : "; 不是一個 ", 
       "標點/標記字元",
       ispunct('Y') ? "Y 是一個 " : "Y 不是一個 ",
       "標點/標記字元",
       ispunct('#') ? "# 是一個 " : "# 不是一個 ",
       "標點/標記字元");

   printf("%s\n%s%s\n%s%s%s\n\n", "根據 isprint 的檢查結果：",
       isprint('$') ? "$ 是一個 " : "$ 不是一個 ", 
       "可列印字元", 
       "警示音符號 (Alert)", isprint('\a') ? " 是一個 " : " 不是一個 ",
       "可列印字元");

   printf("%s\n%s%s\n%s%s%s\n",  "根據 isgraph 的檢查結果：",
       isgraph('Q') ? "Q 是一個 " : "Q 不是一個 ",
       "除空格以外的可列印字元",
       "空格 (Space)", isgraph(' ') ? " 是一個 " : " 不是一個 ",
       "除空格以外的可列印字元");
}
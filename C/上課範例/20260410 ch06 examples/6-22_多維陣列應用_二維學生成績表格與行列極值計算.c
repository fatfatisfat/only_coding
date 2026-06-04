// Fig. 6.22: fig06_22.c
// 二維陣列處理。
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

// 函式原型宣告
int minimum(const int grades[][EXAMS], size_t pupils, size_t tests);
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests);

// 主程式開始執行
int main(void)
{
   // 初始化三位學生（列）的成績
   int studentGrades[STUDENTS][EXAMS] =  
      { { 77, 68, 86, 73 },
        { 96, 87, 89, 78 },
        { 70, 90, 86, 81 } };

   // 輸出陣列 studentGrades
   puts("The array is:");
   printArray(studentGrades, STUDENTS, EXAMS);

   // 找出最低與最高成績
   printf("\n\nLowest grade: %d\nHighest grade: %d\n",
      minimum(studentGrades, STUDENTS, EXAMS),
      maximum(studentGrades, STUDENTS, EXAMS));

   // 計算每位學生的平均成績
   for (size_t student = 0; student < STUDENTS; ++student) {
      printf("The average grade for student %u is %.2f\n", 
         student, average(studentGrades[student], EXAMS));
   } 
}

// 尋找最低成績
int minimum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
   int lowGrade = 100; // 初始化為最高可能的分數

   // 邏輯走訪成績的每一列（學生）
   for (size_t i = 0; i < pupils; ++i) {

      // 邏輯走訪成績的每一行（考試）
      for (size_t j = 0; j < tests; ++j) {

         if (grades[i][j] < lowGrade) {
            lowGrade = grades[i][j];
         } 
      } 
   } 

   return lowGrade; // 回傳最低成績 
} 

// 尋找最高成績
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests)
{
   int highGrade = 0; // 初始化為最低可能的分數

   // 邏輯走訪成績的每一列（學生）
   for (size_t i = 0; i < pupils; ++i) {

      // 邏輯走訪成績的每一行（考試）
      for (size_t j = 0; j < tests; ++j) {

         if (grades[i][j] > highGrade) {
            highGrade = grades[i][j];
         } 
      } 
   } 

   return highGrade; // 回傳最高成績
} 

// 計算特定學生的平均成績
double average(const int setOfGrades[], size_t tests)      
{                                                                
   int total = 0; // 考試成績總和                
                                                                 
   // 加總該位學生的所有成績                 
   for (size_t i = 0; i < tests; ++i) {                        
      total += setOfGrades[i];                          
   }                                        
                                                                 
   return (double) total / tests; // 回傳平均值         
} 

// 印出陣列內容
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests)
{
   // 輸出欄位標頭（考試標號）
   printf("%s", "                 [0]  [1]  [2]  [3]");

   // 以表格格式輸出成績
   for (size_t i = 0; i < pupils; ++i) {

      // 輸出列標籤（學生標號）
      printf("\nstudentGrades[%u] ", i);

      // 輸出該位學生的所有成績
      for (size_t j = 0; j < tests; ++j) {
         printf("%-5d", grades[i][j]);
      } 
   } 
}
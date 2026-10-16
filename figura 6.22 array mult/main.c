#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int set0Grades[], int tests);
void printArray(const int grades[][EXAMS], int pupils, int tests);

int main(void)
{
    int student;
    const int studentGrades[STUDENTS][EXAMS]=
    { { 77,68, 86, 73},
      {96, 87, 89, 78},
      { 70, 90, 86,81}};

      printf(" O array eh: \n");
      printArray(studentGrades, STUDENTS, EXAMS);

    printf("\n\nMenor nota: %d\nMaior nota: %d\n"
    ,minimum(studentGrades, STUDENTS, EXAMS)
    ,maximum(studentGrades, STUDENTS, EXAMS));

    for(student=0; student < STUDENTS; student++)
    {
        printf("A media do aluno %d eh %.2f\n", student
               , average(studentGrades[student], EXAMS));
    }

    return 0;
}
int minimum(const int grades[][EXAMS], int pupils, int tests) // menor noyta
{
    int i;
    int j;
    int lowGrade=100;

{

}    for(i=0; i<pupils; i++)
    {
        for(j=0; j< tests; j++)
        {
            if(grades[i][j] < lowGrade)
            {
                lowGrade= grades[i][j];
               // printf("a menor nota agora eh: %d\n", lowGrade);
            }
        }
    }
    return lowGrade;
}
int maximum(const int grades[][EXAMS], int pupils, int tests) // maior nota
{
    int j;
    int i;
    int highGrade=0;

    for( i=0; i<pupils; i++)
    {
        for(j=0; j<tests; j++)
        {
            if(grades[i][j] > highGrade)
            {
                highGrade= grades[i][j];
            }
        }
    }
    return highGrade;
}
double average(const int set0Grades[], int tests) // calculo da media
{
    int i;
    int total=0;
    // soma todas as notas de um aluno so
    for(i=0; i < tests; i++)
    {
        total+= set0Grades[i];
    }
    return(double) total/ tests;
}
void printArray(const int grades[][EXAMS], int pupils, int tests)
{
    int i;
    int j;

    printf("                  [0] [1] [2] [3]");

     for(i=0; i< pupils; i++)
     {

         printf("\nstudentGrades[%d]", i);

         for(j=0; j < tests; j++)
         {

         printf("%-5d", grades[i][j]);
         }
     }
}

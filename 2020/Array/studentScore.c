//该程序用来输入五个学生的成绩，并求其平均值
#include<stdio.h>
#include<stdlib.h>
  int main(void)
  {
      int score[5];
      int totalScore =0;
      int i; 
      printf("Input the scores  of  five students:\n");
      for (i=0;i<5;i++)
      {
          scanf("%d",&score[i]);
          totalScore  =totalScore +score[i];
      }
      printf("The average  score  is  %f\n",totalScore/5.0);
      system("pause");
      return 0;
  }
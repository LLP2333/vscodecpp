/*从键盘输入某班学生某门课的成绩（每班人数最多不超过40人，具体人数由键盘输入），
试分析下面的程序能否实现计算并输出最高分及相应学生的学号*/
#include<stdio.h>
#include<stdlib.h>
#define N 40
void FindMax(int score[],long num[],int n,int *pMaxScore,long *pMaxNum);
int main(void)
{
    int score[N],maxScore;/*score[N]为学生score数组*/
    int n,i;/*变量n表示学生成绩*/
    long num[N],maxNum;/*num[N]为学生id数组*/
    printf("How many students?\n");
    scanf("%d",&n);
    printf("Input student's ID  and score:\n");
    for(i=0;i<n;i++)
    {
      scanf("%ld%d",&num[i],&score[i]);
    }
    FindMax(score,num,n,&maxScore,&maxNum);
    printf("maxScore =%d,maxNum =%ld\n",maxScore,maxNum);
    system("pause");
    return 0;
}
void FindMax(int score[],long num[],int n,int *pMaxScore,long *pMaxNum)
{
    int i;
    *pMaxScore =score[0];
    *pMaxNum =num[0];
    for(i =1;i<n;i++)
    {
        if(score[i]>*pMaxScore)
        {
            *pMaxScore = score[i];
            *pMaxNum= num[i];
        }
    }
}
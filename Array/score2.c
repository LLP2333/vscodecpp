/*从键盘输入某班学生某门课的成绩（每班人数最多不超过40人）
当输入为负值，表示输入结束 ，输出总人数，平均成绩和最高分
注：平均成绩取整数*/
#include<stdio.h>
#include<stdlib.h>
#define N 40
int ReadScore(int score[]);
int FindMax(int score[],int n);
int Average(int score[],int n);

int main()
{
    int score[N],max,n;//n表示人数
    int average;
    n= ReadScore(score);
    printf("Total students are %d\n",n);
    average=Average(score,n);
    printf("The Average score is %d\n",average);
    max =FindMax(score,n);

    printf("The hightest score is %d\n",max);
    system("pause");
    return 0;
}
int ReadScore(int score[])
{
    int i=-1;
    do{
        i++;
        if(i<=40)//对输入的成绩个数限定为40，因为该程序定义的数组最多44元素，超出会越界
        {
        printf("input score:");
        scanf("%d",&score[i]);
        }
        else
        {
          break;
        }
        
        
    }while(score[i]>=0);
    return i;
}
int FindMax(int score[],int n)
{
    int max,i;
    for(i=1;i<n;i++)
    {
        if(score[i]>=max)
        {

            max=score[i];
        }
    }
    return max;
}
int Average(int score[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum +score[i];

    }
    if(n>0)
    {
        return sum/n;
    }
    else 
    {
        return -1;
    }
}
/*从键盘输入某班学生某门课的成绩（已知每班人数最多不超过40人，具体人数由键盘输入，
尝试编程计算其平均值*/
#include<stdio.h>
#include<stdlib.h>
#define N 40
int Average(int score[],int n);
void ReadScore(int score[],int n);
int main (void)
{
    int score[N],aver,n;
    printf("input n:");
    scanf("%d",&n);
    ReadScore(score,n);
    aver = Average(score,n);
    printf("Average  score is %d\n",aver);
    system("pause");
    return 0;
}
int Average(int score[],int n)
{
    int i,sum =0;
    if(n<=0)
    {
        return -1;//此处用来检查非法输入，如果n<=0,  返回值为-1
    }
else
    {
    for(i =0;i<n;i++)
    {
        sum=sum+score[i];
    }
    return sum/n;
     }
    
}
void ReadScore(int score[],int n)
{
    int i;
    printf("Please input score:\n");
    for  (i =0;i<n;i++)
    {
   scanf("%d",&score[i]);
   /*if (score[i]<=0)
   {
       scanf("%d",&score[i]);//原本想实现成绩输错 重新输入的，没有成功，明天再尝试。
   }*/
    }
}//现在我要提交代码了，本人大一计算机小白，上周才学会使用版本控制，感谢观看
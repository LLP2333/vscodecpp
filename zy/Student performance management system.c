/*学生成绩管理系统P226*/
#include<stdio.h>
#include<stdlib.h>
#define N  30
void ReadStudentScoreAndId(long num[],int score[],int n);//用来读取学号和成绩
int Average(int score[],int n);//用来计算成绩平均值
void  DataSort(int score[],int n);
void  DataSortPlus(long num[],int n);




int main(void)
{
    printf("1.Input record\n");
    printf("2.Caculate total  and average  score  of   course\n");
    printf("3.Sort  in descending  order  by  score\n");
    printf("4.Sort  in   descending   order by number\n");
    printf("5.Search  by   number\n");
    printf("6.Statistic  analysis\n");
    printf("7.List  record\n");
    printf("0.Exit\n");
    printf("Please  enter  your  choice\n");
    int  n;//这里n变量为班级人数
    char choice;
    int  score[N];
    long num[N];
    scanf("%c",&choice);
    getchar();
    switch (choice)
    {
        case '1':
        {printf("How many students?\n");
        scanf("%d",&n);
        ReadStudentScoreAndId(num,score,n);
        }
        break;
        case '2':
        {
            printf("sum=%d",Average( score,n)*n);
           printf("The AverageScore is %d",Average( score,n)) ;
        }
        break;
        case '3':
        {
            DataSort(score, n);
        }
        break;
        case '4':
        {
           DataSortPlus(num,n);
        }
        break;


    }
    
  
    system("pause");
    return 0;
}






void ReadStudentScoreAndId(long num[],int score[],int n)
{
   
    int i;
    printf("Input student's ID  and score:\n");
    for(i=0;i<n;i++)
    {
      scanf("%ld%d",&num[i],&score[i]);
    }
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
void  DataSort(int score[],int n)
{   
    int i,j,temp;
    for (i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
     {
       if(score[j]>score[i])
        {
           temp=score[j];
           score[j]=score[i];
            score[i]=temp;
        }
     }
   
    }
}
void  DataSortPlus(long num[],int n)
{
     int i,j,temp;
    for (i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
     {
       if(num[j]<num[i])
        {
           temp=num[j];
           num[j]=num[i];
            num[i]=temp;
        }
     }
   
    }
}
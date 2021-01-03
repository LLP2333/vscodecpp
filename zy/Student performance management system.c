/*学生成绩管理系统P226*/
#include<stdio.h>
#include<stdlib.h>
#define N  30
void ReadStudentScoreAndId(long num[],int score[],int n);//用来读取学号和成绩
int Sum(int score[],int n);//用来计算成绩平均值
void  DataSort(long num[],int score[],int n);
void  DataSortPlus(long num[],int score[],int n);
int  Search(long num[],long x,int n);
void Analysis(int score[],int analysis[], float percent[],int n);
void  output(long num[],int score[],int n,int t);

int main(void)
{
    printf("1.Input record\n");//录入每个学生的学号和考试成绩
    printf("2.Caculate total  and average  score  of   course\n");//计算成绩的总分和平均分
    printf("3.Sort  in descending  order  by  score\n");//按成绩由高到低排出名次表
    printf("4.Sort  in   descending   order by number\n");//按学号由小到大排出成绩表
    printf("5.Search  by   number\n");//按学号查询学生成绩及其考试成绩
    printf("6.Statistic  analysis\n");//将学生按成绩分为5类，统计每类人占的百分比
    printf("7.List  record\n");//输出每个学生的学号，考试成绩课堂总分和平均分
    printf("0.Exit\n");//退出
    
    int  n;//这里n变量为班级人数
    char choice;//储存用户的选择数据
    int  score[N];//成绩
    long num[N];//学号
    int x,i,t;//x表示某个学生的学号,i为搜索函数返回的数组下标，t用来储存平均数
    int analysis[5]={0};//用来储存5个成绩等级的人数（从高等级到低等级）
    float percent[5];//用来储存5个成绩等级的人数百分比
    
    
    do
    {
      printf("Please  enter  your  choice:\n");//请做出你的选择
      scanf("%c",&choice);
     switch (choice)
     {
        case '1':
        {
        printf("How many students?\n");
        scanf("%d",&n);
        ReadStudentScoreAndId(num,score,n);
        }
        break;
        case '2':
        {
            t=Sum( score,n);
           printf("sum=%d\n",t);
           printf("The AverageScore is %f\n",(float)t/n);
        }
        break;
        case '3':
        {
            DataSort(num,score, n);
        }
        break;
        case '4':
        {
           DataSortPlus(num,score,n);
        }
        break;
        case '5':
        {   
            printf("Please input the student ID\n");
           scanf("%d",&x);
           i=Search(num,x,n);
           if(-1!=i)
           {
              printf("the student is  %dth,score is %d\n",(i+1),score[i]);
           }
           else
           {
               printf("Can  not find !\n");
           }
           
           
        }
        break;
        case '6':
        {   
            Analysis(score,analysis,percent,n);
            printf("优秀人数有%d,占比%f\n",analysis[0],percent[0]);
            printf("良好人数有%d,占比%f\n",analysis[1],percent[1]);
            printf("中等人数有%d,占比%f\n",analysis[2],percent[2]);
            printf("及格人数有%d,占比%f\n",analysis[3],percent[3]);
            printf("不及格人数有%d,占比%f\n",analysis[4],percent[4]);
        }
        break;
        case '7':
        {
            output(num,score,n,t);
        }
        break;





     }
     fflush(stdin);
    
    }while(choice!='0');
    
  
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
    printf("输入结束\n");
}
int Sum(int score[],int n)
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
    return sum;
     }
}
void  DataSort(long num[],int score[],int n)
{   
    int i,j,temp1,temp2;
    for (i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)

     {
       if(score[j]>score[i])
        {
          { temp1=score[j];
           score[j]=score[i];
            score[i]=temp1;
          }
          {
            temp2=num[j];
            num[j]=num[i];
            num[i]=temp2;
          }
        }
     }
   
    }
}
void  DataSortPlus(long num[],int score[],int n)
{
     int i,j,temp1,temp2;
    for (i=0;i<(n-1);i++)
    {
        for(j=i+1;j<n;j++)
     {
       if(num[j]<num[i])
        {
           {temp1=num[j];
           num[j]=num[i];
            num[i]=temp1;
           }
           {
             temp2=score[j];
             score[j]=score[i];
            score[i]=temp2;
           }
        }
     }
   
    }
}

int  Search(long num[],long x,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(num[i]==x)
        return  i;
    }
    return -1;
}

void Analysis(int score[],int analysis[], float percent[],int n)
{
    int i;
    int k;
    for(i=0;i<n;i++)
    {
        if (score[i]>=90&&score[i]<=100)
        {
            analysis[0]=analysis[0]+1;
        }
        else  if(score[i]>=80&&score[i]<=89)
        {
            analysis[1]=analysis[1]+1;
        }
        else  if(score[i]>=70&&score[i]<=79)
        {
            analysis[2]=analysis[2]+1;
        }
        else  if (score[i]>=60&&score[i]<=69)
        {
            analysis[3]=analysis[3]+1;
        }
        else  if (score[i]>=0&&score[i]<=59)
        {
            analysis[4]=analysis[4]+1;
        }
    }//该循环语句用来分析各个成绩等级人数
    
    for (k=0;k<5;k++)
    {   
        percent[k]=(float)analysis[k]/n;
    }

}

void  output(long num[],int score[],int n,int t)
{   
    int i;
    printf("学号          成绩\n");
    for(i=0;i<n;i++)
    {
        printf("%ld%10d\n",num[i],score[i]);
    }
}




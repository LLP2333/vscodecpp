/*�Ӽ�������ĳ��ѧ��ĳ�ſεĳɼ���ÿ��������಻����40�ˣ�
������Ϊ��ֵ����ʾ������� �������������ƽ���ɼ�����߷�
ע��ƽ���ɼ�ȡ����*/
#include<stdio.h>
#include<stdlib.h>
#define N 40
int ReadScore(int score[]);
int FindMax(int score[],int n);
int Average(int score[],int n);

int main()
{
    int score[N],max,n;//n��ʾ����
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
        if(i<=40)//������ĳɼ������޶�Ϊ40����Ϊ�ó�������������44Ԫ�أ�������Խ��
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
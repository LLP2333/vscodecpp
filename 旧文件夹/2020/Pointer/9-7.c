/*�Ӽ�������ĳ��ѧ��ĳ�ſεĳɼ���ÿ��������಻����40�ˣ����������ɼ������룩��
�Է�������ĳ����ܷ�ʵ�ּ��㲢�����߷ּ���Ӧѧ����ѧ��*/
#include<stdio.h>
#include<stdlib.h>
#define N 40
void FindMax(int score[],long num[],int n,int *pMaxScore,long *pMaxNum);
int main(void)
{
    int score[N],maxScore;/*score[N]Ϊѧ��score����*/
    int n,i;/*����n��ʾѧ���ɼ�*/
    long num[N],maxNum;/*num[N]Ϊѧ��id����*/
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
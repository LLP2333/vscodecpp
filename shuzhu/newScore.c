/*�Ӽ�������ĳ��ѧ��ĳ�ſεĳɼ�����֪ÿ��������಻����40�ˣ����������ɼ������룬
���Ա�̼�����ƽ��ֵ*/
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
        return -1;//�˴��������Ƿ����룬���n<=0,  ����ֵΪ-1
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
       scanf("%d",&score[i]);//ԭ����ʵ�ֳɼ���� ��������ģ�û�гɹ��������ٳ��ԡ�
   }*/
    }
}//������Ҫ�ύ�����ˣ����˴�һ�����С�ף����ܲ�ѧ��ʹ�ð汾���ƣ���л�ۿ�
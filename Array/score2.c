/*�Ӽ�������ĳ��ѧ��ĳ�ſεĳɼ���ÿ��������಻����40�ˣ�
������Ϊ��ֵ����ʾ������� �����ż��㲢��ӡ��߷�*/
#include<stdio.h>
#include<stdlib.h>
#define N 40
int ReadScore(int score[]);
int FindMax(int score[],int n);

int main()
{
    int score[N],max,n;//n��ʾ����
    n= ReadScore(score);
    printf("Total students are %d\n",n);
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
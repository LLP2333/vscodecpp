//���������������������Խ����ڴ������ݵı仯���
/*#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a=1,c=2,b[5]={0},i;
    printf("%p,%p,%p\n",b,&c,&a);//���δ�ӡb,c,a,���׵�ַ
    for (i=0;i<=8;i++)
    {
        b[i] =i;
        printf("%d",b[i]);
    }
    printf("\n");
    printf("c=%d,a=%d,i=%d\n",c,a,i);
    system("pause");
}*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int b[5]={0};
    int i;
    for(i=0;i<5;i++)
    {
        printf("b[%d]=%d\n",i,b[i]);
    }
    system("pause");
}
//�����з��ֽ���int  b[5]={0}ʱ������ᶼ��ʼ��Ϊ��
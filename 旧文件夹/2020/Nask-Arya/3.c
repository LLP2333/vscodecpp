#include<stdio.h >
#include<stdlib.h>
int main(void)
{    
    int m,n;
    int a,b;
    int t;//�м����
    int x;//��С������
    printf("����������������m��n\n");
    scanf("%d%d",&m,&n);
    if(m<n)
    {
        t=m;
        m=n;
        n=t;
    }//ȷ��m>=n
    a=m;
    b=n;
    int k=a%b;
    while(k!=0)
    {
        a=b;
        b=k;
        k=a%b;
    }
    x=(m*n)/b;
    printf("���Լ��Ϊ��%d\n",b);
    printf("��С������Ϊ��%d\n",x);
    system("pause");
    return 0;


}
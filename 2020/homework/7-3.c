/*�ú�����̼��������������ֵ�����������е��ôӼ�����������������������ֵ*/
#include<stdio.h>
#include<stdlib.h>
int bigger(int ,int );
int main()
{
    int m,n,max;
    printf("please input two  integer\n");
    scanf("%d,%d",&m,&n);
    max=bigger(m, n);//ע������ط�����������
    printf("max=%d",max);
    system("pause");
    return 0;

}
int bigger(int a,int b)
{
    int t;
    if(a>=b)
    {
        t=a;
    }
    else
    {
        t=b;
    }
    return t;

    
}
//2020
#include<stdio.h>
#include<stdlib.h>
int max(int,int);
int main(void)
{    
    int a,b,c,d;
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("��������������\n");
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    if(c==a)
    {

        d=b;
    }
    else
    {
        d=a;
    }
    printf("��С����Ϊ%d %d\n",d,c);
    system("pause");
    
}
int max(int x,int y)
{
    int z;
    if(x>y)
    {
        z=x;
    }
    else z=y;
    return z;
}
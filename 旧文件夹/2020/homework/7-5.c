/*������׳˺���Fact()����̼��㲢�����1��n֮���������Ľ׳�ֵ*/
#include<stdio.h>
#include<stdlib.h>
int Fact(int m);
int main(void)
{
    int n,i,k;
    printf("please input an interger\n");
    scanf("%d",&n);
    printf("result\n");
    for(i=1;i<=n;i++)
    {
        k=Fact(i);
        printf("%d!=%ld",i,k);
        printf("\n");
    }
     system("pause");
     return 0;

}
int Fact(int m)
{
    int i,t=1;
    for(i=1;i<=m;i++)
    {
      t=t*i;

    }
    return t;
}
//2020
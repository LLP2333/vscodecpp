#include<stdio.h >
#include<stdlib.h>
int main(void)
{    
    int m,n;
    int a,b;
    int t;//中间变量
    int x;//最小公倍数
    printf("请输入两个正整数m和n\n");
    scanf("%d%d",&m,&n);
    if(m<n)
    {
        t=m;
        m=n;
        n=t;
    }//确保m>=n
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
    printf("最大公约数为：%d\n",b);
    printf("最小公倍数为：%d\n",x);
    system("pause");
    return 0;


}
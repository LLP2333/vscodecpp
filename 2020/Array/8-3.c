//本程序用来测试数组访问越界后内存中数据的变化情况
/*#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a=1,c=2,b[5]={0},i;
    printf("%p,%p,%p\n",b,&c,&a);//依次打印b,c,a,的首地址
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
//经运行发现仅当int  b[5]={0}时五个数会都初始化为零
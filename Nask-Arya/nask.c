#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("������һ���ַ���:\n");
    char n;
    int sum1=0,sum2=0;
    do{
        n=getchar();
        if(n>='A'&&n<='Z')
        sum1++;
        if(n>='a'&&n<='z')
        sum2++;

    }while(n!=' ');
    printf("��д��ĸ����%d,Сд��ĸ����%d\n",sum1,sum2);
    system("pause");
    return 0;
}
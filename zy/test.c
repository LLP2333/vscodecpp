#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define CONST 1.42e8               /*������ų���CONST��ֵΪ1.42e8*/
main()
{
    int n;
    double term,sum=0;
    for(n=1;n<=64;n++);
    {
        term=pow(2,n-1);
        sum=sum+term;
    }
    printf("sum=%e\n",sum);         /*��ӡ��������*/
    printf("volum=%e\n",sum/CONST); /*��ӡ�ۺϵ��������������*/
    system("pause");
}
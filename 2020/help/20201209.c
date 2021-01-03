//C语言程序第98页
#include<stdio.h>
#include<stdlib.h>
main()
{
	int a=1,b=2,c=3,d=5,e=8;
    float p;//本金
    int q;//年限
    float sum=0;
	printf("输入本金和年限(年限分1、2、3、5、8年5种)\n");
	scanf("%f,%d",&p,&q);
	switch(q)
	{
		case 1:sum=p+p*a*0.0025;
		break;
		case 2:sum=p+p*b*0.0243;
		break;
		case 3:sum=p+p*c*0.0270;
		break;
		case 5:sum=p+p*d*0.0288;
		break;
		case 8:sum=p+p*e*0.0300;
		break;
	}
	printf("sum=%f\n",sum);
    system("pause");
	return 0;
 }

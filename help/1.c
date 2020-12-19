/*
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char a='a',b;
    printf("%c,",++a);//a的ASCII值加一为b
    printf("%c\n",b=a++);//初始化字符变量b,b=a++和b=98等价
    system("pause");

}


#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int m=0x256,n=256;
    printf("%x %x\n",m,n);//以无符号的8进制整数形式输出，不输出前导符0  课本p48
    system("pause");
}


#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    double a,b; 
    int w;
    long c;
    a=3.1,b=2.5;
    printf("a=%lf,b=%lf\n",a,b);
    w=3;
    c=8;
    w=a=b;
    printf("a=%lf,b=%lf,w=%d",a,b,w);
    system("pause");
}
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i=0,s=0;
    for(;;)
{
     if(i==3||i==5)
       {
           printf("i=%d\n",i);
           i++;
           continue;
       }
      if(i==6) 
       break;
       i++;
      s+=i;
};
printf("%d\n",s);
system("pause");

}
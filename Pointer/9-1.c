/*今天是我第一次开始学习指针*/
#include<stdio.h>
#include<stdlib.h>
  int main()
{
    int a =0,b = 1;
    char c='A';
    int *pa,*pb;
    char *pc;
    pa=&a;
    pb=&b;
    pc=&c;
    printf("a is %d,&a is %p,pa is %p,&pa is %p\n",a,&a,pa,&pa);
    printf("b is %d,&b is %p,pb is %p,&pb is %p\n",b,&b,pb,&pb);
    printf("c is %c,&c is %p,pc is %p,&pc is %p\n",c,&c,pc,&pc);
    system("pause");
}




//输出列表printf之前的*pa是错误的
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month;
    printf("please input year:");
    scanf("%d",&year);
    if((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
    {
        int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    }
    else
    {
      int days[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    }
    printf("please ipput month:");
    scanf("%d",&month);
    printf("The month of %d in %d year have %d days",month,year,days[month-1]);
    system("pause");
    return 0;
    
    
}/*经过测试，语句块{}中定义的变量为局部变量，只能在花括号中生效
另外if语句后面如果不加花括号就定义变量，会报错，因为这里定义的变量在整个主函数有效
如果if语句为假，这个变量就失效了，而如果后面调用了该变量，可能会出现调用不存在的变量的
情况，这是编译器不允许的。
此外，目前数组初始化有两种
一是 int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
二是int days[12]；然后用scanf语句逐个赋值；
没有其他的方法。
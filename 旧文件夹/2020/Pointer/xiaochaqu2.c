/*
计算函数 F(x, y ,z)=(x+ y)/(x-y)+(z+ y)/(z-y)的值。其中x和y不相等，z和y不等。
例如，当x的值为9，y的值为11，2的值为15时，函数值为-3.50。
请改正程序中的错误，使它能得出正确的结果。
*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define FU(m, n) (m)/(n)
float fun(float a, float b, float c)
{
    float value;
value=FU(a+ b, a-b)+FU(c+ b, c-b);
return  value;
}
int main(void)
{
float x, y, z, sum;
printf ("Input x y z:: ");
scanf("%f%f%f",&x,&y,&z);
printf("x=%f, y=%f, z=%f\n ",x,y,z);
if (x==y||y==z) 
{
    printf ("Data error! \n ");
    exit (1);
}
sum=fun (x,y,z);
printf("The result is:%5.2f\n ",sum);
system("pause");
}
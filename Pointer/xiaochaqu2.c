/*
���㺯�� F(x, y ,z)=(x+ y)/(x-y)+(z+ y)/(z-y)��ֵ������x��y����ȣ�z��y���ȡ�
���磬��x��ֵΪ9��y��ֵΪ11��2��ֵΪ15ʱ������ֵΪ-3.50��
����������еĴ���ʹ���ܵó���ȷ�Ľ����
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
/*ģ�ⰴ���õ��õ�����*/
#include<stdio.h>
#include<stdlib.h>
void Fun(int *par);
int main(void)
{
  int arg =1;
  printf("arg = %d\n",arg);
  Fun(&arg);/*��arg�ĵ�ַ���뺯��*/
  printf("arg = %d\n",arg);
  system("pause");
  return 0;
}
void Fun(int *par)
{
    printf("par = %d\n",*par);/*����β�ָ��ı�����ֵ*/
    *par =2;/*�ı��β�ָ��ı�����ֵ*/
}
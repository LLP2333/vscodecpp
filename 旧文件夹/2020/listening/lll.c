//��дһ������������һ���ַ������ظ��ַ������4���ַ�
#include<stdio.h>
#include<stdlib.h>
int main(void)
{   char m,n;//����������ַ���������ַ�
  char f(int n);
   printf("Please input a character\n");
   scanf("%c",&m);
   n=f(m);
   printf("The forth character is %c",n);
   system("pause");
    return 0;
}
char f(int n)
{
    char s;
    int r;
    if(n>0)
  {
        f(n/2);
  }
    s=n%2+'0';
    return s;
}
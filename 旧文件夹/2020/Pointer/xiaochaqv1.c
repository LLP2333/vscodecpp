/*�ϴ��ϻ�����������
�Զ��庯����ͷ#define FU(m,n) (m/n)�Ĵ���
Ӧ��Ϊ#define FU(m,n) (m)/(n)
��Ϊ
 #define FU(m,n) (m/n)����д�������⡣
 �����㴫�����FU(1+2, 2+1)����Ԥ�����Ƿ����1+2/2+1���ṹ��3��
 ��ʵ��Ԥ�ڵĽ����1.����Ҫд��#define FU(m,n) (m)/(n)
 ������������֤һ��
 */
#include<stdio.h>
#include<stdlib.h>
#define FU(m,n)   (m)/(n)
int main(void)
{
    int m,n;
    printf("Please input m,n:");
    scanf("%d %d",&m,&n);
    printf("m/n=%d",FU(m,n));//����Ľ��Ϊ�����Ľ��
    system("pause");
}
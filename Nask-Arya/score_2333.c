#include<stdio.h>
#include<stdlib.h>
/*
int main(void)
{
	int n,t;//n��ʾ�����score
	printf("��������ĳɼ�(ע������Ϊ1��100��������\n");
	scanf("%d", &n);
	t = (n > 100) || (n < 0);
	while ( t )
	 {
			printf("�������볬����Χ������������\n");
			fflush(stdin);
			scanf("%d", &n);
         	t = (n > 100) || (n < 0);	
	}
	if (n >= 90 && n <= 100)
		printf("��ĳɼ��ȼ��������ΪA\n");
	else if (n >= 80 && n < 90)
		printf("��ĳɼ��������ΪB\n");
	else if (n >= 70 && n < 80)
		printf("��ĳɼ��������ΪC\n");
	else if (n >= 60 && n < 70)
		printf("��ĳɼ��������ΪD\n");
	else if (n >= 0 && n < 60)
		printf("��ĳɼ��������ΪE\n");
	    
	system("pause");


 }
 */
int main (void)
{
    float score;
    int t;
    int n;
    char grade;
    printf("��������ĳɼ�\n");
    scanf("%f", &score);
	t = (score > 100.0) ||( score < 0);
    while ( t )
	 {
			printf("�������볬����Χ������������\n");
			fflush(stdin);
			scanf("%f", &score);
         	t = (score > 100) || (score < 0);	
	}
    n=(int)(score/10.0);
   switch(n)
   {
       case 10:
         {
            grade='A';
             break;
         }
       case 9:
       {
           grade='A';
           break;
       }
       case 8:
        {
           grade='B';
           break;
       }
       case 7:
        {
           grade='C';
           break;
       }
       case 6:
        {
           grade='D';
           break;
       }
        default:
        {
            grade='E';
            break;
        }
   }
    printf("�ɼ���%3.1f,��Ӧ�ĵȼ���%c\n",score,grade);
    system("pause");
    return 0;

}
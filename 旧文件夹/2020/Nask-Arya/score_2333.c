#include<stdio.h>
#include<stdlib.h>
/*
int main(void)
{
	int n,t;//n表示输入的score
	printf("请输入你的成绩(注：分数为1到100的整数）\n");
	scanf("%d", &n);
	t = (n > 100) || (n < 0);
	while ( t )
	 {
			printf("您的输入超出范围，请重新输入\n");
			fflush(stdin);
			scanf("%d", &n);
         	t = (n > 100) || (n < 0);	
	}
	if (n >= 90 && n <= 100)
		printf("你的成绩等级评定结果为A\n");
	else if (n >= 80 && n < 90)
		printf("你的成绩评定结果为B\n");
	else if (n >= 70 && n < 80)
		printf("你的成绩评定结果为C\n");
	else if (n >= 60 && n < 70)
		printf("你的成绩评定结果为D\n");
	else if (n >= 0 && n < 60)
		printf("你的成绩评定结果为E\n");
	    
	system("pause");


 }
 */
int main (void)
{
    float score;
    int t;
    int n;
    char grade;
    printf("请输入你的成绩\n");
    scanf("%f", &score);
	t = (score > 100.0) ||( score < 0);
    while ( t )
	 {
			printf("您的输入超出范围，请重新输入\n");
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
    printf("成绩是%3.1f,相应的等级是%c\n",score,grade);
    system("pause");
    return 0;

}
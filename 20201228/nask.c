
#include<stdio.h>
#include<stdlib.h>
#
int main(void)
{     
    int str[10];
    int i;
    printf("please input char for ten times\n");
	for(i=0;i<10;i++)
	{
		scanf("%c",str[i]);
		//fflush(stdin);
	}
	for(i=0;i<10;i++)
	{
		printf("%c",str[i]);
	}
	system("pause");
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}
/*
#include<stdio.h>
#include<stdlib.h>
#define N  12
int main()
{
char name[N];
printf("Enter your name:");
scanf("%s",name);
printf("Hello %s!\n",name);
system("pause");
return 0;
}
*/

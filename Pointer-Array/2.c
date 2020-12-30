#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int a[5],i;
    printf("Input  five numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
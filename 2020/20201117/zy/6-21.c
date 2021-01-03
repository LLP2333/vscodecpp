#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n=0,t;
    printf("There are three warships A, B and C\n");
    printf("Warship A fires a salute every five seconds\n");
    printf("Warship B fires a salute every six seconds\n");
    printf("Warship C fires a salute every seven seconds\n");
    printf("They start firing at the same time\n");
     for(t=0;t<=20*7;t++)
    {
        if(t%5==0&&t<=20*5)
        {
            n++;
            continue;
        }
        if(t%6==0&&t<=20*6)
        {
            n++;
            continue;
        }
        if(t%7==0)
        {
            n++;
            continue;
        }
    }
    printf("The audience can hear the salute %d times",n);
    system("pause");


}
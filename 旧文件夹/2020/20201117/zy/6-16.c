#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int x,y,z;
    printf("the cock is five yuan each, the hen is three yuan each, Chickens are 1 yuan each\n");
    printf("now you have 100 yuan\n");
    printf("Here are the results\n");
    for(x=1;x<=20;x++)
    {
    
        for(y=1;y<=(100-5*x)/3;y++)
        {
            z=100-5*x-3*y;
            if(100==5*x+3*y+z)
            {
                printf("cock=%d,hen=%d,Chickens=%d\n",x,y,z);
            }
        }
    }
    system("pause");
}
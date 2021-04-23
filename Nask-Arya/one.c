#include <stdio.h>
#include<stdlib.h>
int main ()
{
    int i,j,k;
        for(i=1;i<6;i++)
    {
            for(j=0;j<=4-i;j++)
        {
                printf(" ");
        }
                    for(k=1;k<=2*i-1;k++)
            {
        printf("*");
            }
    printf("\n");    
    }
    system("pause");
    return 0;
}

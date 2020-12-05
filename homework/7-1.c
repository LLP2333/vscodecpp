#include<stdio.h>
#include<stdlib.h>
int square(int i);
int square(int i)
{
    return i*i;

}
int main()
{
    int i=0;
    i = square(i);
    for(;i<3;i++)
    {
        static int i=1;
        i +=square(i);
        printf("%d,",i);


    }
    printf("%d\n",i);
    system("pause");
    return 0;
}
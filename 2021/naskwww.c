#include<stdio.h>
#include<stdlib.h>
int main(void){

    char s[]= "\t\"Name\\Address\"\n";
    unsigned int t=sizeof(s);
    printf("%d\n",t);
    system("pause");
}
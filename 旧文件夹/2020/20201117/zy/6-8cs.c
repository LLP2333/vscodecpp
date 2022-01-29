#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(void)
{   
    printf("This exe is used to calculate the approximation of PI\n");
    double PI, sum = 0, term, sign = 1.0;

    int count = 0, n = 1;

    do {
        term = sign / n ;

        sum = sum +term ;

        count++;

        sign = -sign ;

        n = n + 2 ;

    } while( fabs(term) >= 1e-4);
    PI = sum * 4 ;
     printf(" PI =  %f\n count = %d \n",PI,count) ;
     system("pause");
}
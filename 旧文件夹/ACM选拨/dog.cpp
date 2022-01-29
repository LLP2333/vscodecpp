#include<iostream>
using namespace std;
int main(void)
{
    int i,j;
	int n;
	scanf("%d", &n);
	for ( i = n; i >= 1; i--)
	{
		for ( j = 1; j <=(n - i) ; j++)
			printf(" ");
		for (j = 1; j <= (2 * (i - 1) + 1); j++)
			printf("#");
		printf("\n");
    }
    system("pause");

}

#include <stdio.h>
#include <stdlib.h>
void main()
{
	char SName[30][10];
	void InputName(char ss[][10],int n);
	void PrintData(char ss[][10],int n);
	void SortData(char ss[][10],int n);
	int t=5;

	InputName(SName,t);
	PrintData(SName,t);
	SortData(SName,t);
    PrintData(SName,t);
}


void InputName(char a[][10],int n)
{
	int i;
	
	for (i=0;i<n;i++)
		scanf("%s",a[i]);
}

void PrintData(char a[][10],int n)
{
	int i;

	for (i=0;i<n;i++)
		printf("%15s",a[i]);
	printf("\n");
}

void SortData(char a[][10],int n)
{
	
    int CompareN(char x[],char y[]);
	void CopyN(char x[],char y[]);

	
	int i,j,k;


	for (i=0;i<n-1;i++)
	{
		k=i;
		for (j=i+1;j<n;j++)
			if ( CompareN(a[j],a[k]) > 0 )
				k=j;
		if (k!=i)
		{
			char temp[10];
			CopyN(temp,a[k]);
			CopyN(a[k],a[i]);
			CopyN(a[i],temp);
		}
	}
}

int CompareN(char x[],char y[])
{
	int i;
	i=0;
	while ( x[i]==y[i]  && x[i]!='\0' && y[i] != '\0' ) i++;

	
	if ( x[i] != y[i] )
		    return x[i]-y[i];
	else if (x[i]=='\0' )
		       return -1;
	     else  if (y[i]=='\0') return 1;
		       else  return 0;
}
	
void CopyN(char x[],char y[])
{
	int i;
	i=0;
	while ( (x[i]=y[i]) != '\0') i++;
}

		

		


/*




#include <stdio.h>
#include <stdlib.h>
#define N 11
void main()
{
	int a[N],n;

	InputData(a,n);
	PrintData(a,n);
	SortData(a,b);
	InsertData(a,x,n); //在数组中插入一个数x
	PrintData(a,n);
	system("pause");
}

void InputData(int b[],int n)
{
	int i;


}

void PrintData(int b[],int n)
{
	int i;


}

void SortData(int b[],int n)
{
	int i,j,k;



}

void InsertData(int b[],int x, int n)
{
	int i,j;





}


*/




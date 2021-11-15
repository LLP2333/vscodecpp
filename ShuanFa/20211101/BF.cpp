#include<iostream>
#include<cstring>
#include<string>
using namespace std;
#define MAXLEN 255
typedef struct SString{
    char ch[MAXLEN+1];
    int lengh;
}SString;

int  StrAssign(SString& T, char * chars) { //生成一个其值等于chars的串T
	int i;
	if (strlen(chars) > MAXLEN)
		return 0;
	else {
		T.lengh =strlen(chars);
		for (i = 1; i <= T.lengh; i++)
			T.ch[i] =*(chars+i-1);
		return 1;
	}

}
int index_BF(SString S,SString T,int pos)
{
    int i=pos,j=1;
    while(i<S.lengh&&j<T.lengh)
    {
        if(S.ch[i]==T.ch[j])
        {
            i++;
            j++;
        }
        else
        {
          i=i-j+2;
          j=1;
        }
    }
    if(j>T.lengh)
    cout<<i<<' '<<j<<' '<<T.lengh;
    //return (i-T.lengh);
    else return 0;
}

int main()
{
    //cout<<"hello"<<endl;
    SString a,b;
    int k=StrAssign(a,"aaaaba");
    cout<<k;
    StrAssign(b,"a");
    int t;
    //cin>>t;
    t=index_BF(a,b,1);
    cout<<t<<endl;
    system("pause");
    return 0;
    

}
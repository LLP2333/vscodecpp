#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int righ[100005],lef[100005];

int main(){
    memset(righ,-1,sizeof(righ));//初始化
    memset(lef,-1,sizeof(lef));
    int N,M;
    scanf("%d",&N);
    lef[1]=0;//1的左边为0
    lef[0]=N;//0的左边先看作N
    for(int i=2;i<=N;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(b==0){//插入a的左边的操作
            lef[i]=lef[a];
            int k=lef[a];
            lef[a]=i;
            righ[i]=a;
            righ[k]=i;
        }
        else if(b==1){//插入a的右边的操作
            lef[i]=a;
            int k=righ[a];
            righ[a]=i;
            righ[i]=k;
            lef[k]=i;
        }
    }
    scanf("%d",&M);
    for(int i=1;i<=M;i++){
        int c;
        scanf("%d",&c);
        //删除操作
        righ[lef[c]]=righ[c];
        lef[righ[c]]=lef[c];
        //已删除
        righ[c]=-1;
        lef[c]=-1;
    }

    int d=righ[0];

    while(1){
        printf("%d ",d);
        if(righ[d]==-1)
            break;
        d=righ[d];
    }
    printf("\n");
return 0;
}
//如何手写一个堆？完全二叉树 5个操作
//1. 插入一个数         heap[ ++ size] = x; up(size);
//2. 求集合中的最小值   heap[1]
//3. 删除最小值         heap[1] = heap[size]; size -- ;down(1);
//4. 删除任意一个元素   heap[k] = heap[size]; size -- ;up(k); down(k);
//5. 修改任意一个元素   heap[k] = x; up(k); down(k);
#include <iostream>

using namespace std;

int const N = 100010;

//h[i] 表示第i个结点存储的值，i从1开始，2*i是左子节点，2*i + 1是右子节点
//size 既表示堆里存储的元素个数，又表示最后一个结点的下标
int h[N], siz; //堆有两个变量h[N]，size; 怎么这里的size和文件里有冲突，只能改成siz了

void down(int u)
{
    int t = u;//t存储三个结点中存在的最小的结点的下标，初始化为当前结点u
    if (u * 2 <= siz && h[u * 2] < h[t]) t = u * 2; // 左子节点存在并且小于当前结点，更新t的下标
    if (u * 2 + 1 <= siz && h[u * 2 + 1] < h[t]) t = u * 2 + 1;//右子节点存在并且小于当前结点，更新t的下标
    if (t != u)//如果t==u意味着不用变动，u就是三个结点中拥有最小值的结点下标，否则交换数值
    {
        swap(h[t], h[u]);
        down(t); //交换数值后，t这个结点存储原本u的值，u存储存储t的值（三个数中的最小值）。u不用调整了，但t情况不明，可能需要调整。直到它比左右子节点都小
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i ++ ) scanf("%d", &h[i]); 
    siz = n; //初始化size,表示堆里有n 个元素

    for (int i = n / 2; i; i --) down(i); //把堆初始化成小根堆，从二叉树的倒数第二行开始，把数字大的下沉

    while (m -- )
    {
        printf("%d ", h[1]);
        h[1] = h[siz];
        siz --;
        down(1);
    }

    return 0;
}
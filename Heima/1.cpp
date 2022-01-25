#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void myPrint(int val)
{
    cout<<val<<endl;
}


void  test01()
{
    //创建vector数组
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
//  //第一种遍历方法
//     vector<int>::iterator itBegin=v.begin();//指向容器开头
//     vector<int>::iterator itEnd=v.end();//指向容器末尾最后一个元素的下一个位置

//     while ((itBegin!=itEnd))
//     {
//         cout<<*itBegin<<endl;
//         itBegin++;
//     }
//     //第二种
//     for(vector<int>::iterator it=v.begin();it!=v.end();it++)
//     {
//         cout<<*it<<endl;
//     }
    //第三种
    for_each(v.begin(),v.end(),myPrint);

    

}

int main()
{

   test01();
    system("pause");
    return 0;
}
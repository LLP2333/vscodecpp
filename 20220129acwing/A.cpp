#include<iostream>
#include<string>
using  namespace std;

int main()
{
  string   s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]<'a')
      {
          s[i]+=32;
      }
  }
  for(int i=0;i<s.size();i++)
  {
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
     {
         s[i]=-1;
     }
  }
  int i=0;
  while (i<s.size())
  {
      if(s[i]!=-1)
      {
          cout<<'.'<<s[i];
      }
      i++;
  }
  



    system("pause");
    return 0;

}
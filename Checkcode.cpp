#include <iostream>
#include <string.h>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    int a,b,ctr=0,index=0;
    string s;
   cin>>a>>b>>s;
  for(int i=0;i<s.length();i++){
    if(s[i]-48>=0&&s[i]-48<=9)
        ctr++;
    if(s[i]=='-')
        index=i;
  }
  if(ctr==s.length()-1&&index==a)
    cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}


#include <iostream>
#include <climits>
using namespace std;
int main()
{
string s;
cin>>s;
long long num=0;
for(int i=0;i<s.size();++i){
    if(s[i]>='0'&&s[i]<='9')
        num+=s[i]-'0';
}
cout<<num<<endl;
}

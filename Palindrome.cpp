#include <iostream>
#include <climits>
using namespace std;
int main()
{
string s;
cin>>s;
for(int i=0,j=s.size()-1;i<s.size()&&j>=0;++i,--j){
  if(s[i]!=s[j]){
    cout<<"NO"<<endl; return 0;
  }
}
cout<<"YES"<<endl;
}

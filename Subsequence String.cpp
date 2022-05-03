#include <iostream>
#include <map>
using namespace std;
int main()
{
 string s; cin>>s;
 string w="hello";
 int j=0;
 for(int i=0;i<s.size();++i){
    if(s[i]==w[j]){
        ++j;
        if(j==5)
        {
            cout<<"YES"<<endl;  return 0;
        }
    }
 }
 cout<<"NO"<<endl;
}

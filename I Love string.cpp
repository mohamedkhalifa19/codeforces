#include <iostream>
#include <map>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
    string s1,s2; cin>>s1>>s2;
    int len=max(s1.size(),s2.size());
    for(int i=0;i<len;i++){
        if(i<s1.size())
            cout<<s1[i];
          if(i<s2.size())
            cout<<s2[i];
    }
    cout<<endl;
 }
}

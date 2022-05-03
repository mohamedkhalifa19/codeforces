#include <iostream>
#include <map>
using namespace std;
int main()
{
 string s;
 bool f=0;
 while(cin>>s){
     if(f==1)
    cout<<" ";
    for(int i=s.size()-1;i>=0;--i){
        f=1;
        cout<<s[i];
    }

 } // i love you

}

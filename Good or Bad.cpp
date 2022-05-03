#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
     bool b=0;
    for(int i=0;i<s.size()-2;++i){
        if((s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1')||(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')){
            b=1;
            break;
        }
    }
    if(b==0)
    cout<<"Bad"<<endl;
    else cout<<"Good"<<endl;
}
}

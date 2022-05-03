#include <iostream>
#include <map>
using namespace std;
int main()
{
string s;
cin>>s;
int fr[125]={0};
for(int i=0;i<s.size();++i){
    fr[s[i]-65]++;
}
for(int i=0;i<125;i++){
    if(fr[i])
        cout<<char(i+65)<<" : "<<fr[i]<<endl;
}
}

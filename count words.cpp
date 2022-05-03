#include<iostream>
#include<vector>
#include<sstream>
#define  ll long long
using namespace std;
int main(){
string s;
getline(cin,s);
for(int i=0;i<s.size();i++){
    if(s[i]=='.'||s[i]==','||s[i]=='?'||s[i]=='!')
        s[i]=' ';
}
stringstream ss(s);
string w;
ll ctr=0;
while(ss>>w)
    ctr++;
cout<<ctr;
return 0;
}

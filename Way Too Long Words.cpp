#include <iostream>
#include <climits>
using namespace std;
int main()
{
string s;
int t;
cin>>t;
while(t--){
cin>>s;
if(s.size()<=10)
    cout<<s<<endl;
else
    cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
}
}

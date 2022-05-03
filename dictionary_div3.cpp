#include <iostream>
#include <algorithm>
#include<map>
#include<math.h>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int main()
{
 ios;
int t; cin>>t;
while(t--){
    string s; cin>>s;
    ll sum=25*(s[0]-'a');
        sum+=s[1]-'a';
        if(s[0]>=s[1])sum++;
cout<<sum<<endl;
}



}

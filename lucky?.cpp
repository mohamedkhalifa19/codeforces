#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
void solve(char a,char b,char c,char d,char e,char f){
    a-='0'; b-='0';c-='0';d-='0';e-='0';f-='0';
if((a+b+c)==(d+e+f))
    cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int main()
{
 ios;
 int t; cin>>t;
char a, b, c,d, e, f;
while(t--){
    cin>>a>>b>>c>>d>>e>>f;
    solve(a,b,c,d,e,f);
}
}

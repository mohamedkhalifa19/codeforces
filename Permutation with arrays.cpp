#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;
const int k=2e5+1;
int fr[k];
int main()
{
ll n,sum1=0,sum2=0;
cin>>n;
for(int i=1;i<=n;i++){
    int x; cin>>x;
  sum1+=x;
}
for(int i=1;i<=n;i++){
    int x; cin>>x;
    sum2+=x;
}
if(sum1==sum2)
    cout<<"yes"<<endl;
else cout<<"no"<<endl;
}

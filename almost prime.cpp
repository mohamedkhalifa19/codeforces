#include <iostream>
#include <algorithm>
#include<map>
#include<math.h>
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ll long long
bool is_prime(int n){
    bool f=0;
    if(n==2)
        return true;
    else{

for(int i=2;i<n;i++)
{
    if(n%i==0) f=1;
}
if(f==0)
    return true;
    else return false;

}
}
using namespace std;
int main()
{
 ios;
 ll n; cin>>n;
    int ctr1=0,ctr2;
    for(int i=2;i<=n;++i){
            ctr2=0;
      for(int j=2;j<=i;++j){
        if(i%j==0&&is_prime(j))
            ctr2++;
    }
    if(ctr2==2) ctr1++;
    }
    cout<<ctr1<<endl;
}

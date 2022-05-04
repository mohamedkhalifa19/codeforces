#include <iostream>
using namespace std;
#include <algorithm>
#include<math.h>
#include<algorithm>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
int main()
{
 ios;
 ll a,b;
cin>>a>>b;
ll fact=1;
if((b-a)>=10){
cout<<0<<endl;
return 0;
}
for(ll i=a+1;i<=b;i++){
fact*=(i%10);
fact%=10;
}

    if(a==b) cout<<1<<endl;
else
cout<<fact  ;
}

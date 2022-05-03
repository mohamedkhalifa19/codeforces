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
 int t;
 cin>>t;
 while(t--){
ll a=0,b=0,x,y,sum=1;
cin>>x>>y;
if(y%x==0){
    b=y/x;
 a=1;
}
cout<<a<<" "<<b<<endl;
 }
}

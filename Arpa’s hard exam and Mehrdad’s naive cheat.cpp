#include <iostream>
using namespace std;
#include <vector>
#include<math.h>
#include<algorithm>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
int main()
{
 ios;
 ll a,fact=1;
cin>>a;//9
if(a==0){
    cout<<1<<endl;
    return 0;
}
int x[4];
x[0]=8;
x[1]=4;
x[2]=2;
x[3]=6;
a--;
cout<<x[a%4];

}

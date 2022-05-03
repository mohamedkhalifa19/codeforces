#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;
int main()
{
char arr[104][104];
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
    cin>>arr[i][j];
}
}
int l,r;
cin>>l>>r;
if(
   (arr[l][r-1]!='.')&&
   (arr[l][r+1]!='.')&&
   (arr[l+1][r-1]!='.')&&
   (arr[l+1][r]!='.')&&
   (arr[l+1][r+1]!='.')&&
   (arr[l-1][r-1]!='.')&&
   (arr[l-1][r]!='.')&&
   (arr[l-1][r+1]!='.')
   )
cout<<"yes"<<endl;
else cout<<"no"<<endl;

}

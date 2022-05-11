#include <iostream>
#include <vector>
#include<map>
#include<algorithm>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
void solve(int arr[],int n){
int mini=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<mini)
        mini=arr[i];
}
ll sum=0;
for(int i=0;i<n;i++){
  sum+=arr[i]-mini;
}
cout<<sum<<endl;
}
int main()
{
 ios;
 int t,n; cin>>t;
while(t--){
    cin>>n; int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    solve(a,n);
}
}

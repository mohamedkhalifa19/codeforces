#include <iostream>
#include <string.h>
#include <vector>
#define ll long long
using namespace std;
int main()
{
ll n,t;
cin>>n>>t;
int arr[n];
for(int i=1;i<=n;i++){
    cin>>arr[i];
}
ll prefix[n];
prefix[0]=0;
prefix[1]=arr[1];
for(int i=2;i<=n;i++){
    prefix[i]=arr[i]+prefix[i-1];
}
ll l,r;
while(t--){
    cin>>l>>r;
    cout<<prefix[r]-prefix[l-1]<<endl;
}
}

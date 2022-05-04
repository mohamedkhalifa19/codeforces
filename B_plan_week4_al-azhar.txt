#include <iostream>
#include <algorithm>
#include<map>
#include<algorithm>
#define ll long long
#define ios std::ios_base::sync_with_stdio(0); cin.tie(NULL);
bool binarySearch(int arr[],int l,int h,int key){
while(l<=h){
    int m=(l+h)/2;   //1 2 3 4 5
    if(arr[m]==key) return true;
    else if(arr[m]>key) h=m-1;
    else l=m+1;
}
return false;
}
using namespace std;
const int k=2e5+5;
int fr[k];
int main()
{
 ios;
int t,n; cin>>n>>t;
int a[n];
map<int,int>k;
for(int i=0;i<n;i++){
    cin>>a[i];
   k[a[i]]=i+1;
}
sort(a,a+n);
while(t--){
 int x; cin>>x;
 if(k.count(x)){
   cout<<"Yes"<<" "<<k[x]<<endl;
 }
 else
 cout<<"No"<<endl;
}



}
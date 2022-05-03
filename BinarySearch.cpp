#include <iostream>
#include <string.h>
#include <algorithm>
#define ll long long
using namespace std;
string binarySearch(int arr[],int l,int h,int key){
while(l<=h){
    int mid=(l+h)/2;
    if(arr[mid]==key) //1 2 3 4 5
        return "found";
    else if(arr[mid]>key)
        h=mid-1;
    else
        l=mid+1;
}
return "not found";
}
int main()
{
int n,t,x;
cin>>n>>t;
int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];
sort(arr,arr+n);
while(t--){
        cin>>x;
    cout<<binarySearch(arr,0,n-1,x)<<endl;
}
}

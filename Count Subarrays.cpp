#include <iostream>
#include <map>
#include <vector>
#define ll long long
using namespace std;
int main()
{
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int arr[n],ctr=n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        int mini=arr[i];
        for(int j=i;j<n-1;j++){
            if(mini<=arr[j+1]){
                mini=arr[j+1];
                ctr++;
            }
            else break;
        }
    }
    cout<<ctr<<endl;
}
}

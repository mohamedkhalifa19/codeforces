#include <iostream>
#include <string.h>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
ll n,ctr=0;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

bool check=true;
while(check){
for(int i=0;i<n;i++){
    if(arr[i]%2!=0)
    check=false;
    arr[i]/=2;
}
if(check==true)
    ctr++;

}
cout<<ctr;
}

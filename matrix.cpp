#include <iostream>
#include <string.h>
#include <vector>
#define ll long long
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n][n];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
    cin>>arr[i][j];
}
}
int sum1,sum2;
sum1=sum2=0;
for(int i=0;i<n;i++){
sum1+=arr[i][i];
sum2+=arr[i][n-i-1];
}
cout<<abs(sum1-sum2)<<endl;
}

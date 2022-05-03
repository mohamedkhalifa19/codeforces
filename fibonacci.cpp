#include iostream
#include string.h
#include algorithm
#define ll long long
using namespace std;
int main()
{
long long n;
cinn;
long long arr[50];
arr[0]=0,arr[1]=1;
for(int i=2;i50;i++){
    arr[i]=arr[i-1]+arr[i-2];
}
n--;
cout<<arr[n]endl;
}
